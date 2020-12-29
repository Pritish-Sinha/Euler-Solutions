#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
return true;
}

int main()
{
    int cnt=0,i=1;
    while(cnt!=10001)
    {
        i++;
        if(isPrime(i))
        {
            cnt++;
        }
    }
    cout<<i<<endl;
return 0;
}
