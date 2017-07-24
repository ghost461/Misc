/*
 * 
 * Given a roman numeral, convert it to integer. 
 * Input is guaranteed to be within the range from 1 to 3999. 
 * 
 * I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000. 
 * 
 */


#include<iostream>
#include<string>
using namespace std;
class Solution
{
	public:
		static int romanToInt(string s)
		{
			int res = 0;
			string::iterator i;
			int tmp_1 = 0, tmp_2 = 0;
			bool sign = false;
			bool plus = false;

			for(i = --s.end(); i >= s.begin(); i--)
			{
				//cout << *i << endl;
				switch(*i)
				{
					case 'I':
						tmp_1 = 1;break;
					case 'V':
						tmp_1 = 5;break;
					case 'X':
						tmp_1 = 10;break;
					case 'L':
						tmp_1 = 50;break;
					case 'C':
						tmp_1 = 100;break;
					case 'D':
						tmp_1 = 500;break;
					case 'M':
						tmp_1 = 1000;break;
				}
				//cout << "tmp_1=" << tmp_1 << endl;
				//cout << "tmp_2=" << tmp_2 << endl;
				//cout << "res=" << res << endl;
				//cout << "sign=" << sign << endl;
				//cout << "plus=" << plus << endl;
				if(sign)
				{
					if(tmp_1 == tmp_2)
					{
						res = res + tmp_2;
						tmp_2 = tmp_1;
						if(plus)
						{
							sign = false;
						}
						else sign = true;
						plus = false;
					}
					else
						if(tmp_1 < tmp_2)
						{
							res = res - tmp_1;
							tmp_2 = tmp_1;
							if(plus)
							{
								sign = false;
							}
							else sign = true;
							plus = false;
						}
						else
							if(tmp_1 > tmp_2)
							{
								res = res + tmp_1;
								tmp_2 = tmp_1;
								sign = true;
								plus = true;
							}
				}
				else
				{
					res = res + tmp_1;
					tmp_2 = tmp_1;
					sign = true;
					plus = false;
				}
				//cout << endl;
				//cout << "tmp_1=" << tmp_1 << endl;
				//cout << "tmp_2=" << tmp_2 << endl;
				//cout << "res=" << res << endl;
				//cout << "sign=" << sign << endl;
				//cout << "plus=" << plus << endl;
			}
			return res;
		}
};

int main()
{
	string test = "MDCXCV";
	cout << Solution::romanToInt(test) << endl;
	return 0;
}
