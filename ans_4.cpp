#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort012(a, n);
        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;    
    }
    return 0;
}
void sort012(int a[], int n){
    int start=0,mid=0,end=n;
    while(mid<end){
        switch(a[mid]){
            case 0:
                swap(a[start],a[mid]);
                start++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[end-1]);
                end--;
                break;
        }
    }   
}