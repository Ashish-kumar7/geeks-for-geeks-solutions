et* constructTree(char p[])
{
//code here
int n = strlen(p);
    stack<et*> s;
 
    for(int i = 0 ; i < n ; i++)
    {
        if(isOperator(p[i]))
        {
            et* right = s.top();s.pop();
            et* left =  s.top();s.pop();
            et* temp = new et(p[i]);
            temp->left = left;
            temp->right = right;
            s.push(temp);
        }
        else
        {
         s.push(new et(p[i]));   
        }
    }
    return s.top();
}