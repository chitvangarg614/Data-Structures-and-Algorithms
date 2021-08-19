#include <iostream>
using namespace std;


void leftRotation(int arr[],int r,int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if (i!=n-1)
        arr[i]=arr[i+1];
        else
        arr[n-1]=temp;

    }

}
void NoOfRotation(int arr[],int r,int n){
    for(int i=0;i<r;i++)
      leftRotation(arr,r,n);

}


int main(){
    int i,n, arr[n];
    cout<<"Enter no. of elements in array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int r;
    cout<<"enter no. of rotations";
    cin>>r;

    NoOfRotation(arr,r,n);

    for(i=0;i<n;i++)
      cout<<arr[i];

}