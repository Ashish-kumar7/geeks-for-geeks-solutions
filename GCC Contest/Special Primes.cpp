using namespace std;

map<long long, long long> mp;

long long pq = 1000*1000;

void SieveofEratosthenes(long long n)
{
    bool visited[n];
    for (long long i = 2; i <= n + 1; i++)
        if (!visited[i]) {
            for (long long j = i * i; j <= n + 1; j += i)
                visited[j] = true;
            mp[i]++;
        }
}

bool isPrime(long long n){
    if(mp.find(n) != mp.end()){
        return true;
    }
    return false;
}

bool specialPrimeNumbers(long long n)
{
    if (isPrime(n) && isPrime(n - 2))
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;

    SieveofEratosthenes(pq);

    while(t--){
        long long n;
        cin >> n;

        vector<long long>a(n);
        vector<long long>vec;

        for(long long i = 0; i<n; i++){
            cin >> a[i];
            if(specialPrimeNumbers(a[i]) == true){
                vec.push_back(a[i]);
                a[i] = -1;
            }
        }
        sort(vec.begin(), vec.end());

        long long j = 0;
        for(long long i = 0; i<n; i++){
            if(a[i] == -1){
                a[i] = vec[j];
                j++;
            }
        }
        for(long long i = 0; i<n; i++){
                cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
