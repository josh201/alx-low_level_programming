#include<stdio.h>

int main(void)

/*let make use of the scan f to read from standard input*/
{
	char f,m,l;
	int age;
	
	printf("Enter your initials, followed by your age:");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("my initials are, %c %c %c and i am %d years old\n",f,m,l,age);
	return(0);
}




/*
{
	printf("My are Initials are: %c%c%c and my age is %d,\n",'J','O','A',28);
	return(0);
}*/
