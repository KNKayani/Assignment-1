/*______________________________________________
Write a C++ program to display factors of a number using for loops.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main ()
{ 
int num;         //declaring number 
cout<<"enter the number: ";      //input from user
cin>>num;
for(int i=1;i<num;i++)   //declaring i as for loop variable
{
	if (num%i==0)     //if entered number is divisible on any number less than itself
	{
	cout<<num<<" is divisible by "<<i<<" "<<endl;
	}

 }
 return 0;
 }
