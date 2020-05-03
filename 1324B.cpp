#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define w(x) int x; cin>>x; while(x--)
#define mo 998244353
#define d arr0.size()
#define ba back()
using namespace std;
ll p=748683265;
int main(){
	ll t;cin>>t;
	while(t--){
	    std::vector<ll>arr ;
		bool flag=false;
		ll n,a,k;cin>>n;
		f(i,0,n){
			cin>>a;arr.pb(a);
		}
		f(i,0,n){
			f(j,0,n){
				if(i!=j){
					if(arr[i]==arr[j]){
						k=abs(j-i);
						if(k!=1){
							flag=true;
							break;
						}
					}
				}
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}