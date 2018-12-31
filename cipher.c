#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main(){

	int a,b,c,d,key;



	char msg[50],cipher[50];
	printf("enter the string\n");
	scanf("%s",msg);
	printf("enter the key\n");
	scanf("%d",&key);
	printf("cipher text is: ");
	for(int i=0;i<strlen(msg);i++){
		msg[i]=toupper(msg[i]);
		if((int)(msg[i]+key)<91)
		{	printf("%c",(int)(msg[i]+key));
		cipher[i]=(msg[i]+key);
		}
		else
		{printf("%c",(int)(msg[i]+key-26));
		cipher[i]=(msg[i]+key-26);
		}

	}
	printf("\nDecoded text is: ");
		for(int i=0;i<strlen(msg);i++){

		if((int)(cipher[i]-key)>64)
			printf("%c",(int)(cipher[i]-key));
		else
			printf("%c",(int)(cipher[i]-key+26));
	}
getch();

}
