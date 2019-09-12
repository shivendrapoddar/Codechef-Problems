#include <stdio.h>
 
int main()
{
  int c, tc , n, fact = 1;
  scanf("%d",&tc);
  while(tc--) {
   scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("%d\n", fact);
 }
  return 0;
}
