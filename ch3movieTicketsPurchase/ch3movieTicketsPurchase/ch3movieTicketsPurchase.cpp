// ch3movieTicketsPurchase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::cout << "Ch 3 Movie Tickets by Kevin Bell\n\n";
    auto adultsTicketPrice = 12.0, childrenTicketPrice = 6.0, seniorsTicketPrice = 9.0, totalPrice = 0.0;
    auto adults = 0, children = 0, seniors = 0;
    cout << "How many tickets for adults? ";
    cin >> adults;
    cout << "How many tickets for children? ";
    cin >> children;
    cout << "How many tickets for seniors? ";
    cin >> seniors;
    totalPrice = adultsTicketPrice* adults+ childrenTicketPrice* children+ seniorsTicketPrice* seniors;
    cout << "Total Price: $" << setprecision(2) << fixed<< totalPrice  << endl;
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
