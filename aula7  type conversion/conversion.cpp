#include<iostream>

int main () {

    //type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit - precede value with new datatype 

    // double x =  (int)3.14;
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;

    std::cout << score << "%" ;

    return 0;
}