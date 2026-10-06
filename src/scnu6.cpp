#include <iostream>
using namespace std;
int globalvar = 10;

void examplefunction(){
    static int localvar = 20;
    localvar++;
    int globalvar = 20;
    // cout << globalvar;
    // cout << ::globalvar;
    cout << localvar << endl;
}

int main(){
    int mainvar = 30;
    int globalvar = 20;
    
    if(true){
        int blockvar = 40;
        
        // cout << "inside block: blockvar = " << blockvar << endl;
        // cout << ::globalvar << endl;
    }
    // cout << blockvar;
    examplefunction();
    // cout << localvar << endl; // 참조탐색범위에도 없고, examplefunction을 실행하고 나면 메모리에서 사라져서 에러발생
    // cout << "global variable : globalvar = " << globalvar << endl;
    // cout << "main variable: mainvar = " << mainvar << endl;
    return 0;
}