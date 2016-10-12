// Programming Challenges no 4 page 142
// Average Rainfall

#include <iostream>
#include <string>

using namespace std;

int main(){
	string months[3];
	float rains[3];
	float average;
	
	for(int x=0; x<3; x++){
		cout << "Enter the name of the month : ";
		cin >> months[x];
	}
	cout << endl;
	
	for(int y=0; y<3; y++){
		cout << "The amount of rain : ";
		cin >> rains[y];
	}
	average = (rains[0] + rains[1] + rains[2]) / 3;
	cout << endl << "The average rainfall for " << months[0] << ", " << months[1] << ",and " << months[2] << " is " << average;
	
	return 0;
}
