//Most optimized code for finding nth fibonacci number(without calling multiple recursive calls) in linear time complexity 0(n)
#include<bits/stdc++.h>
using namespace std;
//FAST1,FAST2,FAST3 for fast ip-op 
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define FAST3 cout.tie(NULL)
int fib(int n)
{
    if(n==0)return 0;
    if(n==1 ||n==2)return 1;
    int a[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
        a[i]=a[i-1]+a[i-2];
    return a[n];
  // we can also return the whole array if the problem asks to find those numbers
}

int main(){
    FAST1;
    FAST2;
    FAST3;
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
