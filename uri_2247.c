#include <stdio.h>
 
int main() {
 
     int n, tot_j, tot_z, dep_j, dep_z, tt=1, i;

      scanf("%d", &n);

      while (n > 0)
    {
      tot_j = 0;

      tot_z = 0;

      printf("Teste %d\n", tt++);

      for (i = 0; i < n; i++)
	{
	  scanf("%d %d", &dep_j, &dep_z);

	  tot_j += dep_j;

	  tot_z += dep_z;

	  printf("%d\n", tot_j - tot_z);
	}

      printf("\n");

      scanf("%d", &n);

    }
 
    return 0;
}