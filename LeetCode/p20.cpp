// Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

// Return the largest lucky integer in the array. If t__HAVE_SPECULATION_SAFE_VALUE

e is no lucky integer return -1.



class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        map<int,int>map;
      for(int i=0;i<arr.size();i++){
          map[arr[i]]++;
      }
      for(auto it=map.rbegin();it!=map.rend();it++){
         if(it->first==it->second)return it->first; 
      }
     return -1;
    

    














    }
};