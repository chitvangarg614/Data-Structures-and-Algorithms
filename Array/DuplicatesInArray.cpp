#include <iostream>
using namespace std;

void findDuplicate(int arr[], int n ){
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]==arr[i])
            cout<<"Duplicate element "<<arr[i];

        }
    }
}



int main(){
     int i,n, arr[n];
    cout<<"Enter no. of elements in array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    findDuplicate(arr,n);
   return 0; 
    
}