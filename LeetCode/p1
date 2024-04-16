// Palindrome Number
//https://leetcode.com/problems/palindrome-number/description/
class Solution {
public:
    bool isPalindrome(int x) {
        // if number is negative ret false
        if(x<0)
        {
            return false;
        }
        else if(x==0)
        {
            return true;
        }
        else
        {
            int temp=x;int count=0;
            while(temp!=0)
            {
                count=count+1;
                temp=temp/10;
            }

            int arr[count];
            temp=x; int i; i=0;
            while(temp!=0)
            {
                arr[i]=temp%10;
                temp=temp/10;
                i++;
            }
            int arr2[count];
            for(int j=0;j<count;j++)
            {
                arr2[j]=arr[j];    
            }
            bool ans=false; int temp2=count-1;
            for(int k=0;k<count;k++)
            {
                if(arr2[k]==arr[temp2])
                {
                    ans=true;
                    temp2--;
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            if(ans==false)
            {
                return false;
            }
            else
            {
                return true;
            }

        }
    }
};
