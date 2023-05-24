#include <stdio.h>  

enum weekdays
{
	Sunday=0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};  

main()  
{  
 enum weekdays w; 
 w=Sunday; 

 int i;
  for(i=0;i<7;i++)
  {
	 printf("%d\n",w+i);  
  }
} 
