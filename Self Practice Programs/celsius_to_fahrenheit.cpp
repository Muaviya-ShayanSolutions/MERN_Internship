//celsius to fahrenheit
#include <iostream>
using namespace std;
int main()
{
	float temp;
	cout << "Enter Temprature : ";
	cin >> temp;
	cout << "Temperature in Celsius : " << temp;
	cout << "Temprature in Fahrenheit : " << (temp *1.8)+32;
	//F = ( °C × 9 5 ) + 32
}
