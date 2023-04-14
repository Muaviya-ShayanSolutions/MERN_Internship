#include <stdio.h>
#include <iostream>
 using namespace std;
int main()
{
    int n = 5;
    ((n & 1) && printf("odd")) || printf("even");
 	cout <<endl<<(n & 1);
    return 0;
}
