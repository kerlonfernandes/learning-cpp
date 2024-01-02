#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Erro ao inicializar o Winsock." << std::endl;
        return 1;
    }

    char hostname[256];
    if (gethostname(hostname, sizeof(hostname)) == 0) {
        struct addrinfo hints, *res, *p;
        int status;

        memset(&hints, 0, sizeof hints);
        hints.ai_family = AF_INET;  // AF_INET para IPv4, AF_INET6 para IPv6
        hints.ai_socktype = SOCK_STREAM;

        if ((status = getaddrinfo(hostname, NULL, &hints, &res)) == 0) {
            for (p = res; p != nullptr; p = p->ai_next) {
                void *addr;
                char ipstr[INET_ADDRSTRLEN];

                if (p->ai_family == AF_INET) {
                    struct sockaddr_in *ipv4 = reinterpret_cast<struct sockaddr_in*>(p->ai_addr);
                    addr = &(ipv4->sin_addr);
                } else {
                    // Ignorar tipos de endereços diferentes de IPv4 por simplicidade
                    continue;
                }

                // Converte o endereço IP de binário para string
                inet_ntop(p->ai_family, addr, ipstr, sizeof ipstr);
                std::cout << "Endereço IP: " << ipstr << std::endl;
            }

            freeaddrinfo(res); // Libera a lista de resultados quando não for mais necessária
        } else {
            std::cerr << "Erro ao obter informações de endereço: " << gai_strerrorA(status) << std::endl;
        }
    } else {
        std::cerr << "Erro ao obter o nome do host." << std::endl;
    }

    WSACleanup(); // Libera recursos do Winsock

    return 0;
}
