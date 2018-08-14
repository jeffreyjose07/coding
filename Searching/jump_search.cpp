//Program to implement jump search
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={12,15,-48,0,15,15,489,25,48564,-4568,456,12};
    sort(arr.begin(),arr.end());
    int target;
    bool bit=0;
    cout<<"Enter the target:";
    cin>>target;
    int size_of_arr=arr.size()-1;
    int step=sqrt(arr.size());
    for(int i=0;i<arr.size();i+=step){
        if(target<arr[i]){
            bit=0;
            break;
        }
        else if(target>arr[i]){
            if(target<arr[min(step+i,size_of_arr)]){
                for(int j=i+1;j<=min(step+i,size_of_arr);j++){
                    if(target==arr[j]){
                        bit=1;
                        cout<<"Target found at position:"<<j;
                    }
                }
            }
        }
        else{
            bit=1;
            cout<<"Target found at position:"<<i;
        }
    }
    if(bit==0){
        cout<<"Target not found!!";
    }
    return 0;
}
