#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
void check(string str){
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
 cin >> str;
 
 check(str);
  return 0;
}
