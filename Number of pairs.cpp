long long int countPairs(long long int X[], long long int Y[],long long int m,long long int n) 
{ 
	// To store counts of 0, 1, 2, 3 and 4 in array Y 
	long long int NoOfY[5] = {0}; 
	for (int i = 0; i < n; i++) 
		if (Y[i] < 5) 
			NoOfY[Y[i]]++; 

	// Sort Y[] so that we can do binary search in it 
	sort(Y, Y + n); 

	long long int total_pairs = 0; // Initialize result 

	// Take every element of X and count pairs with it 
	for (int i=0; i<m; i++) 
		total_pairs += count(X[i], Y, n, NoOfY); 

	return total_pairs; 
}