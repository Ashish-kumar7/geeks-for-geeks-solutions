
#include<bits/stdc++.h>
using namespace std;
struct node
{
	string data;
	struct node *left;
	struct node *right;

	node(string x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

int evalTree(node *);

int main()

{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	int p=0;
	node *root = new node(s[p]);
	queue<node *> q;
	q.push(root);
    p=1;
	while(!q.empty())
	{
		node *f = q.front();
		q.pop();
		node  *l,*r;
		if(p!=n){
        l=new node(s[p]);
		f->left = l;
		p++;
		q.push(l);
	    }
	    else
	    {
	    	f->left = NULL;
	    }
		if(p!=n){
        r=new node(s[p]);
		f->right = r;
		p++;
		q.push(r);
		}else
		{
			f->right=NULL;
		}
	}
	cout<<evalTree(root)<<endl;
    }
}

int func(string s){
    stringstream sso;
    sso<<s;
    int a;
    sso>>a;

    return a;

}
int evalTree(node* root)
{
   queue<node*> q1;
   queue<node*> q2;


   if(root == NULL){
       return 0;
   }

   q1.push(root);
   vector<string> vec;


   while(!q1.empty() || !q2.empty())
    {
     while(!q1.empty())
     {
         node* temp=q1.front();
         q1.pop();

         vec.push_back(temp->data);

         if(temp->left!=NULL)
         {
             q2.push(temp->left);

         }
         if(temp->right!=NULL)
         {
             q2.push(temp->right);
         }
     }

    while(!q2.empty())
     {
         node * temp1=q2.front();
         q2.pop();

         vec.push_back(temp1->data);

         if(temp1->left!=NULL)
         {
             q1.push(temp1->left);

         }
         if(temp1->right!=NULL)
         {
             q1.push(temp1->right);
         }
     }
   }

    queue<int> qu1;
    queue<string> qu2;

    for(int i=vec.size()-1 ;i>=0;i--)
    {
        if(vec[i]!= "+" && vec[i]!= "-" && vec[i]!="*" && vec[i]!="/")
        {
            qu1.push(func(vec[i]));
        }
        else
        {
            qu2.push(vec[i]);
        }
    }
    while(!qu2.empty())
    {
     int a,b,c;
    a=qu1.front();
    qu1.pop();
    b=qu1.front();
    qu1.pop();

    string s;
    s=qu2.front();
    qu2.pop();

    if(s=="+")
    {
       c=b+a;

    }
    else if(s=="-")
    {
       c=b-a;

    }
    else if(s=="*")
    {
       c=b*a;

    }
   else if(s=="/")
    {
       c=b/a;

    }

    qu1.push(c);
}


int g=qu1.front();

return g;

}
