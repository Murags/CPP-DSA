//array demo lab

#include <iostream>
using namespace std;

int main(){
	int myArray[5]; // initialise an array of type int with 5 values
	int average = 0;

	for (int i = 0; i < 5; i++){
		cout<<"Enter a value to populate the array: ";
		cin>>myArray[i];
		average += myArray[i];
	}

	average = average / 5;
	cout<<"Average: "<<average<<endl;

}
