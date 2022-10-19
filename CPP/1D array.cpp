#include <iostream>

using namespace std;

int Max_Elem(int ar[],int n){
    int mx = ar[0];
    for(int i=0;i<n;i++){
        if(mx < ar[i]){
            mx = ar[i];
        }
    }
    return mx;
}
//1 2 3 4 5           3
bool searchInArray(int ar[],int s,int no){

    for(int i=0;i<s;++i){
        if(no == ar[i]){
            return true;
        }
    }
    return false;
}
int main()
{
    cout<<"Arrays \n";
    cout<<"Enter array size\n";
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;++i){
        cout<<"Enter number\n";
        cin>>ar[i];
    }
    int num;
    cout<<"Enter number you want to search for\n";
    cin>>num;
    bool b = searchInArray(ar,n,num);
    if(b == true){ // = if(b)
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found!\n";
    }










    // 5 8954 80 77
   int mx = Max_Elem(ar,n);
   cout<<"Max Elem = "<<mx;






    //dataType arrayName[size];

    /*int grade[4];
    int g [4] = {70,80,90,100};
    int gra[] = {70,80,90,100};

    grade[2];*/

    /*int n;
    cout<<"Enter Number of  grades\n";
    cin>>n;
    int grades[n];

    for(int i=0;i<n;++i){
        cout<<"Enter Grade no "<<i+1;
        cout<<endl;
        cin>>grades[i];

    }
    for(int i=0;i<n;++i){
        cout<<"Grade no "<<i+1<<" = "<<grades[i]<<"\n";
    }*/
    return 0;
}




















