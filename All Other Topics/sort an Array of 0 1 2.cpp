#include <iostream>

using namespace std;

int main()
{
    unsigned long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];

        for(int i=0;i<n;i++)
        {

            cin>>A[i];
        }



        int a=0,b=0,c=0;


        for(int k=0;k<n;k++)
        {

            if(A[k]==0)
            {

                a++;

            }
            else if(A[k]==1)
            {

                b++;

            }

            else if(A[k]==2)
            {

                c++;
            }
        }


       

        for(int h=0;h<a;h++)
        {

            cout<<"0"<<" ";
        }

        for(int p=0;p<b;p++)
        {

            cout<<"1"<<" ";
        }

        for(int r=0;r<c;r++)
        {

            cout<<"2"<<" ";
        }

        cout<<endl;
    }


    return 0;
}
