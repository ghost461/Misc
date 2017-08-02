/*
 * 
 * The count-and-say sequence is the sequence of intagers with the first five terms as following:
 * 1.	1
 * 2.	11
 * 3.	21
 * 4.	1211
 * 5.	111221
 * 
 * 1 is read off as "one 1" or 11 .
 * 11 is read off as "two is" or 21 .
 * 21 is read off as "one 2, then one 1" or 1211 .
 * 
 * Give an integer n, generate the n'th term of the count-and-say sequence. 
 * 
 * Note: Each term of the sequence of integers with be represented as a string. 
 * 
 * Example 1:
 * Input: 1
 * Output: "1"
 * 
 * Example 2:
 * Input: 4
 * Output: "1211"
 * 
 */

#include<string>
using namespace std;
class Solution
{
	public:
		string countAndSay(int n)
		{
			int i;
			res = "1";
			for(i = 1; i < n; i++)
			{
				res = nextRes(res);
			}
			return res;
		}
	private:
		string res;
		string nextRes(string tmp)
		{
			string tmpRes = "";
			string::iterator tmpPtr;
			char count = '1';
			char hope = *tmp.begin();
			for(tmpPtr = (tmp.begin() + 1); tmpPtr < tmp.end(); tmpPtr++)
			{
				if(*tmpPtr == hope)
				{
					count++;
				}
				else
				{
					tmpRes.push_back(count);
					tmpRes.push_back(hope);
					hope = *tmpPtr;
					count = '1';
				}
			}
			tmpRes.push_back(count);
			tmpRes.push_back(hope);
			return tmpRes;
		}
};
