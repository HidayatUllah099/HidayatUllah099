#include<iostream>
using namespace std;
int main(){
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"       wlecome to program of alphabets"<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	   if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		cout<<"This are vowel: "<<ch<<endl;
	    else 
	    cout<<"This are consonant: "<<ch;	
	return 0;
}
