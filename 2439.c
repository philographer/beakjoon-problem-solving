#include <iostream>

using namespace std;
int main() {
    int input;
    
    cin >> input;
    
    for(int i1=0; i1 < input; i1++) {
        for(int i2=0; i2 < input-i1-1; i2++) {
            cout << " ";
        }
        
        for(int i2=0; i2 < i1+1; i2++) {
            cout << "*";
        }
        
        cout << endl;
    }
}
