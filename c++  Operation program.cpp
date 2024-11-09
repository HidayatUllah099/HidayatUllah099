#include<iostream>
using namespace std;
int main (){
	
	cout<<"================================================"<<endl;
	cout<<"Welcome To Find (+,_,*,/,%) operation ?"<<endl;
	cout<<"================================================"<<endl;
	while (1){
	//variable declaration 
	int  number1,number2;
	bool result;
	cout<<"Enter the 1st integer :";
	cin>>number1;
	cout<<"Enter the 2nd integer :";
	cin>>number2;
	cout<<"\nArthmetic Operators :\n";
	cout<<"Addition :"<<(number1+number2)<<endl;
	cout<<"Subtraction :"<<(number1-number2)<<endl;
	cout<<"Multiplication :"<<(number1*number2)<<endl;
	cout<<"Division :"<<(number1/number2)<<endl;
	cout<<"modulus :"<<(number1%number2)<<endl;
}
	return 0;
}
