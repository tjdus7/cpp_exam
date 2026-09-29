#include <iostream>
using namespace std;

struct Circle{
    double radius;
};

int main(){
    Circle c1;
    c1.radius = 10.5;

    Circle* ptr = &c1;

    // cout << (*ptr).radius << endl;
    cout << ptr->radius << endl;

    return 0;
}