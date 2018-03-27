#include <iostream>
#include <string>

using namespace std;

int main() {
    int input;
    cin >> input;
    
    string s;
    cin >> s;
    int sum = 0;
    
    for(int i=0; i < s.size(); i++) {
        int iNum = (int)s[i] - 48;
        sum += iNum;
    }
    
    cout  << sum << endl;

    
    return 0;
}

