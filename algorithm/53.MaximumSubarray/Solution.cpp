/*
 * 
 * Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
 * 
 * For example, given the array [-2, 1, -3, 4, -1, 2, 1, -5, 4], 
 * the contiguous subarray [4, -1, 2, 1] has the largest sum = 6.
 * 
 * More practice:
 * If you have figured out the O(n)solution, try coding another solution using the divide and conquer approach, which is more subtle. 
 * 
 */
/*
 * LOW_solution
 * It is very very low ~~~
 * OK, I am fine. 
 * 
 * #include<vector>
 * using namespace std;
 * class Solution
 * {
 * 	public:
 * 		int maxSubArray(vector<int>& nums)
 * 		{
 * 			int max = -100;
 * 			int tmp = 0;
 * 			if(nums.size() == 1)
 * 				return nums[0];
 * 			for(int i = 0; i < nums.size(); i++)
 * 			{
 * 				tmp = nums[i];
 * 				if(tmp > max)
 * 					max = tmp;
 * 				for(int j = i + 1; j < nums.size(); j++)
 * 				{
 * 					tmp += nums[j];
 * 					if(tmp > max)
 * 						max = tmp;
 * 				}
 * 			}
 * 			return max;
 * 		}
 * };
 * 
 */

/*
 * 
 * Idea is very simple. Basically, keep adding each integer to the sequence until the sum drops belows 0. 
 * 
 * If sum is negative, then should reset the sequence. 
 * 
 */
#include<vector>
using namespace std;
class Solution
{
	public:
		int maxSubArray(vector<int>& nums)
		{
			int res = nums[0], sum = 0;
			for(int i = 0; i < nums.size(); i++)
			{
				sum += nums[i];
				res = max(sum, res);
				sum = max(sum, 0);
			}
			return res;
		}
};
