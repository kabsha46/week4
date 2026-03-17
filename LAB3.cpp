#include<iostream>
using namespace std;

main( )
{
    string word1,word2;
    cout << "enter first word : ";
    cin >> word1;
    cout << "enter second word : ";
    cin >> word2;

    if(word1==word2){
        cout << "yes words are same";
    }
    else{
        cout<<"no words are not same";
    }
}