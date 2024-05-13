(* #Power of two
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x. *)

class Solution {
public:
    bool isPowerOfTwo(int n) {
      long long int two;two=1;
        long long int prev;
        prev=0;
        while(true)
        {
            prev=two;
            two=two*2;
            if(two>n)
            {
                if(prev==n)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;

            }
        }
    }
};
