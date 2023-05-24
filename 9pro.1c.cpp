#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} j1,j2, result;

main()
 {
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &j1.feet);
   printf("Enter inch: ");
   scanf("%f", &j1.inch);

   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &j2.feet);
   printf("Enter inch: ");
   scanf("%f", &j2.inch);

   result.feet = j1.feet + j2.feet;
   result.inch = j1.inch + j2.inch;

   while (result.inch >= 12.0) 
   {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
}
