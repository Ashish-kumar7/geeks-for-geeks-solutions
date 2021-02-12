void bitWiseOperation(int a, int b, int c){
    
    // Your code here
    cout<<(a^a)<<endl;
    cout<<(c^b)<<endl;
    int e=c^b;
    cout<<(a&b)<<endl;
    cout<<( c | (a^a) ) <<endl;
    cout<<( ~e )<<endl;
    
}