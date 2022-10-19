#include <iostream>

using namespace std;
void printArray(int ar[][3],int s){
    for(int i=0;i<s;++i){
        for(int j=0;j<3;j++){
            cout<<ar[i][j]<<'\t';
        }
        cout<<'\n';
    }
}
int main()
{
    cout<<"2D Arrays \n";
    int arr[4][3]={
        {10 ,20,30},
        {40,50,60},
        {70,80,90},
        {100,110,120},
    };
    printArray(arr,4);
    return 0;
}




















