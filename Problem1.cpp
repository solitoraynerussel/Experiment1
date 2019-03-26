#include <fstream>
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    ifstream inFile;
    int priceOfBoxTicket, priceOfSidelineTicket, priceOfPremiumTicket,
            priceOfGenAdmissionTicket;

    int numOfBoxTicketSold,numOfSidelineTicketSold,numOfPremiumTicketSold,
            numOfGenAdmissionTicketSold;

    int amtOfBoxTicketSold, amtOfSidelineTicketSold, amtOfPremiumTicketSold,
            amtOfGenAdmissionTicketSold;

    long totalNumOfTicketsSold,totalSaleAmount;
    cout << fixed << showpoint << setprecision(2);

    inFile.open("TicketsSoldFile.txt");

    inFile >> priceOfBoxTicket >> numOfBoxTicketSold
           >> priceOfSidelineTicket >> numOfSidelineTicketSold
           >> priceOfPremiumTicket >> numOfPremiumTicketSold
           >> priceOfGenAdmissionTicket >> numOfGenAdmissionTicketSold;

    amtOfBoxTicketSold = priceOfBoxTicket * numOfBoxTicketSold;
    amtOfSidelineTicketSold = priceOfSidelineTicket * numOfSidelineTicketSold;
    amtOfPremiumTicketSold = priceOfPremiumTicket * numOfPremiumTicketSold;
    amtOfGenAdmissionTicketSold = priceOfGenAdmissionTicket * numOfGenAdmissionTicketSold;

    totalNumOfTicketsSold = numOfBoxTicketSold + numOfSidelineTicketSold
                            + numOfPremiumTicketSold + numOfGenAdmissionTicketSold;

    totalSaleAmount = amtOfBoxTicketSold + amtOfSidelineTicketSold +
                        amtOfPremiumTicketSold + amtOfGenAdmissionTicketSold;

    cout << "Total number of Tickets sold is " << totalNumOfTicketsSold <<endl;
    cout << "Total Sale Amount: " << totalSaleAmount << endl;

    inFile.close();
    return 0;
    getch();
}

