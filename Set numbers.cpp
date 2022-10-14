#include<bits/stdc++.h>
using namespace std;
int num_bits[16]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
unsigned int count(unsigned int num)
{
    int nibble=0;
    if(num==0)
   {
        return num_bits[0];
   }
    nibble=num & 0xf;
    return num_bits[nibble]+count(num>>4);
}
int main()
{
    int t;
    long long b;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a=floor(log2(n))+1;
        int avl=count(n);
        
            if(avl==a)
            {
                cout<<n<<endl;
            }
        else
        {
           b=(pow(2,a-1)-1);
            cout << b << endl ;
            
        }
    }
}
