/*
 * 
 * Write a function to find longest common prefix string amongst an array of strings.
 * 
 */
#include<string>
#include<vector>
#include<iostream>
using namespace std;
class Solution
{
	public:
		string longestCommonPrefix(vector<string>& strs)
		{
			string res;
			if(strs.size() <= 0) 
				return res;
			for(int i = 1; i <= strs[0].size(); i++)
			{
				string tmp = strs[0].substr(0,i);
				bool sign = true;
				int j = 1;
				for(j = 1; j < strs.size(); j++)
				{
					if(i > strs[j].size() || tmp != strs[j].substr(0,i))
					{
						sign = false;
						break;
					}
				}
				if(!sign)
				{
					return res;
				}
				res = tmp;
			}
			return res;
		}
};
