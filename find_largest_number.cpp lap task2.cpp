#include<iostream>
using namespace std;
int main(){
	
	cout<<"   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"<<endl;
	cout<<"             Welcome To Find Largest Number"<<endl;                        // Display a welcome message
	cout<<"   oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"<<endl<<endl;
	bool ch=1;
	// continuously asking from user (input)
	while(ch)
	{
        int number1, number2, number3;                       // Declare three integer variables to store user inputs
        cout << "Enter first integer: ";                        // display  on screen 
        cin >> number1;                                      // Input the first integer

        cout << "Enter second integer: ";                       // display  on screen
        cin >> number2;                                      // Input the second integer

       cout << "Enter third integer: ";                        // display  on screen
       cin >> number3;                                      // Input the third integer
       int largest;                                            // Variable to hold the largest number
    
       // Determine the largest number using comparison operators
       if (number1 >= number2 && number1 >= number3) {
        largest = number1;                                  // number1 is larger than or equal to both number2 and number3
    }  else if (number2 >= number1 && number2 >= number3) {
        largest = number2;                                      // number2 is larger than or equal to both number1 and number3
    }  else {
        largest = number3;                                   // number3 is larger than or equal to both number1 and number2
    }
        cout << "The largest number is: " << largest << endl<<endl<<endl;// Output the largest number
		
        //if you want to calculate another time	
		cout<<"do you want to calcualate another time? \nEnter {No} to stop or any other thing to continue :\n";
		string choice;
		cin>>choice;                                               // Input the user's choice
		if ( choice == "yes" || choice == "Yes" || choice == "YES" )
		{
			ch=1;                                                  // If the user wants to continue,
		}
		else if ( choice == "No" || choice == "no" || choice == "NO" )
		{
			ch=0;                                                  // If the user wants to stop
		}
	}
	    return 0;                                                    // End of the program
}
