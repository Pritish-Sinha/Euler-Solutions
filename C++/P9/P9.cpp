#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int tmp,i_sqrt;
    double d_sqrt;
    for(int i=1;i<500;i++)
    {
        for(int j=i+1;j<1000-i;j++)
        {
            tmp=i*i+j*j;
            d_sqrt=sqrt(tmp);
            i_sqrt=d_sqrt;
            if(i_sqrt==d_sqrt)
            {
                if(i+j+i_sqrt==1000)
                {
                    cout<<i*j*i_sqrt<<endl;
                }
            }
        }
    }
return 0;
}
