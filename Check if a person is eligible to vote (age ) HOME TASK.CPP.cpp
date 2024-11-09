#include<iostream>
using namespace std;
int main (){
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	  cout<<"   welcome to check a person is eligible to vote"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	while(1){
	int age;
	cout<<"Enter your age :";
	cin>>age;
	if (age>=18)
	cout<<"You are eligible to vote."<<endl<<endl;
	else if(age<=17)
	cout<<"You are not eligible to vote."<<endl<<endl;
}
	return 0;
}
