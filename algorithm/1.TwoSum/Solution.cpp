/*
 * 
 * Given an array of integers, return indices of the two numbers such that add up to a specific target. 
 * You may assume that each input would have exactly one solution, and you may not use the same element twice. 
 * 
 * 
 * Example:
 * Given nums = [2,7,11,15], target = 9, 
 * Becouse nums[0] + nums[1] = 2 + 7 = 9,
 * return [0,1].
 * 
 */

/*
 * 
 */

#include<vector>

using namespace std;

class Solution
{
	public:
		vector<int> twoSum(vector<int>& nums, int target)
		{
			int i, j;
			int max = nums.size();
			for(i=0; i<max-1; i++){
				for(j=i+1; j<max; j++){
					if(nums[i] + nums[j] == target)
					{
						int ans_tmp[2] = {i,j};
						return (vector<int> (ans_tmp,ans_tmp+2));
					}
				}
			}
		}
};
