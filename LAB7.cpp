#include<iostream>
using namespace std;

main( )
{
    char c;
    cout<<" enter any char in lower case";
    cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o'){
        cout<<" it is a vowel";

    }
    if(c>='0'&& c<'9'){
        cout<<"it is a number";

    }
    if((c>='a'&& c<='z')&& !(c=='a'||c=='e'||c=='i'||c=='u'||c=='o')){
        cout<<"it is constant";
        
    }
}