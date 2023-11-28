
/*______________________________________________
Write a C++ program, take two string as input from user and check if both 
strings are equal or not. If they are equal make them unequal by rotating string.
KASHIF NADEEM KAYANI       456466         ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main ()
{ 
 string a,b;  //declaring two strings
 cin>>a>>b;   //input from user 
 for( int i=0;i<a.length() ;i++)   //declaring i is less than lenght of string a
 { cout<<i<<"th element of a is "<<a[i]<<endl;    //printing elements of a
   cout<<i<<"th element of b is "<<b[i]<<endl;    //printing elements of b
    if(a[i]==b[i])       //if a=b, print elements of a that are equal to b
  { cout<<endl;
 cout<<a[i]<<" is equal to "<<b[i]<<endl;}
 cout<<endl;
 }
 
if(a==b)
{ 
for(int i=a.length();i>=0;i--)
{b[i]=a[i] ;
cout<<b[i];}
}
	
}
