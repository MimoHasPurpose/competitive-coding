
#include<bits/stdc++.h>
using namespace std;
bool func(int i,int sum,vector<int> &nums){

	if(sum==0) return true;
	if(i<0) return false;
	//not consider ith index.

	func(i-1,sum);

	//consider ith index
	func(i-1,sum-nums[i]);
	return isPossible;

}

 bool canPartition(vector<int>&nums){
 	int sum=accumulate(nums.begin(),nums.end(),0);
 	if(sum%2!=0){
 		return false;
 	}
 	sum=sum/2;
 	return func(num.size()-1,sum,nums);
 }
int main(){
	
	return 0;
}