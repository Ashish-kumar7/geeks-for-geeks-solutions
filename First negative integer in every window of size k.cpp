vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) {
                                                 
                       queue<int>Q;
                       
                       for(int i=0;i<k;i++){
                           if(A[i]<0)Q.push(A[i]);
                       }
                       vector<long long>ans;
                       
                       for(int i=k;i<=n-1;i++){
                           if(Q.size()!=0)ans.push_back(Q.front());
                           else{
                               ans.push_back(0);
                           }
                           if(A[i-k]<0)Q.pop();
                           if(A[i]<0)Q.push(A[i]);
                      
                       }
                       if(!Q.empty())ans.push_back(Q.front());
                       else ans.push_back(0);
                                                 
                        return ans;     
 }