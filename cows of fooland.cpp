lass Solution{
	public:
	void multiply(long long int mat[2][2],long long int m[2][2])
  {
      long long int x=1000000007;
      long long int temp[2][2];
      temp[0][0]=mat[0][0]*m[0][0]+mat[0][1]*m[1][0];
      temp[0][1]=mat[0][0]*m[0][1]+mat[0][1]*m[1][1];
      temp[1][0]=mat[1][0]*m[0][0]+mat[1][1]*m[1][0];
      temp[1][1]=mat[1][0]*m[0][1]+mat[1][1]*m[1][1];
      mat[0][0]=temp[0][0]%x;
      mat[0][1]=temp[0][1]%x;
      mat[1][0]=temp[1][0]%x;
      mat[1][1]=temp[1][1]%x;
   }
   
   void mat_power(long long int mat[2][2],long long int n)
   {
       if(n==1) return; // n==0 will never come
       mat_power(mat,n/2);
       multiply(mat,mat);
       long long int m[2][2]={{1,1},{1,0}};   
       if(n%2!=0)
        multiply(mat,m);
   }
int TotalAnimal(long long int N)
{
    // Code here
    long long int mat[2][2]={{1,1},{1,0}};   
       if(N==0) return 0;
       mat_power(mat,N+1);
       return mat[0][1];
}
};