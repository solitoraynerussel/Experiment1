#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    double mass,density,volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Enter mass: " ;
    cin >> mass;
    cout << "Enter density: ";
    cin >> density;

    volume = mass / (density * 4);

    cout << "Volume is " << volume <<endl;

    return 0;
    getch();
}

