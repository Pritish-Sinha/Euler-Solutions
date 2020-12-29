#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    int ans=1,tmp;
    for(int i=1;i<=20;i++){
        tmp=gcd(ans,i);
        ans=max(ans*i/tmp,ans);
    }
    cout<<ans<<endl;
return 0;
}
