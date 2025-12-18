
#include<iostream>
using namespace std;
int main()
{
    int arr[]={-1,9,3,9,-3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int temp=0;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    int largestNumber=arr[n-1];
    int secondLargest=0;
    bool found = false;

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]!=largestNumber)
        {
            secondLargest=arr[i];
            found = true;
            break;
        }
    }

    if(found){
        cout<<"Second Largest Number = "<<secondLargest;
    }
    else{
        cout<<"not found";
    }



    return 0;
}
