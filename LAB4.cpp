#include<iostream>
using namespace std;

main( )
{
    int bill,discount;
    cout << "enter the bill:";
    cin >> bill;

    if(bill<=5000){
        discount=bill-bill*0.05;
        cout << "the discount bill is :"<<discount;

    }
    if(bill>5000){
        discount=bill-bill*0.1;
        cout <<"the discount bill is "<<discount;
        
    }
