#include<iostream>
using namespace std;
int main (){
	
	double length, width, perimeter;
	
		cout<<"====================================================="<<endl;
	cout<<"  Welcome To Find The Perimeter Of Rectangle"<<endl;
		cout<<"====================================================="<<endl;
    while(1){
    	cout<<"Enter the length of rectangle : ";
    	cin>>length;
    	cout<<"ENter the width of rectangle : ";
    	cin>>width;
    	perimeter=2*(length+width);
    	cout<<"Perimeter of the rectangle is : "<<perimeter<<endl<<endl<<endl;
	}
	return 0;
}
