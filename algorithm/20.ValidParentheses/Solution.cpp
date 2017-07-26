/*
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. 
 * 
 * The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not. 
 * 
 */

#include<string>
using namespace std;
class Solution
{
	public:
		bool isValid(string s)
		{
			if(s.size() == 0 || s.size()%2 == 1)
			{
				return false;
			}
			return start(s);
		}
	private:
		string::iterator i;
		string target;
		bool start(string s)
		{
			target = s;
			i = target.begin();
			switch(*i)
			{
				case '(':
					return(nextChar(')'));break;
				case '[':
					return(nextChar(']'));break;
				case '{':
					return(nextChar('}'));break;
				default:
					return false;
			}
		}
		bool nextChar(char hope)
		{
			i++;
			if(i >= target.end())
				return false;
			if(*i == hope)
				return true;
			else
				switch(*i)
				{
					case '(':
					{
						if(nextChar(')'))
							return nextChar(hope);
						else return false;
						break;
					}
					case '[':
					{
						if(nextChar(']'))
							return nextChar(hope);
						else return false;
						break;
					}
					case '{':
					{
						if(nextChar('}'))
							return nextChar(hope);
						else return false;
						break;
					}
					default:
						return false;
				}
		}
};
