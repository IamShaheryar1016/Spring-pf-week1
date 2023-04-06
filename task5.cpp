#include<iostream>
using namespace std;

main()
{
    string Password;
    cout<<"Enter your Password:";
    cin>>Password;

    if(Password=="s3crt!P@ssword")
    {
        cout<<"Welcome:";
    }

     if(Password!="s3crt!P@ssword")
    {
        cout<<"Wrong Password!";
    }
}