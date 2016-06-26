#include <cstdio>
#include <time.h>
using namespace std;

long int U(long int n)
{
    return 3+(n-1)*1;
}

long int S(long int n,long int U)
{
    int X = 3+U;
    int hasil;
    if(X%2 != 0)
    {
        hasil = (n/2)*X;
    }else
    {
        hasil = n*(X/2);
    }
    return hasil;
}

int main()
{
    int T;
    long int N;
    long int Un, Sn;
    long int SISA;
    bool masih;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%ld",&N);
        masih = true;
        if(N<4)
        {
            printf("%d",-1);
        }else
        {
            SISA = N-2;
            for(int i=1;i<=N && masih; i++)
            {
                Un = U(i);
                Sn = S(i,Un);
               // printf("\n%d %d\n",Un,Sn);
                if(Sn>SISA)
                {

                    printf("%d",i);
                    masih = false;
                }else
                if(Sn == SISA)
                {
                    printf("%d",i+1);
                    masih = false;
                }
            }
        }

    }
}
