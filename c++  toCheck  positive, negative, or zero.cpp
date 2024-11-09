#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	  cout<<"   welcome to Check if a number is positive, negative, or zero"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    double number; 
    bool ch=1;
    while(ch){
    	cout<<"Enter the number: ";
    	cin>>number;
    	if(number>0)
    	cout<<"positive number"<<endl<<endl;
    	else if(number<0)
    	cout<<"negitive number"<<endl<<endl;
    	else
		cout<<"the number is zero"<<endl<<endl<<endl;
    	
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
