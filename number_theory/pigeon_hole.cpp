#include<iostream>
#include<cstring>
using namespace std;

#define ll long long

ll a[1000000], prefixSum[1000000];

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		ll sum =0;
		memset(prefixSum,0,sizeof prefixSum);

		prefixSum[0] = 1;

		for(int i=0; i<n; i++){
			cin>>a[i];
			sum += a[i];
			sum %= n;
			sum = (sum + n)%n;
			// First make the no postive
			//Update frequency
			prefixSum[sum]++;
		}

		ll ans =0;
		for(int i=0; i<n; i++){
			// cout<<prefixSum[i]<<" ";
			ll no = prefixSum[i];
			ans += (no*(no - 1))/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
