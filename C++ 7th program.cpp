#include<iostream>
using namespace std;
int main (){
		cout<<"Welcome To Calculator"<<endl;
	while(1)
	{
    char operation;
    float number1, number2;
    cout <<endl<<endl <<"Enter operator (+, -, *, /, %): ";
    cin >> operation;
    
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
		cout << "Enter 1st your numbers: ";
    cin >> number1;
    cout << "Enter 2nd your numbers: ";
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
	else if(operation=='/'){
		cout<<"inter your 1st number ";
		cin>>number1;
		cout<<"inter your 2nd number ";
		cin>>number2;
		double total= number1/number2;
		cout<<total;
	}
  }
}
