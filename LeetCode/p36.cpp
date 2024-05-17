// Average salary excludin the minimum and maximum salary

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int avg=0;
        int size=salary.size()-2;
        for(int i=1;i<salary.size()-1;i++)
        {
            avg=avg+salary[i];
        }
        double result=(double)avg;
        result=result/size;
        return result;
    }
};