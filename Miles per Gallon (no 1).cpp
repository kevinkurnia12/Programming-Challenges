// Programming Challenges page 142 no 1
// Miles per Gallon

#include <iostream>

using namespace std;

int main(){
	int miles;
	int gallons;
	int result;
	
	cout << "Number of gallons : ";
	cin >> gallons;
	cout << "Number of miles : ";
	cin >> miles;
	
	result = miles / gallons;
	cout << "Number of miles that can be driven per gallon of gas : " << result;
	
	return 0;
}
