#include <iostream>
using namespace std;

class Counter {
    private:
        int instanceCount;
        static int staticCount;

    public:
        Counter() {
            instanceCount = 0;
            staticCount++;
        }
        
        void increment() {
            instanceCount++;
        }

        void showCounts() {
            cout << "Instance Cnt: " << instanceCount << endl;
            cout << "Stacit Cnt: " << staticCount << endl;
        }
};

int Counter :: staticCount = 0;

int main() {
    Counter c1;
    c1.increment();
    c1.showCounts();

    cout << "----" << endl;
    
    Counter c2;
    c2.increment();
    c2.increment();
    c2.showCounts();

    cout << "----" << endl;

    c1.showCounts();
    return 0;
}