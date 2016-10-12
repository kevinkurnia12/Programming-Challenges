// Programming Challenges no 7 page 142
// Box Office

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	string movie;
	int adultTicket;
	int childTicket;
	int priceAdult = 10;
	int priceChild = 6;
	float grossProfit;
	float netProfit;
	float amountDistributor;
	
	
	cout << "Name of the movie : ";
	getline(cin, movie);
	cout << "Adult ticket were sold : ";
	cin >> adultTicket;
	cout << "Child ticket were sold : ";
	cin >> childTicket;
	
	grossProfit = (adultTicket * priceAdult) + (childTicket * priceChild);	
	netProfit = 0.2 * grossProfit;
	amountDistributor = grossProfit - netProfit;
	
	cout << endl << "Movie Name                 : " << movie;
	cout << endl << "Adult Tickets Sold         : " << adultTicket;
	cout << endl << "Child Tickets Sold         : " << childTicket;
	cout << endl << fixed << setprecision(2) << "Gross Box Office Profit    : $ " << grossProfit;
	cout << endl << fixed << setprecision(2) << "Net Box Office Profit      : $ " << netProfit;
	cout << endl << fixed << setprecision(2) << "Amount Paid to Distributor : $ " << amountDistributor;
	
	return 0;
}
