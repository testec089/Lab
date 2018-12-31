#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N strlen(g)
char t[128], cs[128], g[]="11010";
int a, e, c;
void xor() {
 for(c=1;c<N;c++) cs[c]=((cs[c]==g[c])?'0':'1');
}

void crc() {
 for(e=0;e<N;e++) cs[e]=t[e];
 do {
 if(cs[0]=='1') xor();
 for(c=0;c<N-1;c++) cs[c]=cs[c+1];
 cs[c]=t[e++];
 }while(e<=a+N-1);
}
void main() {
 //rscr();
 printf("\nEnter poly : "); scanf("%s",t);
 printf("\nGenerating Polynomial is : %s",g);
 a=strlen(t);
 for(e=a;e<a+N-1;e++) t[e]='0';
 printf("\nModified t[u] is : %s",t);
 crc();
 printf("\nChecksum is : %s",cs);
 for(e=a;e<a+N-1;e++) t[e]=cs[e-a];
 printf("\nFinal Codeword is : %s",t);



 getch();
}
