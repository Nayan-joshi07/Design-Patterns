#include<bits/stdc++.h>
using namespace std;
void solve(){
		string s;
		cin>>s;
		
		bool ok=(s.back()=='B');
		
		int sum=0;
		for (auto it:s){
			if (it=='A') sum++;
			else sum--;
			if (sum<0) ok=false;
		}
		
		if (ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}