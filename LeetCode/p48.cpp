// String compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==0)
        {
            return 0;
        }
        int writeIndex=0;
        int left=0;int right=0;
        while(right<n)
        {
            while(right<n&&chars[left]==chars[right])
            {
                right++;
            }
            chars[writeIndex++]=chars[left];
            int count=right-left;
            if(count>1)
            {
                string countStr=to_string(count);
                for(char c:countStr)
                {
                    chars[writeIndex++]=c;

                }
               
            }
             left=right;
           
        }
         return writeIndex;
        
    }
};