#include<iostream>
#include<vector>
using namespace std;
int n, c;

bool cowsCanBePlaced(int d, vector<int> cow_pos){
	int last = cow_pos[0];
	int cnt=1;
	for(int i=0; i<cow_pos.size(); i++){
		if(cow_pos[i]-last>=d){
			last = cow_pos[i];
			cnt++;
		}
	}

	if(cnt>=c){
		return true;
	} else return false;
}

int cowPossibleWithD(vector<int> cow_pos, int distance){
	int start = 0;
	int end = distance;
	int ans = 0;
	while(start <= end){
		int mid = (start + end)/2;
		// cout<<mid;
		if(cowsCanBePlaced(mid, cow_pos)){
			// cout<<mid;
			// cout<<"TMKC";
			ans = mid;
			// cout<<ans<<endl;
			start = mid + 1;
		} else end = mid - 1;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		vector<int> cow_positions;
		cin>>n>>c;
		// cout<<endl<<c<<endl;
		for(int i=0 ; i<n;i++){
			int temp;
			cin>>temp;
			cow_positions.push_back(temp);
		}
		sort(cow_positions.begin(), cow_positions.end());
		// for(auto i:cow_positions) cout<<i<<" ";
		int d = cow_positions[cow_positions.size()-1] - cow_positions[0];
		// cout<<d<<endl;
		cout<<cowPossibleWithD(cow_positions, d);
	}

	return 0;
}
