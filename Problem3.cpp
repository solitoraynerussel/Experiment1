#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	double netBalance, d1, payment, interest, d2, monthlyInterestRate, averageDailyBalance;
	
	cout << setprecision(2) <<fixed <<showpoint;
	cout << "Enter net Balance:" <<endl;
	cin >> netBalance;
	cout << "Enter payment made:" <<endl;
	cin >> payment;
	cout << "Enter number of days in the billing cycle:" <<endl;
	cin >> d1;
	cout << "Enter number of days payment is made before billing cycle:" <<endl;
	cin >> d2;
	cout << "Enter interest per month:" <<endl;
	cin >> monthlyInterestRate;
	
	averageDailyBalance = (netBalance * d1 - payment * d2)/d1;
	interest = averageDailyBalance * monthlyInterestRate;
	
	cout <<endl << "Interest is " << interest << endl;
	cin.get();
	getch();
	return 0;
}
