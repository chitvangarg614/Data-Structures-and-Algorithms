#include <iostream>
using namespace std;
void sortArray(int* arr, int n)
{
    int a = 0,b = 0,c = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == 0)
        a++;
        else if(arr[i] == 1)
        b++;
        else
        c++;
    }
    int i = 0;
    while(i<n)
    {
        if(a>0)
        {
            arr[i] = 0;
            a--;
        }
        else if(b > 0)
        {
            arr[i] = 1;
            b--;
        }
        else
        {
            arr[i] = 2;
            c--;
        }
        i++;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array(only 0's, 1's  or 2's''')\n";
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    sortArray(arr,n);
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
