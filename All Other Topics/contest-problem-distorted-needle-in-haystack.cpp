
bool isShuffledSubstring(string A, string B) 
{
    int n = A.length(); 
	int m = B.length(); 
	if (n > m) { 
		return 0; 
	} 
	else { 
		sort(A.begin(), A.end()); 
		for (int i = 0; i < m; i++) {
			if (i + n - 1 >= m) 
				return 0; 
				
			string str = ""; 
			for (int j = 0; j < n; j++){
				str.push_back(B[i + j]);
				}
			sort(str.begin(), str.end()); 
			if (str == A){
				return 1;
			}
		} 
	} 
}
