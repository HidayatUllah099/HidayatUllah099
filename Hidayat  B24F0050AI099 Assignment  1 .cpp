#include<iostream>
using namespace std;
int main (){
		
	cout<<"======================================================================="<<endl;
	cout<<"   welcome to find the Ascending and Descending order of 3 number "<<endl;
	cout<<"======================================================================="<<endl;
	bool ch=1;
	
	while(ch)
	{
	double number1, number2, number3;
	cout<<"Enter your 1st number :";
	cin>>number1;
	cout<<"Enter your 2nd number :";
	cin>>number2;
	cout<<"Enter your 3rd number :";
	cin>>number3;                                                                                           
    cout << "Ascending order: ";
   if (number1 < number2 && number1 < number3) {
        cout << number1 << " ";
        if (number2 < number3) {
        cout << number2 << " " << number3 <<endl;
        } else {
        cout << number3 << " " << number2 <<endl;
        }
    } else if (number2 < number1 && number2 < number3) {
        cout << number2 << " ";
        if (number1 < number3) {
        cout << number1 << " " << number3 <<endl;
        } else {
        cout << number3 << " " << number1 <<endl;
        }
    } else {
        cout << number3 << " ";
        if (number1 < number2) {
        cout << number1 << " " << number2 << endl;
        } else {
        cout << number2 << " " << number1 <<endl;
        }
    }

    // Sorting in descending order
    cout << "Descending order: ";
    if (number1 > number2 && number1 > number3) {
        cout << number1 << " ";
        if (number2 > number3) {
        cout << number2 << " " << number3 <<endl;
        } else {
        cout << number3 << " " << number2 <<endl;
        }
    } else if (number2 > number1 && number2 > number3) {
        cout << number2 << " ";
        if (number1 > number3) {
        cout << number1 << " " << number3 <<endl;
        } else {
        cout << number3 << " " << number1 <<endl;
        }
    } else {
        cout << number3 << " ";
        if (number1 > number2) {
        cout << number1 << " " << number2 <<endl;
        } else {
        cout << number2 << " " << number1 <<endl;
        }
    }
    	cout<<"\n \n  do you want to calcualate another time? \n  Enter {No} to stop or any other thing to continue :\n";
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
    
