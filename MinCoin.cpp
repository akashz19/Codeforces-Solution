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
ll BottomUp(std::vector<ll>arr,ll n,ll b){
	ll dp[n]={0};
	if(n==0){
		return 0;
	}
	for(int i=1;i<=n;i++){
		dp[i]=INT_MAX;
		f(j,0,b){
			if(i-arr[j]>=0)
			ll sub=dp[i-(arr[j])];
			dp[i]=min(dp[i],sub);
		}
	}
	return dp[n];
}
int main(){
	std::vector<ll> arr;
	ll n,b;
	cin>>n>>b;
	f(i,0,b){
		cin>>a;arr.pb(a);
	}
	cout<<BottomUp(arr,n,b)<<endl;
	return 0;
}
