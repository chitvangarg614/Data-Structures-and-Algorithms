#include <iostream>
using namespace std;
void reversearray(int arr[], int n ){
	int temp,i=0,end=n-1;
	while(i<end){
		temp = arr[i];
		arr[i]= arr[end-i];
		arr[end-i]=temp;
		i++;
		end=end-1;
		}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}	
	
	
}
int main(){
	 int n;
    int arr[n];
    cout<<"enter number of elements of array";
    cin>>n;
    cout<<"enter elements of array";
    for (int i=0;i<n;i++)
     cin>>arr[i];
    reversearray(arr,n);
    return 0;
}
