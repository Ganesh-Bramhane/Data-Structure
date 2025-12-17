#include<iostream>
using namespace std;

int main()
{
    int arr[]={8,4,3,5,6,4,3,7,8,9,7,6};
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

    cout<<"Sorted Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<i<<" = "<<arr[i]<<endl;
    }


    return 0;
}
