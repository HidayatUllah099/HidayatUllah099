#include<iostream>
using namespace std;
int main(){
	cout<<"   ============================================================================="<<endl;
	cout<<" ''''''''''''         Welcome To Find Largest Number          '''''''''"<<endl;    // Display a welcome message
	cout<<"   ============================================================================="<<endl<<endl;
	bool ch=1;
	while(ch)
	{    // Declare three integer variables from user inputs
        int number1, number2, number3;                      
        cout << "Enter first integer: ";                        
        cin >> number1;                                      

        cout << "Enter second integer: ";                       
        cin >> number2;                                     

       cout << "Enter third integer: ";                        
       cin >> number3;                                      
      
	   int largest;                                           
    
       // Determine the largest number using comparison operators
       if (number1 >= number2 && number1 >= number3) {
        largest = number1;                                 
    }  else if (number2 >= number1 && number2 >= number3) {
        largest = number2;                                      
    }  else {
        largest = number3;                                  
    }
        cout << "The largest number is: " << largest << endl<<endl<<endl;// Output the largest number
		
        //if you want to calculate another time	
		cout<<"do you want to calcualate another time? \nEnter {No} to stop or any other thing to continue :\n";
		string choice;
		cin>>choice;                                               // Input the user's choice
		if ( choice == "yes" || choice == "Yes" || choice == "YES" )
		{
			ch=1;                                                  
		}
		else if ( choice == "No" || choice == "no" || choice == "NO" )
		{
			ch=0;                                                 
		}
	}
	    return 0;                                                    
}
