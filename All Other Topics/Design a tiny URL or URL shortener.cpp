//User function template for C++
class Solution{
public:	

	// Function to generate a short url from integer ID
	string idToShortURL(long long int n) {
	    // code here
	  char map[] = "abcdefghijklmnopqrstuvwxyzABCDEF"
                 "GHIJKLMNOPQRSTUVWXYZ0123456789"; 
  
    string shorturl; 
  
    // Convert given integer id to a base 62 number 
    while (n) 
    { 
        // use above map to store actual character 
        // in short url 
        shorturl.push_back(map[n%62]); 
        n = n/62; 
    } 
  
    // Reverse shortURL to complete base conversion 
    reverse(shorturl.begin(), shorturl.end()); 
  
    return shorturl;
	}

};