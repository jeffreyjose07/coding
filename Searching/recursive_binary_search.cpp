//Program to implement recursive binary search
#include<bits/stdc++.h>
using namespace std;

int recursive_binary_search(vector<int>&arr,int low,int high,int target){
	if(low>high){
		return -1;
	}
	int mid=(low+high)/2;
	if(arr[mid]>target){
		return(recursive_binary_search(arr,low,mid-1,target));
	}
	else if(arr[mid]<target){
		return(recursive_binary_search(arr,mid+1,high,target));
	}
	else{
		return mid;
	}
}

int main(){
	vector<int>arr={12,15,48,123,45687,-456,-4781,12,0,0,145,145,789,4};
	sort(arr.begin(),arr.end());
	int target;
	cout<<"Enter the element to be searched:";
	cin>>target;
	int low=0,high=arr.size()-1;
	int position = recursive_binary_search(arr,low,high,target);
	if(position!=-1){
		cout<<"Target found at "<<position;
	}
	else{
		cout<<"Target not found";
	}
	return 0;
}