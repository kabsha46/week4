#include<iostream>
using namespace std;

main( )
{
    string nam1,nam2,nam3;
    int age1,age2,age3;

    cout<<"enter 1st name";
    cin>>nam1;
    cout<<"enter ist brother age";
    cin>>age1;
    cout<<"enter 2nd name";
    cin>>nam2;
    cout<<"enter 2nd brother age";
    cin>>age2;
    cout<<"enter 3rd name";
    cin>>nam3;
    cout<<"enter 3rd brother age";
    cin>>age3;
    if(age1<age2&&age1<age3){
        cout<<nam2<<"is youngest";

    }
    if(age3< age1 && age2 < age3){
        cout<<nam3<<"is youngest";
    }
}