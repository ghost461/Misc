/*
 * 
 * Given a roman numeral, convert it to integer. 
 * Input is guaranteed to be within the range from 1 to 3999. 
 * 
 * I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000. 
 * 
 */


#include<string>
using namespace std;
class Solution
{
	public:
		int romanToInt(string s)
		{
			int res = 0;
			string::iterator i;
			int tmp_1 = 0, tmp_2 = 0;
			bool sign = false;

			for(i = s.end(); i > s.begin(); i--)
			{
				switch(*i)
				{
					case 'I':
						tmp_1 = 1;
					case 'V':
						tmp_1 = 5;
					case 'X':
						tmp_1 = 10;
					case 'L':
						tmp_1 = 50;
					case 'C':
						tmp_1 = 100;
					case 'D':
						tmp_1 = 500;
					case 'M':
						tmp_1 = 1000;
				}
				if(sign)
				{
					if(tmp_1 == tmp_2)
					{
						res = tmp_1 + tmp_2;
						sign = true;
					}
					if(tmp_1 < tmp_2)
					{
						res = res + tmp_1 - tmp_2;
						sign = false;
					}
					if(tmp_1 > tmp_2)
					{
						res = res + tmp_1 + tmp_2;
						sign = false;
					}
				}
				else
				{
					res = res + tmp_1;
					tmp_2 = tmp_1;
				}
			}
			return res;
		}
};
