/*
 *
 * Given a non-negative integer represented as a non-empty array of digits, plus one to the integer. 
 * 
 * You may assume the integer do not contain any leading zero, except the number 0 itself. 
 * 
 * The digits are stored such that the most signifcant digit is at the head of the list. 
 * 
 */

#include<vector>
using namespace std;
class Solution
{
	public:
		vector<int> plusOne(vector<int>& digits)
		{
			for(int i = 0; i < digits.size(); i++)
			{
				if(i == digits.size() - 1)
				{
					if(digits[i] + 1 == 10)
					{
						if(i == 0)
						{
							res.push_back(1);
							res.push_back(0);
						}
						else
						{
							res[i - 1] += 1;
							res.push_back(0);
						}
					}
					else res.push_back(digits[i] + 1);
				}
				else res.push_back(digits[i]);
			}
			checkRes();
			return res;
		}
	private:
		vector<int> res;
		void checkRes()
		{
			for(int i = 0; i < res.size(); i++)
			{
				if(res[i] == 10)
				{
					if(i == 0)
					{
						res.insert(res.begin(), 1);
						res[1] = 0;
					}
					else
					{
						res[i - 1] += 1;
						res[i] = 0;
						checkRes();
						break;
					}
				}
			}
		}
};
