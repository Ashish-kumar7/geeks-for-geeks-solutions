long long int numberOf2sinRange(long long int n){
string s;
int count =0;
for(int i=0;i<=n;i++){
    s=to_string(i);
    for(int j=0;j<s.size();j++){
        if(s[j]-'2'==0){
            count++;
        }
    }
}
return count;
}