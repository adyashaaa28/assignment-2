//5. Find the output of the following snippets:
/*a. char ****k;
i) k is a pointer to a pointer to a pointer to a char
ii) k is a pointer to a pointer to a pointer to a pointer to a char
iii) k is a pointer to a char pointer
iv) k is a pointer to a pointer to a char
b. void main()
{
int k = 5;
int *p = &k;
int **m = &p;
**m = 6;
printf("%d\n", k);
}
i) 7
ii) 4
iii) 6
iv) Error */
//Answer of a is : ii) k is a pointer to a pointer to a pointer to a pointer to a char is incorrect syntax since it has more asterisks than pointers to char.

//Answer of b : 
#include<stdio.h>
 void main()
{
int k = 5;
int *p = &k;
int **m = &p;
**m = 6;
printf("%d\n", k);
}
