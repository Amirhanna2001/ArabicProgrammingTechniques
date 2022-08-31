#include <iostream>
using namespace std;

int main()
{
    cout<<"nested loop \n\n";

    //factorial  number
    /*fact 6 = 6*5*4*3*2*1
    fact 7 = 7*6*5*4*3*2*1*/

    //read n
    //declare var fact = 1
    //loop from 1 to n
    // fact = fact * i
    // print fact



     /*
    cout<<"Enter number\n";
    int n;
    cin>>n;
    int fact = 1;

    for(int i = 1 ; i<=n ; i++)
        fact *= i;

    cout<<fact;*/

    //write a program to get sum even numbers and odd nums

    //read number of nums
    // declare even,odd var
    //loop number
    //check if even  even += num
    //else odd += num
    //print result


    /*
    int n;
    cout<<"Enter number\n";
    cin>>n;
    int even=0,odd=0;
    for(int i=1;i<=n;i++)
    {
        int num;
        cout<<"Enter number\n";
        cin>>num;

        if(num %2 == 0)
            even +=num; // even = even +num
        else
            odd+=num;
    }

    cout<<"Sum even is "<<even<<endl;
    cout<<"Sum odd is "<<odd<<endl;*/

    /*
    int row;
    cout<<"Enter number of rows\n";
    cin>>row;
    for(int i = 1;i<=row;++i)
    {
        for(int j = 1;j<=row;j++)
        {
            if(i == 1 || i == row || j == 1 || j == row)
            cout<<'*';
            else
             cout<<' ';
        }
        cout<<endl;
    }*/


    for(int i =1;i<=10;++i)
    {
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<'\n';
    }


    return 0;
}
/*

*
**
***
****
*****
******

*/


















