
#include <iostream>
#include <algorithm>

using namespace std;

void checkFirstNonRepeating(string str){
	int flag;
	for(int i = 0; i < str.length(); i++) {
		
     flag = 0; 
     for(int j = 0; j < str.length(); j++) {
        if((str[i] == str[j]) && (i != j)) {
             flag = 1;
             break;
        }
     }
      if (flag == 0) {
          cout << "First non-repeating character is : "<<  str[i];
          break;
      }
 }
 if (flag == 1) {
     cout << "Didn't find any non-repeating character";
 }
}
int main() {
 	string str;
 	cout << "Enter String : ";
	//cin>> str;
	getline(cin, str);
	str.erase(remove_if(str.begin(), str.end(), ::isspace),str.end());
 	cout << str <<endl;
 	checkFirstNonRepeating(str);
  	return 0;
}
