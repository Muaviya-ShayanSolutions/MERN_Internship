#include <iostream>
using namespace std;

int main()
{
    int number=0,rev=0,digit=0;
    cout << "Enter Positive Number : ";
    cin>>number;
    int nu = number;
    do{
    	digit = number % 10;
    	rev = (rev *10 )+ digit;
    	number = number /10;
    	
	}while(number>0);
	cout << "Reversed Number  = " << rev <<endl;
	if(nu == rev){
		cout << "It's a palindrome";
		
	}else{
		cout << "It's not a palindrome";
	}
    return 0;
}
