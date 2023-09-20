#include <stdio.h>
#define size 5
typedef struct student
{
	char name[30];
	float test1;
	char grade;
}Student;
void print_info(Student s)
{
	//int i;
	//for(i = 0; i < size; i++)
	//if (s)
		printf("%s %f %c \n", s.name, s.test1, s.grade);
}
int main (void)
{
	Student student1 = {"Erdey", 95.6, 'A'};
	Student student2 = {"Merhawi", 87, 'B'};
	
	print_info(student1);
	print_info(student2);

	return 0;
}
