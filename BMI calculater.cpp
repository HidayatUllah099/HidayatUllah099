#include <iostream>
using namespace std;
int main (){
  double weight, height, BMI;

  cout << "Enter your weight in pounds: ";
  cin >> weight;

  cout << "Enter your height in inches: ";
  cin >> height;

  BMI = (weight * 703) / (height * height);

  cout << "Your BMI is: " << BMI << endl;

  return 0;
}
	
	
