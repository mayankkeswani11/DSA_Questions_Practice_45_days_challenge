#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>&arr,int n,int k)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            if(k<arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return ans;
}
int lastOccurence(vector<int>&arr,int n,int k)
{
     int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            low=mid+1;
        }
        else{
            if(k<arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return ans;

}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first=firstOccurence(arr,n,k);
    int last=lastOccurence(arr,n,k);
    return make_pair(first,last);
}