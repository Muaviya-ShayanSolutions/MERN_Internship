#include <iostream>
#include <algorithm>
using namespace std;

void dispArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}

void checkMissing(int arr[], int range)
{
	int j = 0;
	cout << endl << "Missing Elements : " ;
	for (int i = 1; i < range; i++)
	{
		if (arr[j] != i)
		{
			cout << i << " ";
		}
		else
		{
			j++;
		}
	}
}

int main()
{
	int len, range;
	int arr[len];
	cout << "Enter Number of Elements of array : ";
	cin >> len;
	cout << "Enter Range (n) : ";
	cin >> range;
	cout << "Enter Elememts of Array : " << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	cout << "Array : ";
	dispArray(arr, len);
	sort(arr, arr + len);
	cout << endl << "Sorted Array : ";
	dispArray(arr, len);
	checkMissing(arr, range);

}
