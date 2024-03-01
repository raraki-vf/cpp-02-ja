#include "rectangle.h"

int main(){
    Rectangle input {4, 5};
    float output = Rectangle_area(input);
    std::cout << output << std::endl;
    return 0;
}