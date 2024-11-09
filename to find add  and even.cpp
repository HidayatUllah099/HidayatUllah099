
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	  cout<<"   welcome to find the {ADD}and {EVEN} of the number"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    bool ch=1;
    while(ch){
    	int number;
    	cout<<"Enter a number :";
    	cin>>number;
    	if (number%2==0)
    	cout<<"The number is even."<<endl<<endl;
    	else
    	cout<<"The number is add."<<endl<<endl;
    	
    	cout<<"do you want to calcualate another time? \nEnter {No} to stop or any other thing to continue :\n";
		string choice;
		cin>>choice;
		if ( choice=="no"||choice=="No"||choice=="NO")
		{
			ch=0;
		}
		else if (choice=="Any other thing to continue"){
			ch=1;
		}
	}
	return 0;
	
	
}
