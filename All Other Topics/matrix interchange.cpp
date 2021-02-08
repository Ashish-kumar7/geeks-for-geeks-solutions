void interchange(int r,int c)
{
    //Your code here
    for(int i=0;i<r;i++){
        swap(arr[i][0], arr[i][c-1]);
    }
  
  //Printing the modified matrix
    for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<c;j++)
    	    {
    	        cout<<arr[i][j]<<" ";
    	        
    	    }
    	 cout<<endl;
	   }
}