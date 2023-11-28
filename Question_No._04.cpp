/*______________________________________________________________
Write a C++ program that uses a while loop to find the largest prime number 
less than a given positive integer N. Your program should take the value of N as 
input from the user and then find the largest prime number less than or equal to 
N. You are not allowed to use any library or pre-existing functions to check for 
prime numbers.
KASHIF NADEEM KAYANI           456466              ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main (){
	int i, j, n, pnum;    //declaring 4 variables
	bool a;    //declaring flag for prime number
	a=false;   //initializing boolean as false
	cout<<"Please Enter a Number to Check: ";
	cin>>n;   //input from user 
	i=n;    //declaring that i is equal to n
	while(i>1){
			j=i-1;
			
		while(j>1){
			if(i%j==0){     //if number n  is not prime prime
				a=false;
				break;
		}
		else{
			a=true;    //otherwse bool is true 
			j--;
			continue;
		}
			
		}
		if(a==true){
			pnum=i;
			break;
		}
		
		i--;
	}
	cout<<"Largest Prime Number Below "<<n<<" is: "<<pnum<<endl;   ///printing largest prime number.
	return 0;
}
