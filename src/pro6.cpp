#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "5 number: ";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        cout << num % 10;
        num = num / 10;
    }

    return 0;
}