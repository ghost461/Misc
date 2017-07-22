/*
 * 
 * Reverse digits of integer
 * 
 * Example1: x = 123, return 321
 * Example1: x = -123, return -321
 * 
 * Note: 
 * The input is assumed to be a 32-bit signed intger. 
 * Your function should return 0 when the reversed integer overflows.
 * 
 */ 

#include<limits.h>
using namespace std;
class Solution
{
	public:
		int reverse(int x)
		{
			long long res = 0;
			while(x)
			{
				res = res*10 + x%10;
				x/=10;
			}
			if(res < INT_MIN || res > INT_MAX)
				return 0;
			else return res;
		}
};
