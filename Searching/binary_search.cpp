//program to implement binary search iteratively
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int bit=0;
	vector<int>arr={12,15,48,123,45687,-456,-4781,12,0,0,145,145,789,4};
	sort(arr.begin(),arr.end());
/*printing the sorted array
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
*/	int target;
	cout<<"Enter the element to be searched:";
	cin>>target;
	long int low=0,high=arr.size(),mid;
	while(low<=high){
		mid=(low+high)/2;
		//cout<<mid<<" "<<arr[mid]<<"\n";
		if(arr[mid]>target){
			high=mid-1;
		}
		else if(arr[mid]<target){
			low=mid+1;
		}
		else{
			cout<<"target found at position:"<<mid;
			bit=1;
			break;
		}
	}
	if(bit==0){
		cout<<"Target not found!!";
	}
	return 0;
}