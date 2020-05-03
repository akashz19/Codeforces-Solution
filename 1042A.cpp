#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(){
    bool flag=false;
    ll arr[100];
	vector<ll>suffix,temp;
	ll n,m,sum=0,a,sum1=0,p,mini=INT_MAX,maxi=INT_MIN;
	cin>>n>>m;
	f(i,0,n){
		cin>>arr[i];
		if(arr[i]>maxi)
			maxi=arr[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<mini){
				mini=arr[j];
				p=j;
			}
			}
		arr[p]++;
		mini=INT_MAX;
	}
	sort(arr,arr+n);
	cout<<arr[n-1]<<" "<<maxi+m<<endl;
	return 0;
	}