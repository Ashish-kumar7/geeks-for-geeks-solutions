class Solution{
public:
    
    int find(int n){
         long long int x = 0; 
    for (x=n; x>=1; x--) { 
        int no = x; 
        int prev_dig = 11; 
        bool flag = true; 
        while (no != 0) 
        { 
            if (prev_dig < no%10) 
            { 
               flag = false; 
               break; 
            } 
            prev_dig = no % 10; 
            no /= 10; 
        } 
        if (flag == true) 
           break; 
    } 
    return x;
    }
};