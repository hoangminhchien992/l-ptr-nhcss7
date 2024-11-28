#include<stdio.h>
int main(){
	int number[5]={1 , 4 , 7 , 8 , 9};	
	for(int i = 0 ; i < 5 ; i++)
	{
		if(number[i]%2==0)
		{
			number[i]+=3;			
		}
		else
		{
			num[i]+=2;			
		}
		printf("%d" , number[i]);
	}
	return 0 ; 
}
