#include<iostream>
using namespace std;
int main(){                                // Display a welcome message
	cout<<"   ========================================================================================="<<endl;
	cout<<"                  Welcome To Find person is eligible to vote (age 18 or older)              "<<endl;    
	cout<<"   ========================================================================================="<<endl<<endl;
	bool ch=1;               
	while(ch)
	{    
        // Declare ages of 5 people
        int ages[5];
        int eligibleCount = 0; // Variable to count how many people are eligible to vote
        // Loop to get the ages of 5 people
    for (int i = 0; i < 5; i++) {
        cout << "     Enter the age of person " << (i + 1) << ": "; // Prompt for age input
        cin >> ages[i]; // Input the age of the person

        // Check if the person is eligible to vote
        if (ages[i] >= 18) {
            cout << "     Person " << (i + 1) << " is eligible to vote." << endl; // Eligible message
            eligibleCount++; // Increment the eligible count
        } else {
            cout << "     Person " << (i + 1) << " is not eligible to vote." << endl; // Not eligible message
        }
    }

    // Check if most of the group is eligible to vote (3 or more)
    if (eligibleCount >= 3) {
        cout << "\n     Most of the group is eligible to vote." << endl<<endl<<endl; // Majority eligible message
    } else {
        cout << "\n     Most of the group is not eligible to vote." << endl<<endl<<endl; // Majority not eligible message
    }
        //if you want to calculate another time	
		cout<<"     do you want to calcualate another time? \n     Enter {No} to stop or any other thing to continue :\n";
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
