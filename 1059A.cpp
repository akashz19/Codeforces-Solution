#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(){
	std::vector<ll> arr1;
	std::vector<pair<ll,ll>>arr;
	ll n,l,a,t,p,count=0;
	cin>>n>>l>>a;
	if(n>=1){
	f(i,0,n){
		cin>>t>>p;
		arr.pb(make_pair(t,p));
	}
	sort(arr.begin(),arr.end());
	ll prev=0;
	f(i,0,n){
	    count+=((arr[i].first)-prev)/a;
	    prev=arr[i].first+arr[i].second;
	}
	ll b=(l-prev)/a;
	cout<<count+b<<endl;
	}
	else{
	    cout<<l/a<<endl;
	}
	return 0;
}
