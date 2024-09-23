#include<iostream>
using namespace std;

int main(){
    int arr[11],MAX=11,UB=7,LOC=4,DATA=100,i;
     cout<<"enter the elements of the array";
    {
        for(i=0;i<UB;i++){
            cin>>arr[i];
        }
    }

    for(i=UB;i>LOC;i--){
        arr[i+1]=arr[i];}
           arr[LOC]=DATA;
        UB++;
    
    cout<<"elements of the array after inserting and shifting"<<endl;
 

    for(i=0;i<UB;i++){
        cout<<arr[i]<<endl;

    }

}