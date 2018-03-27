#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int input;
    cin >> input;
    
    
    for(int i=0; i < input; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << num1 + num2 << endl;
    }
    
    return 0;
}

