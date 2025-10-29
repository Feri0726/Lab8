/* Task description:
Write a program, that first asks the user the number of real values to read; then it reads the values into a dynamically allocated array. 
At the end the program should print the elements of the array backwards, and release the allocated memory!
*/


#include <stdio.h>
#include <stdlib.h>




int main(){
int num;
printf("Number of space");
scanf("%d", &num);
double *news = (double*)malloc((num)*sizeof(double));
for (int i = 0; i < num; i++){
  scanf("%lf", &news[i]);
}
  
for(int i=num-1; i>=0; i--)
{
  printf("%lf ",news[i]);
}
return 0;
}
