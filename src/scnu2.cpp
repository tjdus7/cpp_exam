#include <iostream>
using namespace std;

int main(){
    int x;
    x = 10;

    int* ptr;
    ptr = &x;

    cout << x << endl;
    cout << *ptr << endl << ptr;

    *ptr = 20;
    cout << x << endl;
    
    return 0;
}