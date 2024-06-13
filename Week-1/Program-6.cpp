// DSA Assignment Question- Week 1- Q(6)

#include <iostream>
using namespace std;

int largest(int arr[],int n)
{
    int lg= arr[0],i;
    for (i=1;i<n;i++)
    {
        if (arr[i]>lg)
            lg=arr[i];
    }
    return lg;
}

int main()
{
    int n,i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i=0;i<n;i++)
        cin >> arr[i];
    cout << "The largest element of the array is : " << largest(arr,n);
    return 0;
}
