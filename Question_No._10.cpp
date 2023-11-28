/*______________________________________________________________
. Implement Bubble Sort on an array of 6 integers.
KASHIF NADEEM KAYANI           456466              ME-15 SEC A
*/

#include <iostream>
using namespace std;
int main(){
	int i,j,temp;   //declaring three variables 
	int a[6];    //declaring aray a with 6 elements
	for(i=0; i<6; i++){    //using for loop
		cout<<"Enter Values for Array: ";
		cin>>a[i];    //input from user 
	}
	for (int i=0; i<5; i++)    //again using for loo[
	{
	for(j=0; j<5; j++){    //using nested for loop
			if(a[j]>a[j+1]){    //if previous number is greater than following number 
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}}
	for(i=0; i<6; i++){   //using for loop for printing 
		cout<<a[i]<<", ";   //printing results
	}
	return 0;
}
