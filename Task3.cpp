#include <iostream>
#include <vector>
using namespace std;
int maxprofit(const vector<int>& nums){
	int max=0;
	int min =100;
	for(int num:nums){
		if (num>max){
			max = num;
		}
		if(num<min){
			min = num;
		}
	}
	return max - min;
}
int main(){
	vector<int> nums = {10, 7, 5, 8, 11, 2, 6};
	cout<<maxprofit(nums)<<endl;
}
