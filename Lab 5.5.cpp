#include <sstream>
#include <iostream>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";
    if (n < 0) return "Please enter a natural number.";
    string result = "";
    while (n > 0) {
        result = to_string(n % 2) + result;
        n /= 2;
    }
    return result;
}

string decimalToOctal(int n) {
    if (n == 0) return "0";
    if (n < 0) return "Please enter a natural number.";
    string result = "";
    while (n > 0) {
        result = to_string(n % 8) + result;
        n /= 8;
    }
    return result;
}

int main() {
    int decimalNumber;
    cout << "N: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cout << "Please enter a natural number." << endl;
        return 1;
    }

    cout << "The number in the binary number system: " << decimalToBinary(decimalNumber) << endl;
    cout << "The number in the Octal number system: " << decimalToOctal(decimalNumber) << endl;

    return 0;
}
