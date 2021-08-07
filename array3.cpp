#include <iostream>
using namespace std;

void sortarray(int arr[], int n ){
     int i,j=0;
     for(i=0;i<n;i++)
     {
          if (arr[i]<0){
               if (i!=0)
                 swap(arr[i],arr[j]);
          j++;   
     }
}
}
void printarray(int arr[], int n )
{
 for(int i=0;i<n;i++)
   cout<<arr[i];
}

int main()
{
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    sortarray(arr, n);
    printarray( arr, n);
    return 0;
    }
