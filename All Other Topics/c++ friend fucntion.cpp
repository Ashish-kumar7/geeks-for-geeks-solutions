void check_name(student k)
{
    //Add your code here.
    string a=k.first_name;
    string b=k.last_name;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    if(a==b){
        cout<<"ANAGRAM"<<endl;
    }
    else {
        cout<<"NOT ANAGRAM"<<endl;
    }
    
}