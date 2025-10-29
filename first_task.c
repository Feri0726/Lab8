/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/


#include <stdio.h>

int main(){
  char array[100];
  int i = 0;
  printf("Give a char");
  scanf("%s", array);
  while (array[i] != '\0'){
    printf("%c\n", array[i]);
    i++;
  }
  



  return 0;
}
