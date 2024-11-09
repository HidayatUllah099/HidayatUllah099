#include<iostream>
using namespace std;
int main(){
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"   welcome to find the largest number"<<endl;
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
	bool ch=1;
	while(ch)
	{
	float number1, number2, number3;
    // Prompt the user to input three numbers
    cout << "Enter  number  1: ";
    cin >> number1;
    cout << "Enter number  2: ";
    cin >>number2;
	cout << "Enter number  3: ";
    cin >> number3; 
    // Find the largest number using if-else statements
    if (number1 >= number2 && number1 >= number3) {
        cout << "The largest number is: " << number1 <<endl;
    } else if (number2 >= number1 && number2 >= number3) {
        cout << "The largest number is: " << number2 <<endl;
    } else if (number3 >= number1 && number3 >= number2 ){
        cout << "The largest number is: " << number3 <<endl<<endl;
    }
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
