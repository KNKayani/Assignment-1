/*______________________________________________________________
Perform division in C++ without / using for loops. You can use / only to display 
the final results. Your dividend must be greater than divisor.
KASHIF NADEEM KAYANI           456466              ME-15 SEC A
*/



#include<iostream>
using namespace std;
int main ()
{
   int dividend,divisor,quotient;    //declaring dividend,divisor and quotient
   cout<<"enter the value of dividend: ";    
   cin>>dividend;    //input dividend from user 
   cout<<"enter the value of divisor: ";
   cin>>divisor;   //inout divisor from user
    quotient=0;   //declaring quotient, equal to 0
    
    
    if( divisor>dividend )   //if divisor is greater than dividend
    {cout<<"the dividend must be greater than divisor"<<endl;
	}
	else    //if dividend is greater than dividend
   for (int i=dividend;i>=divisor;i-- )    //using for loop for i
   { 
   if (i%divisor==0)     //if divisor is divisible on dividend

   {    
   	quotient=quotient+1;   //increment in value of quotient
    } 
   
    
	   }
cout<<"the quotient is "<<quotient<<endl;     //printing quotient  
int remainder;   //declaring remainder 
remainder=dividend%divisor;    //remiander is equal to dividend % divisor
cout<<"the remainder is "<<remainder;   //printing remainder

return 0;
} 
