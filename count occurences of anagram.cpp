class Solution{
public:
	 bool check(int a1[],int a2[]){
        for(int i=0;i<26;i++){
            if(a1[i] != a2[i]){
                return 0;
            }
        }
        return 1;
    } 
	int search(string pat, string txt) {
	         int pl = pat.length();
	         int tl = txt.length();
	       int a1[26] = {0};
	       int a2[26] = {0};
	       for(int i=0;i<pl;i++){
	        a1[pat[i] - 'a']++;
	        a2[txt[i] - 'a']++;
	     }
	      int c= 0;
	     if(check(a1,a2)){
	         c++;
	     }
	     for(int i=pl;i<tl;i++){
	        a2[txt[i]- 'a']++;
	        a2[txt[i-pl] - 'a']--;
	        if(check(a1,a2)){
	            c++;
	        }
	     }
	     return c;
	}