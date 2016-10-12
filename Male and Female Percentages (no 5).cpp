// Programming Challenges no 5 page 142
// Male and Female Percentages

#include <iostream>

using namespace std;

int main(){
	int males;
	int females;
	float totalStudents;
	float percentageMales;
	float percentageFemales;
	
	cout << "Number of males in class : ";
	cin >> males;
	cout << endl << "Number of females in class : ";
	cin >> females;
	
	totalStudents = males + females;
	percentageMales = males * 100 / totalStudents;
	percentageFemales = females * 100 / totalStudents;
	cout << endl << endl << "The percentage of males in the class is   : " << percentageMales << "%";
	cout << endl << "The percentage of females in the class is : " << percentageFemales << "%";
	
	return 0;
}
