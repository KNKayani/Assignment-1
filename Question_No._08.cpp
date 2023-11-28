/*______________________________________________
Suppose an integer array a[5] = {1,2,3,4,5}. Add more elements to it and 
display them in C++.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/
#include<iostream>
using namespace std;
int main ()
{
	
	int a[5]={1,2,3,4,5};     //declaring array a with 5 elements
		int n;       //declaring number of elements to be added

	cout<<"enter number of elements to be added";
	cin>>n;   
	int b[n+5];         //declaring array b 

	for ( 	int i=0;i<5;i++)   //using for loop
	{ 
		b[i]=a[i];    //inputting values of a into b 
	}
	for ( int j=5;j<n+5;j++)
	{
    cout<<"Enter value: ";
		cin>>b[j];    //input elements of array b 
		
}
for(int i=0; i<n+5; i++){ 
		cout<<b[i]<<" ";   //print array b
}
	

	return 0;
}
