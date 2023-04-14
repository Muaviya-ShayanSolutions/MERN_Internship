#include <iostream>
using namespace std;
void merge(int arr1[],int s1,int arr2[],int s2){
	// merging the two arrays
	int total = s1+s2,i,j,sizeMerge,temp;
	int arrMerge[total];
    for(i=0; i<s1; i++)
    {
        arrMerge[i] = arr1[i];
    }
    for(j=0; j<s2; j++)
    {
        arrMerge[i] = arr2[j];
        i++;
    }
    sizeMerge = i;
    // sorting the merged array in ascending order
    for(j=0; j<(sizeMerge-1); j++)
    {
        for(i=0; i<(sizeMerge-1); i++)
        {
            if(arrMerge[i]>arrMerge[i+1])
            {
                temp = arrMerge[i];
                arrMerge[i] = arrMerge[i+1];
                arrMerge[i+1] = temp;
            }
        }
    }
    for(j=0; j<sizeMerge; j++)
    {
       cout <<  arrMerge[j] << " , ";
    
    }
	
}
int main(){
	int size1,size2;
	cout << "Enter size of First array : ";
	cin >> size1;
	cout << "Enter size of Second array : ";
	cin >> size2;
	cout << "Enter Elements of 1st array : " << endl;
	int arr1[size1],arr2[size2];
	for(int i =0;i<size1;i++)
	{
		cin>> arr1[i];
	}
	cout << "Enter Elements of 2nd array : " << endl;

	for(int i =0;i<size2;i++)
	{
		cin>> arr2[i];
	}
	merge(arr1,size1,arr2,size2);
}

