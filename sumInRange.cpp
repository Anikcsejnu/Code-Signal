inline long long int mod(long long int a, long long int m)
{
    return (a%m + m) % m;
}

int  solution(vector<int> nums, vector<vector<int>> queries) {
    long long int len = nums.size();
    long long int  sum[len];
    memset(sum, 0, len);
    
    sum[0] = nums[0];
    
    for(int i = 1;i < len;i++) {
        sum[i] = sum[i - 1] + nums[i];
    }
    
    long long int total = 0;
    for(int i = 0;i < queries.size();i++) {
        
        if (queries[i][0] == 0) {
            total += sum[queries[i][1]];
        }
        else {
            total += (sum[queries[i][1]] - sum[queries[i][0] - 1]);    
        }
        total = mod(total, 1e9+7);
    }
    return total;
}

