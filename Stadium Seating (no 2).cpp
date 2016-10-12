// Programming Challenges page 142 no 2
// Stadium Seating

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int classA = 15;
	int classB = 12;
	int classC = 9;
	int ticketA;
	int ticketB;
	int ticketC;
	float result;
	
	cout << "Number of tickets class A were sold : ";
	cin >> ticketA;
	cout << "Number of tickets class B were sold : ";
	cin >> ticketB;
	cout << "Number of tickets class C were sold : ";
	cin >> ticketC;
	
	result = (ticketA * classA) + (ticketB * classB) + (ticketC * classC);
	cout << fixed << setprecision(2) << showpoint << endl << "Amount from the ticket sales : $ " << result;
	
	return 0;	
}
