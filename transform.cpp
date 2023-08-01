#include <iostream>
#include <string>
using namespace std;

string decimal_to_binary(int decimal_num) {
    if (decimal_num == 0) {
        return "0";
    }

    string binary_result = "";
    while (decimal_num > 0) {
        int remainder = decimal_num % 2;
        binary_result = to_string(remainder) + binary_result;
        decimal_num = decimal_num / 2; // Integer division
    }

    return binary_result;
}

int main() {
    int decimal_num;
    cout << "Enter a number in base 10: ";
    cin >> decimal_num;

    string binary_num = decimal_to_binary(decimal_num);
    cout << "Binary representation: " << binary_num << endl;

    return 0;
}
