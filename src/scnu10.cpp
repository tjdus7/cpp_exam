#include <iostream>
using namespace std;

void testFunction(){
    int localVar = 0;
    static int staticVar;
    

    localVar++;
    staticVar++;

    cout << "localVar: " << localVar << ", staticVar: "  << staticVar << endl;
}

int main(){
    for (int i = 0; i < 5; ++i){
        testFunction();
    }
    return 0;
}