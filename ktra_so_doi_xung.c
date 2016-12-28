#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>// xai strlen

int string_length(char n[])
{
	int i = 0;
	while (n[i] != '\0')
	{
		i++;
	}		
	return i;
}

bool LaSoDoiXung(char n[])
{
//	printf("n is: %s\n", n );
	int len = string_length(n); // strlen()
//	printf("lennnn = %d\n", len);
	string_length(n);
	for (int i=0; i< len/2; i++)
	{
		//printf("toi day, toi i = %d\n", i);
		if ( n[i] != n[len-1-i] )
			return false;
	}
	
	return true;
}

int main()
{
	char n[25] ;
	printf("nhap n = ");
	scanf("%s",&n);
	if (LaSoDoiXung(n)) 
		printf("%s la so doi xung ",n);
	else
		printf("%s khong phai so doi xung",n);
	getch();
	return 0;
}
