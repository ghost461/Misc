/*
 * 
 * Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
 * return the length of last word in the string. 
 * 
 * If the last word does not exist, return 0. 
 * 
 * Note: A word is defined as a character sequence consists of non-space characters only.
 * 
 * For example. 
 * Given s = "Hello World", 
 * return 5.
 * 
 */

#include<string>
using namespace std;
class Solution
{
	public:
		int lengthOfLastWord(string s)
		{
			string::iterator ptr;
			int count = 0;
			for(ptr = (s.end() - 1); ptr >= s.begin(); ptr--)
			{
				if(*ptr == ' ')
				{
					if(count != 0)
						break;
					else count--;
				}
				count++;
			}
			return count;
		}
};
