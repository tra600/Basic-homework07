#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int Endnumber,i=1,sum=0;

	do

	{

		printf("----�q�X1+2+....+Endnumber���`�M----\Endnumber");

		printf("�п�JEndnumber�Ȭ��G");

		scanf("%d",&Endnumber);

	}

	while (Endnumber<=0);

	do 

	sum+=i++;

	while (i <= Endnumber);

	printf("1+2+...+%d=%d\Endnumber",Endnumber,sum);

	system("pause"); 

	return 0; 

	

}
