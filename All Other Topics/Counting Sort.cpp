void countSort(char arr[]){
  int a[26]={0};
    for(int i=0; i<strlen(arr); i++){
        a[arr[i]-'a']++;
    }
    int j=0;
    for(int i=0; i<26; i++){
        while(a[i]--){
            arr[j]=char(i)+'a';
            j++;
        }
    }