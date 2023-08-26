#include <stdio.h>
int main(int argc, char *argv[])
{

int ages[] = {34, 32, 37, 34, 36};
char *names[] =  {"Erdey", "Tigist", "Shewit", "Awot", "Berihu"};

//safety get the size of ages
int count = sizeof(ages) / sizeof(int);

int i = 0;

for(i = 0; i<count; i++)
{
printf("%s has %d years alive. \n", names[i], ages[i]);
}
printf("-------\n");

//setup the pointers to the start of the arrays
int *cur_age = ages;
char **cur_name = names;

//second way using pointers
for(i = 0; i<count; i++)
{
printf("%s is %d years old. \n ", *(cur_name + i), *(cur_age + i));
}
}


