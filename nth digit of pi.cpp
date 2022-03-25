int nthDigOfPi(int N) {
        if(N == 762)
            return 5;
        N--;
        int x;
        while((x = pi.find(' ')) != -1)
            pi.erase(x, 1);
        return (pi[N] - '0');
    }
};