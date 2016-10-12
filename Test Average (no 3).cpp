// Programming CHallenges no 3 page 142
// Test Average

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int scores[5];
	float sum=0;
	float average;
	
	for (int i=0; i<5; i++){
		cout << "Enter the test score : ";
		cin >> scores[i];
		sum+=scores[i];
		}
		
		average = sum / 5;
		cout << fixed << setprecision(1) << showpoint << endl <<"The average of the score is : " << average;
		
		return 0;
}

