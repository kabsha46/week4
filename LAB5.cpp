#include<iostream>
using namespace std;

main( )
{
    int salary=10000;
    int advanceformonth=6;
    int advancepermonth=salary*0.5;
    int totaladvance=advancepermonth*advanceformonth;
    int monthrequire=50000/advancepermonth;

    if(totaladvance>=50000){
        cout <<" you can buy this laptop";

    }
else{
    cout <<" months require to buy laptop:"<<monthrequire;
    
}
}