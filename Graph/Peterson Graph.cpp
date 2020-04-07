bool findthepath(char * S,int v){
    result[0]=v;
    for(int i=0;i<S.size();i++){
        if(adj[v][S[i]-'A']==1 || adj[S[i]-'A'][v]==1  ){
            v=S[i]-'A';
        }
        else if(adj[v][S[i]-'A' + 5]==1 || adj[S[i]-'A' + 5][v]==1  ){
            v=S[i]-'A' + 5;
        }
       else {
           return FALSE;
       }
       result[i]=v;
    }
    return TRUE;
}


int main()
{
    
    /*-
    ------
    
    */
    
    if(findthepath(S,S[0]-'A') || findthepath(S,S[0]-'A'+5))
    {
        // cout<<result  print karp result wla array ko ;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}