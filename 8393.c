#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    int sum = 0;
    for(int i=1; i <= input; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

