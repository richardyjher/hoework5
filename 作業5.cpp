#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int h,m,s;
  
  printf("��J�p��");
  scanf("%d",&h);
  printf("��J����");
  scanf("%d",&m);
  printf("��J��");
  scanf("%d",&s);
  printf("%d��:%d��:%d��\n",h,m,s); 
  int hx,mx,sx;
  
  printf("��J�p��");
  scanf("%d",&hx);
  printf("��J����");
  scanf("%d",&mx);
  printf("��J��");
  scanf("%d",&sx);
  printf("%d��:%d��:%d��\n",hx,mx,sx);
  int h0 = (h - hx) * 3600;
  int m0 = (m - mx) * 60 ;
  int s0 = (s - sx);
  int t = h0 + m0 + s0;
  printf("��Ʈt��:%d",t);    
  system("PAUSE"); 
  return 0;
  } 
