#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(){
	ll n,m,a,maxi=0,mini=1000000000;
	cin>>n;
	f(i,0,n){
		cin>>a;
		if(a>maxi)
			maxi=a;
		if(a<mini){
			mini=a;
		}
	}
	ll res=maxi-mini+1;
	cout<<res-n<<endl;
	return 0;
}
	