#include<stdio.h>
#include<windows.h>

int main()
{
	int hour,minute,second;
	int delay=1000;//we add a delay of 1000 millisecond and we will use that in function
	printf("Set Time : \n");
	scanf("%d%d%d",&hour,&minute,&second);
	//00--12am and 12 will be pm
	if(hour>12 || minute>60 || second>60)
	{
		printf("Error");
		exit(0);
	}
	while(1)
	{
		second++;
		if(second>59)
		{
			minute++;

			second=0;
		}
		if(minute>59)
		{
			hour++;
			minute=0;
		}
		if(hour>12)
		{
			hour=1;
		
		}
		printf("\n clock: ");
		printf("\n %02d:%02d:%02d",hour,minute,second);
		Sleep(delay);
		system("cls");

	}
}


