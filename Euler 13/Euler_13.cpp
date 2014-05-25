#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	ifstream file("nums.txt");
	
	long long int counter = 0;
	string input = "";
	long long int num;
	
	for(int i = 0; i < 100; i++){
		getline(file, input); // take line
		
		input = input.substr(0, 15);	//convert to 15 digits
		istringstream ( input ) >> num;
		counter += num;
		cout << input << endl;
	}
	
	cout << "\nThe first digits are:" << counter;
}