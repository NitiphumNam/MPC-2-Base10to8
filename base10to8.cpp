#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    int result[100];
main()
{
	int number;
	int Bin,left,i=0;
	int temp=0,j=0;
	printf("Put your number:");
	scanf("%d",&number);
	system("cls");
	printf("Your result is:");
	do{
		Bin = number % 8;
		result[j] = Bin;
		left = number / 8;
		number = left;
		temp += 1;
		j++;
	}while(number);
	for(i=temp-1;i>=0;i--)
	{
		printf("%d",result[i]);
	}
}
