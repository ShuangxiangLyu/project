#include <iostream>
#include <vector>
using namespace std;
int findnumber(const vector<int>& nums,int n){
	int total = n*(n+1)/2;
	int numstotal = 0;
	for(int num:nums){
		numstotal = numstotal + num;
	}
	return total-numstotal;
}
int main(){
	vector<int> nums = {0, 1, 2, 3, 5};
	cout<<findnumber(nums,nums.size());
}
