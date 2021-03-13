#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int max=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(max<sum){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
    
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        cout << maxSubarraySum(a,n) << endl;
    }
}