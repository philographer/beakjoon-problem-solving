#include <iostream>
using namespace std;

int main() {
    int input;
    
    cin >> input;
    
    for(int i=0; i < input; i++) {
        for(int i2=0; i2 < input-i; i2++) {
            cout << "*";
        }
        cout << endl;
    }
}
