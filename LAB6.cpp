#include<iostream>
using namespace std;

main( )
{
    int num1,num2,value;
    char sing;
    cout <<"welcom to the calculator"<<endl;
    cout <<"enter first number ";
    cin>>num1;
    cout<<"enter the operater";
    cin>>sing;
    cout<<"enter the second number";
    cin>>num2;

    if(sing=='+'){
        value=num1+num2;
        cout<<num1<<sing<<num2<<"="<<value;

    }
    if(sing=='-'){
        value=num1-num2;
        cout<<num1<<sing<<num2<<"="<<value;
    }
    if(sing=='*'){
        value=num1*num2;
        cout<<num1<<sing<<num2<<"="<<value;

}
if(sing=='/'){
        value=num1/num2;
        cout<<num1<<sing<<num2<<"="<<value;
}
if(sing=='%'){
        value=num1%num2;
        cout<<num1<<sing<<num2<<"="<<value;
}
}