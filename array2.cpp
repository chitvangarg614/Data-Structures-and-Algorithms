#include <iostream>
using namespace std;

void sortarray(int arr[], int n)
{

int i=0,c1=0,c2=0,c0=0;
while(i<n){

switch(arr[i])
{

 case 0:
 	c0++;
 	break;
case 1:
   c1++;
   break;
 case 2:
   c2++;
   break;
 i++;  
}}
   i=0;
   while(c0>0) {
   	arr[i]=0;
   	i++;
   	c0--;}
   	 while(c1>0) {
   	arr[i]=0;
   	i++;
   	c1--;}
   	while(c2>0) {
   	arr[i]=0;
   	i++;
   	c2--;
   }
   for(int i=0;i<n;i++)
	{
	cout<<arr[i];}
}


int main(){
	 int n;
    
    cout<<"enter number of elements of array";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array(only 0's, 1's  or 2's)";
    for (int i=0;i<n;i++)
     {
	cin>>arr[i];}
    sortarray(arr, n);



		return 0;
	}
