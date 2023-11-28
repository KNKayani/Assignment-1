/*______________________________________________
Given an integer array and an integer X. Find if there’s a triplet in the array 
which sums up to the given integer X.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main ()
{
	int a[11] = {0,1,2,3,4,5,6,7,8,9,10};  //declaring array of 11 elements.
int X;      //declaring number to find triplet.
cout<<"enter the value to find triplet: ";
cin>>X;    //input from user.
for ( int i=0;i<=10;i++)       //declaring i with limit of 10.
{
	for(int j=0;j<=10;j++)       //declaring j with limit of 10.
	{for(int k=0;k<=10;k++){      //declaring k with limit of 10.
		if(a[i]+a[j]+a[k]==X)
		{cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;    //print triplets.
		}
	}
	}
}
return 0;
 }
