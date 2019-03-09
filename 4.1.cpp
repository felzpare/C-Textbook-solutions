//This program will prompt user for two numbers and display the larger of the two
#include <iostream>

using namespace std;

int main ()
{
	int num1, num2, x;
	
	cout << "Enter two numbers\n";
	cin >> num1 >> num2;
	
	x = ((num1> num2) ? num1 : num2);
	cout << "The larger value is " << x;
	
	return 0;
	
	}
