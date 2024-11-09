#include<iostream>
using namespace std;
int main(){
	cout<<"welcome to calculator"<<endl;
	char operation;
	int number1,number2;
	cout<<"inter operation(+,-,*,/):";
    cin>>operation;
	    
   if(operation=='+')
{
	cout << "Enter your 1st numbers: ";
    cin >> number1;
    cout << "Enter your 2nd numbers: ";
    cin >> number2;
	cout<< number1 + number2;
}
	else if(operation=='-')
{
	cout << "Enter your 1st numbers: ";
    cin >> number1;
    cout << "Enter your 2nd numbers: ";
    cin >> number2;
	cout<< number1 - number2;
	}
    else if(operation=='*')
    {
	cout << "Enter your 1st numbers: ";
    cin >> number1;
    cout << "Enter your 2nd numbers: ";
    cin >> number2;
	cout<< number1 * number2;
	}
	else if(operation=='/')
{
	cout << "Enter your 1st numbers: ";
    cin >> number1;
    cout << "Enter your 2nd numbers: ";
    cin >> number2;
	cout<< number1 / number2;
	}
return 0;
}
