#include <iostream>
using namespace std;
void FindElement(int arr[], int n){
   int total =( (n+1)*(n+2))/2;
   for (int i=0;i<n;i++){
       total=total-arr[i];
   }
   cout<<total; 
}




int main(){
     int i,n, arr[n];
    cout<<"Enter no. of elements in array";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    FindElement(arr,n);
   return 0; 
    
}