/* Task description:
It is a common task to remove leading and trailing spaces from a string. This function is often called trim().

Write a function that removes the spaces from the beginning and from the end of a string (other spaces must stay)!
For example if the original string is "  Hi, what's up?   ", then the new string should be "Hi, what's up?".
The function should take two parameters: a source array (containing the original string) and a destination array (to put the trimmed string into).
You can assume that the destination array is long enough for the resulting string.


Hint: 1) First find (and remember) the first non-space character from the beginning of the string, 2) then find the end of the string, 3) and starting from there find the first non-space character backwards (the last one in the string). These two positions identify the segment of the string to copy. After copying into destination, do not forget to terminate the destination string.

Write a short program, too, that calls this function and demonstrates that it operates correctly!

Modify your function to allocate space for the trimmed string! What is the difference in calling? Why the resulted string still "alive" outside the function? (Do not forget to erase the memory allocation!)

*/

#include <stdio.h>
#include <stdlib.h>

void trim(char *in, char *out)
{
    int i = 0;
    int j = 0;
    int whole = 0;
    int k = 0;
    while (in[whole] != '\0')
    {
        whole++;
    }

    while (in[j] == ' ')
    {
        j++;
    }

    while (in[whole - i - 1] == ' ')
    {
        i++;
    }

    for (k = 0; k < (whole - i - j); k++)
    {
        out[k] = in[k + j];
    }
    out[k] = '\0';
}


char* trimalloc(char *in){
    int i = 0;
    int j = 0;
    int k = 0;
    int whole = 0;
    while (in[whole] != '\0'){
        whole++;
    }

    while(in[j] == ' '){
        j++;
    }

    while(in[whole-i-1] == ' '){
        i++;
    }
    char* news = (char*)malloc((whole-i-j+1)*sizeof(char));
    if (news == NULL) return 0;

    for (k = 0; k < (whole-i-j); k++){
        news[k] = in[k + j];
    }
    news[k] = '\0';
    return news;
    
}


int main()
{
    char arrayor[] = "   if this works    ";
    char arraynew[100];
    
    trim(arrayor, arraynew);
    printf("%s", arraynew);
    printf("something\n");
    char *news = trimalloc(arraynew);
    printf("%s\n", arrayor);
    printf("%s", news);
    printf("something\n");
    free(news);
    return 0;
}