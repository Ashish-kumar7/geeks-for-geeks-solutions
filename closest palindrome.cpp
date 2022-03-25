long long int getPalindrome(long long left, bool even) 
    {
        long long res = left;
        if (!even) left = left / 10;
        while (left > 0) {
            res = res * 10 + left % 10;
            left /= 10;
        }
        return res;
    }

	long long int closestPalindrome(long long int num)
	{
	    // Code here
	    string str = to_string(num);
	    int len = str.size();
	    int i = (len % 2 == 0) ? len / 2 - 1: len / 2;
	    long long left = stoi(str.substr(0, i+1));
        
        // input: n 12345
        vector <long long> candidate;
        candidate.push_back(getPalindrome(left, len % 2 == 0)); // 12321
        candidate.push_back(getPalindrome(left+1, len % 2 == 0)); // 12421
        candidate.push_back(getPalindrome(left-1, len % 2 == 0)); // 12221
        candidate.push_back((long long)pow(10, len-1) - 1); // 9999
        candidate.push_back((long long)pow(10, len) + 1); // 100001
        
        long long diff = INT_MAX, res = 0;
        for (long long cand : candidate) {
            if (cand == num)
                return num;
            if (abs(cand - num) < diff) {
                diff = abs(cand - num);
                res = cand;
            } else if (abs(cand - num) == diff) {
                res = min(res, cand);
            }
        }
        return res;
	}\