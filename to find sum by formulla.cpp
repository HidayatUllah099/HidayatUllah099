#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"====================================================="<<endl;
	cout<<"  Welcome To Find Sum by Formula"<<endl;
	cout<<"====================================================="<<endl;
    bool ch=1;
	while(ch){
	
	double n,sum;
	cout<<"Enter a number: ";
	cin>>n;
	sum =n*(n+1)/2 ;//use to this formula.
	cout<<"sum of the number is:"<<sum<<endl<<endl;
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
