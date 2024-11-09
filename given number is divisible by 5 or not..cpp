#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"====================================================="<<endl;
	cout<<"  Welcome To find the root of quadratic equation"<<endl;
	cout<<"====================================================="<<endl;
    bool ch=1;
	while(ch){
	double a,b,c;// Declare variables to store coefficients and roots
	int number;
	cout<<"Enter a number :";
	cin>>number;
	
		if (number%5==0)  // Check if the number is divisible by 5
		{
		cout<<"given number is divisible by 5."<<endl;
		}    
		else {
		cout<<"given number is not divisible by 5."<<endl<<endl<<endl<<endl;
	}
	
	cout<<"do you want to calcualate another time? \nEnter {No} to stop or any other thing to continue :\n";
	string choice;
	cin>>choice;
	if ( choice=="no"||choice=="No"||choice=="NO")
	{
		ch=0;
	}
	else if (choice=="Any other thing to continue")
	{
		ch=1;
		}
 }
	return 0;
}
