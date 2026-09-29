#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    int* ptr_a; //ptr 앞에 '*'을 찍으면 역참조로 값을 나타냄
    int* ptr_b; //그냥 ptr은 메모리 주소값을 나타냄
    ptr_a = &a;
    ptr_b = &b;

    cout << *ptr_a + *ptr_b << endl;
    return 0;
}