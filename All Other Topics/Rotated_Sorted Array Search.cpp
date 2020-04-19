int find(vector<int>A,int B,int s,int e){
    if(s>e){
        return -1;
    }
    int mid =(s+e)/2;
    if(A[mid]==B){
        return mid;
    }
    if(A[s]<=A[mid]){
        if(B>=A[s] && B<=A[mid]){
            return find(A,B,s,mid-1);
        }
        else {
            return find(A,B,mid+1,e);
        }
    }
    if(B>=A[mid] && B<=A[e]){
        return find(A,B,mid+1,e);
    }
    return find(A,B,s,mid-1);
}
int Solution::search(const vector<int> &A, int B) {
    int n=A.size();    
    int yy=find(A,B,0,n-1);
    return yy;
}