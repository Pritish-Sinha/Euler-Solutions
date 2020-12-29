#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(long long n)
{
    bool flag=true;
    if(n==1)
    {
        return false;
    }
    else
    {
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    long long ans=0;
    long n=2000000;
    for(long i=1;i<=n;i++)
        if(isPrime(i))
            ans+=i;
    cout<<ans<<endl;
return 0;
}
