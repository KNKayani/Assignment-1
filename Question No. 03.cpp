/*______________________________________________________________________________________
ASSIGNMENT No. 01                                            QUESTION No. 03
Write a C++ program, take an integer value from user and check if it’s greater
than 10 and less thanequal to 20. Print 1 if yes and print 0 if no. Use 
appropriate datatype for output.
KASHIF NADEEM KAYANI         456466             ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main() {
	cout<<"Question No.03"<<endl;
	int a;
	cout<<"Enter The Value Of a ";
	cin>>a;
	if(a>10&&a<=20)
		{cout<<"1"<<endl;}
	else 
	cout<<"0"<<endl;
	return 0;
}
