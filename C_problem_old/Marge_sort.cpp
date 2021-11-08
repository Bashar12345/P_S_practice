#include<bits/stdc++.h>

using namespace std;

int Marge(int arr[],int low,int mid,int high)
{



}

int MSort(int a[],int low,int high)
{
    if (low<high)
    {
        int mid =(low+high)/2;
      //  cout<<high<<" ";
        MSort(a,low,mid);
        MSort(a,mid+1,high);

        Marge(a,low,mid,high);

    }

}

int main()
{
    int a[20],n,i;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

     int low=0,high=n-1;
    // cout<<high<<" ";
     MSort(a,low,high);



       for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}


