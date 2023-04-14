#include <iostream>

using namespace std;

//Function for reversing a string getting a string as a parameter 
string reversedString(string str) {
  string s ="";
  for (int i = str.length()-1; i >= 0; i--) {
    s = s+str[i]; // pushing each last character to a new string
  }
  return s;
}

// Function to Display a String
void dispString(string title, string str) {
  cout << endl << title << " : " << str;
}

// Function to Get a String from user 
string getString() {
  string str;
  cout << "Enter a string : ";
  cin >> str;
  return str;
}

int main() {
  string str = getString();
  dispString("Orignal String", str);
  dispString("Reversed", reversedString(str));

}
