#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int L, R, J, X;
int T;
int P,K;
 string S;

int main()
{

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d %d",&L,&R,&J,&X);
        cin >> S;
        //printf("%s",S);
        if(S == "kabur")
        {
            printf("-1");
        }else
        {
            P = L * R * J;
            K = X - P;
            printf("%d",K);
        }

    }
}
