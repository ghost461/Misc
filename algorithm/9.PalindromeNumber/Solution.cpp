/*
 * 
 * Determine whether an integer is a palindrome. 
 * Do this without extra space
 * 
 */

//negative integer is not a palindrome number!!!

class Solution
{
	public:
		bool isPalindrome(int x)
		{
			//You may ignore the long long int and just int 
			//But the long long int will prevent data overflow. 
			long long int reverse = 0; 
			int tmp = x;
			if(x < 0)
				return false;
			while(tmp)
			{
				reverse = reverse * 10 + tmp%10;
				tmp /=10;
			}
			if(reverse == x)
				return true;
			else return false;
		}
};
