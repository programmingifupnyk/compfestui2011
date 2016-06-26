#include <cstdio>
using namespace std;

int main()
{
  int T;
  long int N, M;

  scanf("%d",&T);
  while(T--)
  {
      scanf("%d %d",&N,&M);
      if((N + M)%2 == 0)
      {
          printf("Lhompa");
      }else
      {
          printf("Sakla");
      }
  }
}
