// diagonal matrix sum
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int i = 0;
        int j = 0;
        int s = 0;
        while (i < mat.size())
        {
            s += mat[i][j];
            i++;
            j++;
        }
        j = mat.size() - 1, i = 0;
        while (i < mat.size())
        {
            if (i != j)
                s += mat[i][j];
            i++;
            j--;
        }
        return s;
    }
};