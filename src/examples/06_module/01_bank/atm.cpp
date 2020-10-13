//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void ATM::display_balance()const
{
    cout<<"Balance: "<<account.get_balance()<"\n"
}