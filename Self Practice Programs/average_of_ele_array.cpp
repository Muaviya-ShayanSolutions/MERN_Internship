//#include <iostream>
//using namespace std;
//int main(){
//	int arr [6 ]={3,6,7,8,9,0};
//	int total = 0;
//	for(int i=0;i<(sizeof(arr)/ sizeof(int));i++){
//		
//		total +=arr[i];
//		
//	}
//	cout << total << " "<< sizeof(arr);
//	cout <<"Average : "<< total/(sizeof(arr)/ sizeof(int));
//}

#include<iostream>
using namespace std;

int main(){
    int num, lastdig, reverse = 0;
    cout << "Enter a number:";
    cin >> num;
    int j=num;
while(num > 0){
lastdig = num % 10;
reverse = (reverse * 10) + lastdig;
num = num/10;
}

if (j == reverse){
    cout << "number is palindrome";
}
else {
    cout << "number is not a palindrome";
}
return 0;
}
