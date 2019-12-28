using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    string str1;
	    string str2;
	    cin>>str1>>str2;

	    for(int i=0;i<str1.size();i++){
	        if(str1[i] == '#'){
	            int x = (int)str1[i-1];
	            if(x+1 > 90){
	                x = x-26;
	            }
	            x++;
	           // cout <<(int)str1[i] <<  " x= " << x << " " << (char)x << endl;
	            str1[i] = (char)x;
	            str1[i-1] = '$';
	        }
	    }

	    for(int i=0;i<str2.size();i++){
	        if(str2[i] == '#'){
	            int x = (int)str2[i-1];
	            if(x+1 > 90){
	                x = x-26;
	            }
	            x++;
	            str2[i] = (char)x;
	            str2[i-1] = '$';
	        }
	    }

	    string t1 = "";
	    string t2 = "";
	    for(int i=0;i<str1.size();i++){
	        if(str1[i] != '$'){
	            t1 += str1[i];
	        }
	    }

	    for(int i=0;i<str2.size();i++){
	        if(str2[i] != '$'){
	            t2 += str2[i];
	        }
	    }
	   // cout << str1 << endl;
	   // cout << str2 << endl;
	   // cout << t1 << endl;
	   // cout << t2 << endl;
	    if(t1.size() != t2.size()){
	        cout << "No" << endl;
	    }
	    else{
	        int flag = 0;
	        for(int i=0;i<t1.size();i++){
    	        if(t1[i] != t2[i]){
    	            flag = 1;
    	            break;
    	        }
	        }
	        if(flag == 0){
	            cout << "Yes" << endl;
	        } else{
	            cout << "No" << endl;
	        }
	    }
	}
	return 0;
}
