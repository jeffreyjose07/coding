//Program to search for pairs in a sorted array
#include<bits/stdc++.h>
using namespace std;

bool twopointer(vector<int>&A,int X){
    int i=0,j=A.size()-1;
    while(i<j){
        if(A[i]+A[j]==X)
            return true;
        else if(A[i]+A[j]<X)
            i++;
        else
            j--;
    }
    return false;
}

int main(){
    vector<int>Arr={-14,-10,-4,-2,-1,0,1,4,5,6,13};
    int target;
    cout<<"Enter the target:";
    cin>>target;
    if(twopointer(Arr,target))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
