int solve(int n, int k, vector<int> heights) {
    int count =0, sol = 0, j = 0;
    for(int i = 0; i < n-k; i++) {
        j = i+1;
        count = 0;
        while(j <= i+k) {
            if(heights[i] > heights[i+1]) {
                count++;
            } else {
                count = 0;
            }
            j++;
        }
        if(count == k-1) {
            sol++;
        }
    }
    for(int i = n-k; i < n; i++) {
        j = i+1;
        count = 0;
        while(j <= n-1) {
            if(heights[i] > heights[j]) {
                count++;
            } else {
                count = 0;
            }
            j++;
        }
        if(count == n-i-1) {
            sol++;
        }
    }
    return sol+1;
}
