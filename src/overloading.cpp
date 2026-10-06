#include <iostream>
using namespace std;

void fun(int x, int y){
    cout << x+y;
}

void fun(int x){
    cout << x;
}

// int fun(int x){
//     return x; // return은 상관x
// }

void fun (int x, double y){
    cout << x*y;
}
int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    fun(a, b);
    fun(a);
    //c = fun(b); 
    fun(3, 4.1);
    return 0;
}