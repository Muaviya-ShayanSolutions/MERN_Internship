#include <iostream>

using namespace std;
string numbers_to_words[] = {
    "",
    "One",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Eleven",
    "Twelve",
    "Thirteen",
    "Fourteen",
    "Quarter",
    "Sixteen",
    "Seventeen",
    "Eighteen",
    "Nineteen",
    "Twenty",
    "TwentyOne",
    "TwentyTwo",
    "TwentyThree",
    "Twentyfour",
    "Twentyfive",
    "Twentysix",
    "Twentyseven",
    "Twentyeight",
    "Twentynine",
    "Half"
};
bool isADigit(string str){
	bool check = false;
	for (int i = 0; i < str.length(); i++) {
      if(isdigit(str[i])){
      	check = true;
	  }
   }
   return check;
}
string convertToWords(int hour, int min) {
    if (hour > 24 || hour < 0 || min < 0 || min > 60) {
        cout << "Invalid Time Entered..! ";
    } else {
        cout << "Time = " << hour << " : " << min << endl << endl;
        if (min == 00) {
            return numbers_to_words[hour] + " o' clock";
        } else if (min == 15) {
            return "Quarter Past " + numbers_to_words[hour];
        } else if (min == 30) {
            return "Half Past " + numbers_to_words[hour];
        } else if (min == 45) {
            return "Quarter to " + numbers_to_words[hour + 1];
        } else if ((min >= 1 && min <= 14) || (min >= 16 && min <= 29)) {
            return numbers_to_words[min] + " minutes past " + numbers_to_words[hour];
        } else if ((min >= 46 && min <= 59) || (min >= 31 && min <= 44)) {
            return numbers_to_words[60 - min] + " minutes to " + numbers_to_words[hour + 1];
        } else if (min == 60) {
            return numbers_to_words[hour + 1] + " o' clock";
        } else {
            return "Something went wrong";
        }

    }
}
int main() {
    string hour, min;
    cout << "Enter Hour : ";
    cin >> hour;
    cout << endl << "Enter Minutes : ";
    cin >> min;
    cout << endl;
    if(isADigit(hour) && isADigit(min)){
    	string result = convertToWords(stoi(hour), stoi(min));
    	cout << result;
	}
	else{
		cout << "Invalid Inputs.";
	}
    
}	
