class Solution {
public:

    /*
    if i give u a inverted array aand a number u will give the product in inverted format as well.
    */
    
    vector<int>multiply(vector<int> & A,int x){
        int carry =0;
        for(int i=0;i<A.size();i++){
            int val=A[i]*x;
            val+=carry;
            A[i]=val%10;
            carry=val/10;
        }
        
        while(carry>0){
            int temp=carry%10;
            A.push_back(temp);
            carry=carry/10;
        }
        
        return A;
    }
    
    /*
    koi bhi vector dedo mai tmko reverse krke de dunga
    */
    
    vector<int>invert(vector<int>A){
        reverse(A.begin(),A.end());
        return A;
    }
    
    vector<int> factorial(int N){
 
        vector<int>value;
        value.push_back(1);
        
        
        for(int i=2;i<=N;i++){
            value = multiply(value,i);
        }
        
        vector<int>ans=invert(value);
        
        return ans;
    }
};
