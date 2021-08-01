#include <iostream>
using namespace std;
void minmax(int n, int arr[]){
   int min=arr[0];
   int max=arr[0];
   for(int i=0; i<n;i++) {
       if (arr[i]>max)
          max=arr[i];   

   }
   for (int i=0; i<n;i++){
       if (min> arr[i])
       min=arr[i];
   }
   cout<<min<<endl<<max;  

    
}
int main(){
    int n;
    int arr[n];
    cout<<"enter number of elements of array";
    cin>>n;
    cout<<"enter elements of array";
    for (int i=0;i<n;i++)
     cin>>arr[i];
    int min,max;
    minmax( n, arr);
    
    return 0;
}

