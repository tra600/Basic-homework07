#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int Endnumber,i=1,sum=0;

	do

	{

		printf("----秀出1+2+....+Endnumber的總和----\Endnumber");

		printf("請輸入Endnumber值為：");

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
