#include<stdio.h>
int main()
{
    int i, size, marks[100], elementToSearch, found = 0;

    printf("Enter how many marks you want \n");
    scanf("%d", &size);

    printf("Enter the %d marks for the array separated by space \n", size);
    for(i = 0; i<size; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Enter the element to be search");
    scanf("%d", &elementToSearch);

    for(i = 0; i<size; i++)
    {
        if(elementToSearch == marks[i])
        {
            found++;
            printf("mark %d found in position  %d \n", elementToSearch, i);
        }
    }
    printf("The mark %d is found %d times \n", elementToSearch, found);
    if(found == 0)
        printf("The mark %d is not found \n", elementToSearch);

}



