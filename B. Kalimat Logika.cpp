#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  int T;
  char K[100];
  int B, S, P;

  scanf("%d",&T);
  while(T--)
  {
      scanf("%s",&K);
      B = S = P = 0;
      for(int i=0 ;i<strlen(K); i++)
      {
        if(K[i] != '~')
        {
          if(K[i-1] == '~')
          {
                if((int) K[i] >= 97 && (int) K[i] <= 122)
                {
                    P++;
                }else
                if(K[i] == 'S')
                {
                    B++;
                }else
                if(K[i] == 'B')
                {
                    S++;
                }
          }else
          {
            if((int) K[i] >= 97 && (int) K[i] <= 122)
            {
                P++;
            }else
            if(K[i] == 'B')
            {
                B++;
            }else
            if(K[i] == 'S')
            {
                S++;
            }
           }
        }else
        if(K[i] == '~')
        {
            continue;
        }
      }

      if(S>0)
      {
          printf("salah");
      }else
      {
          if(P>0)
          {
              printf("mungkin");
          }else
          {
              printf("benar");
          }
      }
  }
}
