#include <iostream>
using namespace std;   // For std::setprecision

int main() {
		cout<<"======================================================================="<<endl;
	cout<<"   welcome to Restaurant order payment application  "<<endl;
	cout<<"======================================================================="<<endl;
	bool ch=1;
	
	while(ch)
	{
	
	
    // Meal codes and prices
    const int numMeals = 5;
    int mealCodes[numMeals] = {1, 2, 3, 4, 5};
    string mealNames[numMeals] = {"Chicken Handi", "Chicken Karahi", "Chicken Tikka", "Chicken Haleem", "Creamy Chicken"};
    double mealPrices[numMeals] = {1800, 2000, 2200, 500, 2500};

    // Display the menu
    cout << "Available Meals:\n";
    for (int i = 0; i < numMeals; i++) {
        cout << mealCodes[i] << ". " << mealNames[i] << " - " << mealPrices[i] << " PKR/kg\n";
    }

    // User selects a meal
    int selectedCode;
    cout << "Enter the code of the meal you want to order: ";
    cin >> selectedCode;

    // Validate meal code
    if (selectedCode < 1 || selectedCode > numMeals) {
        cout << "Error: Invalid meal code. Exiting program.\n";
        return 1; // Exit the program
    }

    // Get quantity
    double quantity;
    cout << "Enter the quantity (in kg) of the meal you want to order: ";
    cin >> quantity;

    // Validate quantity
    if (quantity <= 0) {
        cout << "Error: Quantity must be greater than 0. Exiting program.\n";
        return 1; // Exit the program
    }

    // Get currency choice
    int currencyChoice;
    cout << "Select currency for payment (1 for PKR, 2 for Euro, 3 for Dollar): ";
    cin >> currencyChoice;

    // Validate currency choice
    if (currencyChoice < 1 || currencyChoice > 3) {
        cout << "Error: Invalid currency choice. Exiting program.\n";
        return 1; // Exit the program
    }

    // Calculate meal price
    double mealPrice = mealPrices[selectedCode - 1] * quantity; // price in PKR
    double salesTax = 0.0;

    // Calculate sales tax
    if (mealPrice <= 1000) {
        salesTax = 0; // No sales tax
    } else if (mealPrice > 1000 && mealPrice <= 3000) {
        salesTax = mealPrice * 0.02; // 2% sales tax
    } else {
        salesTax = mealPrice * 0.05; // 5% sales tax
    }

    // Total amount in PKR
    double totalAmount = mealPrice + salesTax;

    // Currency conversion rates
    double dollarExchangeRate = 277.0;
    double euroExchangeRate = 300.0;
    double finalAmount = 0.0;

    // Convert to selected currency
    if (currencyChoice == 1) { // PKR
        finalAmount = totalAmount;
    } else if (currencyChoice == 2) { // Euro
        finalAmount = totalAmount / euroExchangeRate;
    } else if (currencyChoice == 3) { // Dollar
        finalAmount = totalAmount / dollarExchangeRate;
    }

    // Output results
    cout << fixed << "setprecision(2)"; // Set precision for output
    cout << "\nMeal Price (excluding tax): " << mealPrice << " PKR\n";
    cout << "Sales Tax: " << salesTax << " PKR\n";
    cout << "Total Amount in PKR: " << totalAmount << " PKR\n";
    cout << "Total Amount in selected currency: " << finalAmount << " ";

    if (currencyChoice == 1) {
        cout << "PKR";
    } else if (currencyChoice == 2) {
        cout << "Euros";
    } else if (currencyChoice == 3) {
        cout << "Dollars";
    }

    cout << endl;
    	cout<<"  do you want to calcualate another time? \n  Enter {No} to stop or any other thing to continue :\n";
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