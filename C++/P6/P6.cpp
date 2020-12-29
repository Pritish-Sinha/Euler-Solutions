#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ans=0,n=100;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    ans*=ans;
    for(int i=1;i<=n;i++){
        ans-=i*i;
    }
    cout<<ans<<endl;
return 0;
}
