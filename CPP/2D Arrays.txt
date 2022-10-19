#include <iostream>

using namespace std;
int main()
{
    cout<<"2D Arrays \n";
    //int ar[5]={1,2,3,4,5};
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},

    };
    //cout<<arr[2][1];// x
    int ar[3][3];
    cout<<"Array one\n";
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<"Enter array element at ["<<i+1<<"]["<<j+1<<"] :";
            cin>>ar[i][j];
            cout<<'\n';
        }
    }
    int ar2[3][3];
    cout<<"array two\n";
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<"Enter array element at ["<<i+1<<"]["<<j+1<<"] :";
            cin>>ar2[i][j];
            cout<<'\n';
        }
    }

    int result[3][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            result[i][j] = ar[i][j]+ar2[i][j];
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<result[i][j]<<"\t";

        }
        cout<<'\n';
    }
    int diagonal=0;
    /*for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(i == j)
                diagonal +=result[i][j];
        }
    }*/
    for(int i=0;i<3;i++){
        diagonal+=result[i][i];
    }
    cout<<"Diagonal = "<<diagonal;
    /*int sum =0;
     for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            sum+=ar[i][j];
        }
     }
     cout<<"Sum Of Matrix is = "<<sum;*/
    return 0;
}




















