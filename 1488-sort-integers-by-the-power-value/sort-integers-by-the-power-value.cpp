class Solution {
public:
    int getPower(int x) {
    int steps = 0;
    while (x != 1) {
        if (x % 2 == 0)
            x /= 2;
        else
            x = 3 * x + 1;
        steps++;
    }
    return steps;
}

// Function to return the kth integer in the range [lo, hi] sorted by power value
int getKth(int lo, int hi, int k) {
    vector<pair<int, int>> arr;
    
    // Compute the power for each integer and store as a pair {power, number}
    for (int i = lo; i <= hi; i++) {
        int power = getPower(i);
        arr.push_back({power, i});
    }
    
    // Sort by power; if two numbers have the same power, the smaller number comes first.
    sort(arr.begin(), arr.end());
    
    // kth element (1-indexed) is at position k-1
    return arr[k - 1].second;
}

};
