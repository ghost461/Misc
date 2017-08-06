/*
 *
 * Given two binary strings, return their sum (also a binary string). 
 * 
 * For Example, 
 * a = "11"
 * b = "1"
 * Return "100"
 * 
 */

/*
 * 
 * class Solution
 * {
 * 	public:
 * 		string addBinary(string a, string b)
 * 		{
 * 			string s = "";
 * 			int c = 0, i = a.size() - 1, j = b.size() - 1;
 * 			while(i >= 0 || j >= 0 || c == 1)
 * 			{
 * 				c += i >= 0 ? a[i --] - '0' : 0;
 * 				c += j >= 0 ? b[j --] - '0' : 0;
 * 				s = char(c % 2 + '0') + s;
 * 				c /=2;
 * 			}
 * 			return s;
 * 		}
 * }
 * 
 */
#include<string>
using namespace std;
class Solution
{
	public:
		string addBinary(string a, string b)
		{
			string res = "";
			int c = 0;
			int i = a.size() - 1;
			int j = b.size() - 1;
			while(i >= 0 || j >= 0 || c == 1)
			{
				if(i >= 0)
				{
					c += a[i] -'0';
					i--;
				}
				if(j >= 0)
				{
					c += b[j] - '0';
					j--;
				}
				res = char(c % 2 + '0') + res;
				c /= 2;
			}
			return res;
		}
};
