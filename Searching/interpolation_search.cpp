//Program to implement interpolation search
#include<bits/stdc++.h>
using namespace std;
int interpolation_search(vector<int>&arr,int target){
    int low = 0, high = arr.size()-1;
    while(low<=high && target>=arr[low] && target<=arr[high]){
        int pos = low + (((double)(high-low)/(arr[high]-arr[low]))*(target- arr[low]));
        if(arr[pos]==target){
            return pos;
        }
        if(arr[pos]<target){
            low=pos+1;
        }
        else{
            high=pos-1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int index=-1;
    index=interpolation_search(arr,target);
    if(index!=-1){
        cout<<"Target found at position:"<<index;
    }
    else
        cout<<"Target not found!!";
    return 0;
}
