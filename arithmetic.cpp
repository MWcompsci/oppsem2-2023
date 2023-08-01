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

int binary_to_decimal(string binary_num) {
    int decimal_result = 0;
    int power = 1;

    for (int i = binary_num.length() - 1; i >= 0; i--) {
        if (binary_num[i] == '1') {
            decimal_result += power;
        }
        power *= 2;
    }

    return decimal_result;
}

string add_binary(string binary_num1, string binary_num2) {
    int decimal_num1 = binary_to_decimal(binary_num1);
    int decimal_num2 = binary_to_decimal(binary_num2);
    int sum = decimal_num1 + decimal_num2;
    return decimal_to_binary(sum);
}

string subtract_binary(string binary_num1, string binary_num2) {
    int decimal_num1 = binary_to_decimal(binary_num1);
    int decimal_num2 = binary_to_decimal(binary_num2);
    int difference = decimal_num1 - decimal_num2;
    return decimal_to_binary(difference);
}

int main() {
    string binary_num1, binary_num2;
    cout << "Enter two binary numbers: ";
    cin >> binary_num1 >> binary_num2;

    cout << "Addition: " << add_binary(binary_num1, binary_num2) << endl;
    cout << "Subtraction: " << subtract_binary(binary_num1, binary_num2) << endl;

    return 0;
}
