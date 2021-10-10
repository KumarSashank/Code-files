#include <stdio.h>
int main()
{
   int array[100], j, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &j);

   if (j >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = j - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Resultant array: ");

      for (i = 0; i < n - 1; i++)
         printf("%d ", array[i]);
   }

   return 0;
}