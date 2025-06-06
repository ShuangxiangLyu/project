#include <iostream>
#include <vector>
using namespace std;
int maxproduct(const vector<int>& nums){
	int max1 = 0;
	int max2 =0;  
	int min1 = 0;
	int min2 = 0;
	int maxproduct = 0;
	for(int num:nums){
	    if (num > max1) { 
            max2 = max1;
            max1 = num;
        } else if (num > max2) { 
            max2 = num;
        }

        if (num < min1) { 
            min2 = min1;
            min1 = num;
        } else if (num < min2) { 
            min2 = num;
        }
	}
	if(max1*max2 > min1*min2){
		return max1*max2;
	}else{
		return min1*min2;
	}
}
int main(){
	vector<int> nums = {5, -10, -6, 9, 4};
	cout<<maxproduct(nums)<<endl;
}
