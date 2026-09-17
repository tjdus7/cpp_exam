#include <iostream>
using namespace std;

void welcome1(){
    cout << "welcome function world" << endl;
}

void welcome2(int x){
    cout << x << endl;
}

int welcome3(){
    return 20;
}

int welcome4(int x){
    return x+10;
}

int welcome5(int x, int y){
    return x+y;
}

int main(){
    welcome1();
    welcome2(10);

    int a = welcome3();
    cout << a << endl;

    int b = welcome4(20);
    cout << b << endl;

    int c = welcome5(10, 30);
    cout << c << endl;
    return 0;
}