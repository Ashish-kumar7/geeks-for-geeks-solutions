
int comparision(val a,val b)
{
    return a.second<b.second;
}


int maxChainLen(struct val p[],int n)
{
//Your code here

sort(p,p+n,comparision);

int count=1;
int starttime=p[0].second;

for(int i=0;i<n;i++)
{
    if(p[i].first>starttime)
    {
        count++;
        starttime=p[i].second;
    }
}

return count;


}