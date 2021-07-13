#include<iostream>
using namespace std;

string binarysearch(int arr[],int low,int high,int data)
{
    int mid;
    mid=low+(high-low)/2;
    if(low>high)
    {
        return "";
    }
    if(arr[mid]==data)
    {
        cout<< "Yes! found it bitch !";
    }
    else if(arr[mid]<data)
    {
        return binarysearch(arr,mid+1,high,data);
    }
    else if(arr[mid]>data)
        {
        return binarysearch(arr,low,mid-1,data);
        }
}
int main()
{
    int a[7],d;
    cout<<"eneter array:";
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    cout<<"element to be searched : ";
    cin>>d;
    binarysearch(a,0,6,d);

}
