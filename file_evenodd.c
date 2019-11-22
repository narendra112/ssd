#include<stdio.h>
#include<stdlib.h>
int prime(const int num);
int even(const int num);
int main()
{
	int num,opened;
	FILE *oddf;
	FILE *evenf;
	FILE *primef;
	FILE *openf;
	openf=fopen("/home/narendra/Even_odd.txt","r");
	oddf=fopen("/home/narendra/Even.txt","w");
	evenf=fopen("/home/narendra/odd.txt","w");
	primef=fopen("/home/narendra/prime.txt","w");
	if(openf==NULL || oddf==NULL || evenf==NULL || primef==NULL)
		printf("Error\n");
	printf("File opened successfully,reading integers from file\n");
	do
	{
		opened=fscanf(openf,"%d",&num);
		if(prime(num))
			fprintf(primef,"%d\n",num);
		else if(even(num))
			fprintf(evenf,"%d\n",num);
		else
			fprintf(oddf,"%d\n",num);
	}while(opened!=-1);
	fclose(openf);
	fclose(evenf);
	fclose(oddf);
	fclose(primef);
}
int prime(const int num)
{
	int i;
	if(num<0)
	return 0;
	for(i=2;i=num/2;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
int even(const int num)
{
	return (!(num & 1));
}
