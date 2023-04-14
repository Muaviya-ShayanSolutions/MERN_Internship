#include <iostream>

using namespace std;
// Converting a String to Integer
int convertToInt(string s) {
    int num = 0;
    for (int i = 0; i < s.length(); i++) {
        num = num * 10 + (s[i] - 48); // s[i] - 48 -> Converting a single character to integer
    }
    return num;
}

//Validation to check range of String
bool rangeValidation(string num1, string num2) {
    return 1 <= num2.length() && num2.length() <= 200 && 1 <= num1.length() && num1.length() <= 200;
}
// Validation to check string has digits Only
bool isNumaric(string s) {
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= '0' && s[i] <= '9') == false) {
            return false;
        }
    }
    return true;
}
// validation to check string with leading zero
bool leadingZeroValidation(string num) {
    return (num[0] == '0' && num.length() > 1) ? false : true;
}
// Int to String Converter
string convertToString(int num) {
    if (num == 0) return "0";
    string str = "";
    while (num > 0) {
        int digit = num % 10;
        char digitChar = 48 + digit;
        str = str + digitChar;
        num /= 10;
    }
    string s ="";
    for (int i = str.length()-1; i >= 0; i--) {
       s = s + str[i];
    }
    return s;
}
string multiply(string s1, string s2) {
    return convertToString(convertToInt(s1) * convertToInt(s2));
}
int main() {
    cout << endl;
    
    string num1 = "1";
    string num2 = "123";
    if (rangeValidation(num1, num2)) {
        if (isNumaric(num1) && isNumaric(num2)) {
            if (leadingZeroValidation(num1) && leadingZeroValidation(num2)) {
                cout << "Result of : " << num1 << " x " << num2 << " = " << multiply(num1, num2);
            } else {
                cout << "Invalid Input..! 'Number with leading 0'";
            }
        } else {
            cout << "Invalid Input..! 'Entered String Does'nt contains all digits.'";
        }

    } else {
        cout << "Invalid Inputs..! 'Range Error'";
    }
    cout << endl;
    return 0;
}
