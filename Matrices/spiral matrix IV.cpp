/*You are given two integers m and n, which represent the dimensions of a matrix.

You are also given the head of a linked list of integers.

Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.

Return the generated matrix.

 

Example 1:


Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
Explanation: The diagram above shows how the values are printed in the matrix.
Note that the remaining spaces in the matrix are filled with -1.
  */
  
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        vector<vector<int>> ans;
        for(int i=0;i<m;i++)
        {
            vector<int> a;
            for(int j=0;j<n;j++)
            {
                a.push_back(-1);
            }
            ans.push_back(a);
        }
        int l=0;
        int h=0;
        while(head && l<m && h<n)
        {
            for(int i=h;i<n && head;i++)
            {
                ans[l][i]=head->val;
                head=head->next;
            }
            l++;
            for(int i=l;i<m && head;i++)
            {
                ans[i][n-1]=head->val;
                head=head->next;
            }
            n--;
            if(l<m)
            {
                for(int i=n-1;i>=h && head;i--)
                {
                    ans[m-1][i]=head->val;
                    head=head->next;
                }
                m--;
            }
            if(h<n)
            {
                for(int i=m-1;i>=l && head;i--)
                {
                    ans[i][h]=head->val;
                    head=head->next;
                }
                h++;
            }
        }
        return ans;
    }
};
