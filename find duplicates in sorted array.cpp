int removeDuplicates(vector<int>& nums) //ver.1
    {
        stack <int> stk;
        int n = nums.size();
        stk.push(nums[0]);
        int i = 1;

        while( i < n )
        {
            if (stk.top() == nums[i]) { i++; }
            else { stk.push(nums[i]); i++; }
        }
        nums.clear();

        while(!stk.empty())
        {
            int u = stk.top();
            nums.push_back(u);
            stk.pop();
        }

        reverse(nums.begin(), nums.end());

        return nums.size();
    } //Time complexity O(n), Space O(n)
--------------------------------------------------------------------------------------------------------------
    int removeDuplicates(vector<int>& nums) //ver.2
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
          if (nums[i] != nums[i - 1])
          {
            nums[j] = nums[i];
            j++;
          }
        }
        return j;
    }//Time complexity O(n), Space O(n)
