#include<iostream>
using namespace std;
int main (){
	cout<<"================================================"<<endl;
	cout<<"Welcome To Find Assignment Operation ?"<<endl;                    // Display a welcome message
	cout<<"================================================"<<endl;
	// Infinite loop to continuously ask for input
	while  (1){                   
	//variable declaration 
	int  number1,number2;
	bool result;                          // Variable to store boolean results (not used in this code)
	cout<<"Enter the 1st integer :";	  //inputs intreger from user 
	cin>>number1;
	cout<<"Enter the 2nd integer :"; 	  //inputs intreger from user 
	cin>>number2;
	cout<<"\nArthmetic Operators :\n";    // Display the original values
	int x=number1;                        // Create a copy of number1 in x for performing operations
	x+=number2;                           //number1=number1+number2
	cout<<"x+=number2 :"<<x<<endl;        // Display the result of number1 after addition
	x-=number2;                           //number1=number1-number2
	cout<<"x-=number2:"<<x<<endl;         // Display the result of number1 after subtraction
	x*=number2;                           //number1=number1*number2
	cout<<"x*=number2:"<<x<<endl;         //Display the result of x after multiplication
	x/=number2;                           //number1=number1/number2
	cout<<"x/=number2:"<<x<<endl;         // Display the result of x after division
	x%=number2;                           //number1=number1%number2
	cout<<"x%=number2:"<<x<<endl;
	
}
	return 0;                             // End of the program
}
