class Solution{

	public:
	int find_min(int a[], int n, int k) {
         int s = 0, complete_pairs = 0;
        for (int i = 0; i < n; i++) {
            complete_pairs += a[i] / 2;

            if (a[i] % 2 == 0)
                s += (a[i] - 2) / 2;
            else
                s += (a[i] - 1) / 2;
                   }

        if (k > complete_pairs) return -1;

        if (k <= s) return 2 * (k - 1) + n + 1;
        
        return 2 * s + n + (k - s);
    }

};