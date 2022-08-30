#include <iostream>
using namespace std;

int main()
{
    cout<<"switch case \n\n";
    /*int n;
    cout<<"Enter number\n";
    cin>>n;


    if(n == 1){
        cout<<"One\n";
    }
    else if(n == 2){
        cout<<"Two\n";
    }
    else if (n == 3)
        cout<<"Three\n";
    else if (n == 4)
        cout<<"Four\n";
    else
        cout<<"not in range from 1 to 4\n";*/
    /*
    switch(n){
    case 1: //n >= 20  if (n == 1)
        cout<<"One\n";
        cout<<"One\n";
        cout<<"One\n";
        cout<<"One\n";
        break;
    case 2 :
        cout<<"Two\n";
        cout<<"Two\n";
        cout<<"Two\n";
        break;
    case 3:
        cout<<"Three\n";
        cout<<"Three\n";
        cout<<"Three\n";
        break;
    case 4:
        cout<<"Four\n";
        cout<<"Four\n";
        cout<<"Four\n";
        break;
    default :
        cout<<"Not in range from 1 to 4\n";
        break;
    }*/
    char c;
    cout<<"Enter your grade\n";
    cin>>c;
    switch(c){
    case 'A':
        cout<<"Excellent\n";
        break;
    case 'a':
        cout<<"Excellent\n";
        break;

    case 'B':
    case 'b':  // if(c == 'b' || c == 'B')
        cout<<"Very Good\n";
        break;

    case 'C':
        cout<<"Good\n";
        break;
    case 'c':
        cout<<"Good\n";
        break;

    case 'D':
        cout<<"Failed\n";
        break;
    case 'd':
        cout<<"Failed\n";
        break;
    default:
        cout<<"Check your input\n";
    }
    return 0;
}













