/*______________________________________________
Write a C++program for a string which may contain lowercase and uppercase 
characters. The task is to remove all duplicate characters from the string and find 
the resultant string.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/
#include<iostream>
using namespace std;
int main ()
{
	string a;   //declaring stirng a.
	cin>>a;  //input from user
	for ( int i=0;i<a.length();i++)   //using for loop
	{
		
		for ( int j=0;j<a.length();j++ ){  
			
			if (i!=j)   //if i is not equal to j
			
			 { 
				
			if (a[i]==a[j]) 
		{  
			a[j]=a[j+1];   //move j to next place
			a[j+1] = ' ';   //fill next place with space
		} 
		
		
		}  
		
} 
	} 
	for (int i=0;i<a.length();i++)
	{
	cout<<a[i];    //print output.
	}
		return 0;
	
	  }
