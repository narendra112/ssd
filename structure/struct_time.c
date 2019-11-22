#include<stdio.h>
struct time
{
	int hours;
	int  minutes;
	int seconds;
};
void difference(struct time start,struct time stop,struct time diff);
void main()
{
	struct time start,stop,diff;
	printf("Enter hours,minutes,seconds respectively\n");
	scanf("%d%d%d",&start.hours,&start.minutes,&start.seconds);
	printf("Enter hours,minutes,seconds respectively\n");
	scanf("%d%d%d",&stop.hours,&stop.minutes,&stop.seconds);
difference(start,stop,diff);
printf("Time difference:%d:%d:%d - ",start.hours,start.minutes,start.seconds);
printf("%d:%d:%d = ",stop.hours,stop.minutes,stop.seconds);
printf("%d:%d:%d",diff.hours,diff.minutes,diff.seconds);
}

void difference(struct time start,struct time stop,struct time diff)
{
diff.hours=stop.hours-start.hours;
diff.minutes=stop.minutes-start.minutes;
diff.seconds=stop.seconds-start.seconds;
}
