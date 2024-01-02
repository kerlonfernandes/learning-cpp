#include <windows.h>
#include <iostream>

void moveAndClick(int x, int y) {
    // Move o cursor para a posição desejada
    SetCursorPos(x, y);

    // Simula um clique esquerdo do mouse
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

int main() {
    // Especifica as coordenadas para mover e clicar
    int targetX = 200;
    int targetY = 500;

    // Move e clica
    moveAndClick(targetX, targetY);

    std::cout << "Mouse movido e clicado em (" << targetX << ", " << targetY << ")." << std::endl;

    return 0;
}
