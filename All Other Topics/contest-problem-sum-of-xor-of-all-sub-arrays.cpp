long long int sum_of_XOR(int arr[], int n)
{
	long long int sum = 0; 
	long long int mul = 1; 
	for (int i = 0; i < 30; i++) {
		long long int c_odd = 0; 
		bool odd = 0; 
		for (int j = 0; j < n; j++) { 
			if ((arr[j] & (1 << i)) > 0) 
				odd = (!odd); 
			if (odd) 
				c_odd++; 
		} 
		for (int j = 0; j < n; j++) { 
			sum += (mul * c_odd); 

			if ((arr[j] & (1 << i)) > 0) 
				c_odd = (n - j - c_odd); 
		} 
		mul *= 2; 
	} 
	return sum; 
}
