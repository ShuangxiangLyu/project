#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestlength(const vector<int>& nums){
	unordered_set<int> numSet(nums.begin(), nums.end());
	int longest = 0;
	
	for(int num:nums){
		if(numSet.find(num-1)==numSet.end()){
			int Num = num;
			int count = 1;
		while(numSet.find(Num + 1)!=numSet.end()){
			Num = Num+1;
			count = count+1;
		}
		if(longest<count){
			longest = count;
		}
	}

}
return longest;
}
int main(){
	vector<int>nums = {19, 13, 15, 12, 18, 14, 17, 11}; 
	cout<<longestlength(nums);
}
