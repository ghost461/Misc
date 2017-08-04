/*
 * 
 * Givenan array and a value, return all instances of that value in place and return the new length. 
 * 
 * Do not allocate extra space for another array, you must do this in place with constant memory. 
 * 
 * The order of elements can be changed. It dosen't matter whatyou leave beyond the new lenth. 
 * 
 * Example:
 * Given input array nums = [3,2,2,3], val = 3 
 * 
 * Your function should return length = 2, with the first two elements of nums being 2.
 * 
 */

#include<vector>
using namespace std;
class Solution
{
	public:
		int removeElement(vector<int>& nums, int val)
		{
			int res = 0;
			if(nums.size() == 0)
				return 0;
			for(int i = 0; i < nums.size(); i++)
			{
				if(nums[i] != val)
				{
					nums[res] = nums[i];
					res++;
				}
			}
			return res;
		}
};
