/*
					*****
					****
					***
					**
					*
*/
//#include <iostream>
//using namespace std;
//int main(){
//	for(int i=5;i>0;i--){
//		for(int j=i;j>0;j--){
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

/*
					*
					**
					***
					****
					*****
*/


//#include <iostream>
//using namespace std;
//int main(){
//	for(int i=0;i<5;i++){
//		for(int j=i;j>0;j--){			
//			cout << "*";
//		}
//		cout << endl;
//	}
//}


//

#include <iostream>
using namespace std;
int main() 
{
string str;
cout << "Enter a String : ";

cin>>str;
int count = 0;
cout << "Length of string : ";
for(int i = 0;str[i];i++) // till the string character is null
    count++;
cout<<count;
}
