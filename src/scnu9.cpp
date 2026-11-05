
#include <iostream>

class Rectangle {
private:
    int height;
    int width;

public:
    Rectangle();
    Rectangle(int height, int width);
    void setheight(int height);
    void setwidth(int width);

    int getheight();
    int getwidth();
};

Rectangle :: Rectangle() {
    height = 1;
    width = 1;
}

Rectangle :: Rectangle(int height, int width) {
    this -> height = height;
    this -> width = width;
}

void Rectangle :: setheight(int height) {
    this -> height = height;
}

void Rectangle :: setwidth(int width) {
    this -> width = width;
}

int Rectangle :: getheight() {
    return height;
}

int Rectangle :: getwidth() {
    return width;
}

int main() {

    Rectangle rectangle1;
    std::cout << "height: " << rectangle1.getheight() << std::endl;
    std::cout << "width: " << rectangle1.getwidth() << std::endl;

    Rectangle rectangle2(6, 7);
    std::cout << "height: " << rectangle2.getheight() << std::endl;
    std::cout << "width: " << rectangle2.getwidth() << std::endl;

    rectangle1.setheight(5);
    rectangle1.setwidth(10);
    std::cout << "height: " << rectangle1.getheight() << std::endl;
    std::cout << "width: " << rectangle1.getwidth() << std::endl;

    return 0;
}
