   vector<int> longestCommonPrefix(string str1, string str2){
        // code here
        
        
        int first= -1,last = -1;
        for( int i = 0 ;i < str2.size() ; i++ ){
            if(str2[i] == str1[0]){
                int j = 0 ;
                //cout<<str1[j]<<" ";
                int temp = i ;
                while( str2[temp] == str1[j] ){
                    //cout<<str1[j]<<" ";
                    j++;
                    temp++;
                }
                if(last < j-1){
                    last = j- 1;
                }
            }
        }
        if( last != -1 ){
            return {0,last};
        }
        return {first,last};
    }