#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
    int num;
    int sum = 0;

    do {
        cout << "Enter a number: ";
        if (cin >> num){
            sum += num;
        }
    } while (!cin.eof());

    cout << "The sum is: " << sum << "\n";
    return 0;

}