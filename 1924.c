#include <iostream>
#include <string>

using namespace std;

int main() {
    int dayPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string date[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int month;
    int day;
    
    cin >> month >> day;
    
    int diffMonth = month - 1;
    int diffDay = day - 1;
    for(int i = diffMonth; i >= 1; i--) {
        diffDay += dayPerMonth[i];
    }
    
    cout << date[diffDay%7] << endl;
    
    
}
