#include<iostream>

using std::cout;


int main()
{
    //overflow
    int num = 2147483647;
    num = num+1;
    cout<<num<<"\n";

    // underflow
    double dec = __DBL_MIN__;
    dec = dec /10;
    cout<<dec;

    return 0;
}