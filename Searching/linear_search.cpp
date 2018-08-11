//Program to implement linear search
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,e;
	vector<int>Array;
	cout<<"Enter the elements of the Array after entering the number of elements:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>e;
		Array.push_back(e);
	}
	cout<<"Enter the element to be searched";
	cin>>e;
	for(int i=0;i<n;i++){
		if(Array[i]==e){
			cout<<"Element is present at index:"<<i;
			return 0;
		}
	}
	cout<<"Element is not present in the Array";
	return 0;
} 
