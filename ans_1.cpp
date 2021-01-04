#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main() {
	int t;
	cin>>t;
	while(t--){
	string s;
	cin >> s;
	cout << reverseWord(s) << endl;
	}
	return 0;	
}
string reverseWord(string str){
    int st=0;
    int end=str.length();
    end=end-1;
    while(st<end){
        string temp;
        temp[0]=str[st];
        str[st]=str[end];
        str[end]=temp[0];
        st++;
        end--;
    }
    return str;
}