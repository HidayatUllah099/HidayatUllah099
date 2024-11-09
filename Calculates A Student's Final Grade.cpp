#include<iostream>
using namespace std;
int main(){
	cout<<"Calculates A Student's Final Grade"<<endl<<endl;
	
	float assignments, quizzes, midterm, finalExam;            //declearation of variable
	cout<<"Enter marks of Assignments (out of 100) : ";  //enter the marks for each assessment
	cin>>assignments;                                
	cout << "Enter marks of Quizzes (out of 100) : ";
    cin >> quizzes;
	cout<<"Enter marks of midterm (out of 100 : ";
	cin>> midterm;
    cout<<"Enter marks of finalExam (out of 100 : ";
    cin>> finalExam;
    // Calculate the weighted average
    float finalGrade = (assignments * 0.20)+(quizzes * 0.10)+(midterm * 0.30)+(finalExam * 0.40);  
	 // Output the final grade
    cout << "The final grade is: " << finalGrade << endl;
	char Grade;
    if (finalGrade >= 90) {
        Grade = 'A';
    } else if (finalGrade >= 80) {
        Grade = 'B';
    } else if (finalGrade >= 70) {
        Grade = 'C';
    } else if (finalGrade >= 60) {
        Grade = 'D';
    } else {
        Grade = 'F';
    }
    // Output the letter grade
    cout << "The final letter grade is: " << Grade <<endl;
	return 0;
}