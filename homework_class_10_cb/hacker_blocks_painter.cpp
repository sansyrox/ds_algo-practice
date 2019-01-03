#include<iostream>
#include<vector>
using namespace std;

bool maxTimeReq(vector<int> boards, int time, int k){
	int sum = 0;
	
	
	if(sum>=time){
		return true;
	} 
	else return false;
}


int returnMinTime(vector<int> boards,int start, int end){ // end = max time
	int ans = end;
	while(start<=end){
		int mid = (start + end)/2;
		if(maxTimeReq(boards, mid)){
			ans = mid;
			end = mid - 1;
		} else start = mid + 1;
	}
	return ans;

}

int main(int argc, char const *argv[])
{
	/* code */
	int k,n;
	vector<int> boards;
	cin>>k>>n;

	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		boards.push_back(temp);
	}
	int sum = 0; // max time
	for(auto i: boards) sum+=i;
	// cout<<sum<<endl;
	cout<<returnMinTime(boards, 0, sum );
	return 0;
}
