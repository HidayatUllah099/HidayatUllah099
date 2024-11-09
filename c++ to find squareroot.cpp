
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	  cout<<"   welcome to find the squareRoot of the number"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    float number,squareRoot;
    bool ch=1;
    while(ch){
    	cout<<"Enter a number: ";
    	cin>>number;
    	squareRoot=sqrt(number);
    	cout<<"SquarRoot Of The Number is :"<<squareRoot<<endl<<endl<<endl;
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
