bool checkPangram (string &str){
    vector<bool> mark(26, false); 
  
    int index; 
  
    for (int i = 0; i < str.length(); i++) { 
        if ('A' <= str[i] && str[i] <= 'Z') 
            index = str[i] - 'A'; 

        else if ('a' <= str[i] && str[i] <= 'z') 
            index = str[i] - 'a'; 
 
        else
            continue; 

        mark[index] = true; 
    } 
    for (int i = 0; i <= 25; i++) 
        if (mark[i] == false) 
            return (false); 

    return (true); 
}