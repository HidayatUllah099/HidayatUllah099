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
	double root1, root2;
	cout<<"Enter coefficient a :";
	cin>>a;
	cout<<"Enter coefficient b :";
	cin>>b;
	cout<<"Enter coefficient c :";
	cin>>c;
	double delta=((b*b)-4*(a*c));
	double rtdelta=sqrt(delta);
	root1=(-b+rtdelta)/(2*a);
    root2=(-b-rtdelta)/(2*a);
	cout<<"Root of the number is:\ntherefore   x="<<root1<<",    x="<<root2<<endl<<endl<<endl;
	
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
