#include<iostream>
using namespace std;
int main(){
	
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"   welcome to find the area of a triangle"<<endl;
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
	bool ch=1;
	
	while(ch)
	{
		
	    double area,base,height;
		cout<<"Enter the base of the triangle:  ";
		cin>>base;
		cout<<"Enter the height of the triangle:  ";
		cin>>height;
		area=0.5*base*height;
		cout<<"The area of triangle is:"<<area<<endl<<endl<<endl;
		cout<<"do you want to calcualate another time? \nEnter {No} to stop or any other thing to continue :\n";
		string choice;
		cin>>choice;
		if ( choice=="yes"||choice=="Yes"||choice=="YES")
		{
	
			ch=1;
		}
		else if (choice=="No"||choice=="no"||choice=="NO")
		{
			ch=0;
		}
	}
	return 0;
}
