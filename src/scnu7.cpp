#include <iostream>
using namespace std;
class Circle{
    private:
        double radius; // 생성자 : radius --> 없어도 실행 됨
    public:
        Circle(double radius);
        Circle();
        Circle (const Circle& circle);
        ~Circle();

        void setRadius(double radius);
        inline void Circle :: setRadius(double radius) {
            this-> radius = radius;
        }

        double getRadius () const;
        double getArea() const;
        double getPerimeter() const;
};

Circle :: Circle(double rds)
{
    this-> radius = rds;
    cout << "The parameter constructor was called" << endl;
}

Circle :: Circle()
: radius (0.0){
    cout << "The default constructor was called." << endl;
}

Circle :: Circle(const Circle& circle)
: radius (circle.radius){
    cout << "The copy constructor was called." << endl;
}

Circle :: ~Circle(){
    cout << "The destructor was called for circle with radius";
    cout << this-> radius << endl;
}



double Circle :: getRadius() const{
    return this-> radius;
}

double Circle :: getArea() const{
    const double PI = 3.14;
    return(PI * radius * radius);
}

double Circle :: getPerimeter() const{
    const double PI = 3.14;
    return(2 * PI * radius);
}



int main() {
    Circle circle1 (5.2);
    cout << "Radius:" << circle1.getRadius() << endl;
    cout << "Area:" << circle1.getArea() << endl;
    cout << "Perimeter:" << circle1.getPerimeter() << endl << endl;

    Circle circle3;
    circle3.setRadius(3);
    cout << "Radius:" << circle3.getRadius() << endl;
    cout << "Area:" << circle3.getArea() << endl;
    cout << "Perimeter:" << circle3.getPerimeter() << endl << endl;

    Circle circle2(circle1);
    circle2.setRadius(2);
    cout << "Radius:" << circle2.getRadius() << endl;
    cout << "Area:" << circle2.getArea() << endl;
    cout << "Perimeter:" << circle2.getPerimeter() << endl << endl;
    return 0;
}