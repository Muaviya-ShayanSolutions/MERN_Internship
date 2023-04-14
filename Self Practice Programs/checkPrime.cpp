#include <iostream>
using namespace std;

int main()
{
    int number;
    int b=2;
    cout << "Enter Positive Number : ";
    bool prime =true;
    cin>>number;
    if(b!=number){
    	while(b!=number){
    		if(number%b == 0)
        		{
            		prime = false;
            		break;
        		}
    		b++;
		}
	}
	if(prime){
		cout << "Prime";}
		else{cout <<number << " is Not a Prime";
		}
		
	
    return 0;
}
