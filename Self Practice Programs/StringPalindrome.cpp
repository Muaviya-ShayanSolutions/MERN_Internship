#include <iostream>
#include <algorithm>
using namespace std;

 int main(){
 	string str;
 	cout << "Enter String : ";
 	cin >> str;
	string s =str;
	reverse(str.begin(), str.end());
	cout << "Reversed String : " << str << endl;
 	if(str == s)
	 {
 		cout << "Its a Palindrome";
	 }
	 else
	 {
	 cout << "It is not a Palindrome";
	 }
 	
 }
