#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int h,m,s;
  
  printf("輸入小時");
  scanf("%d",&h);
  printf("輸入分鐘");
  scanf("%d",&m);
  printf("輸入秒");
  scanf("%d",&s);
  printf("%d時:%d分:%d秒\n",h,m,s); 
  int hx,mx,sx;
  
  printf("輸入小時");
  scanf("%d",&hx);
  printf("輸入分鐘");
  scanf("%d",&mx);
  printf("輸入秒");
  scanf("%d",&sx);
  printf("%d時:%d分:%d秒\n",hx,mx,sx);
  int h0 = (h - hx) * 3600;
  int m0 = (m - mx) * 60 ;
  int s0 = (s - sx);
  int t = h0 + m0 + s0;
  printf("秒數差為:%d",t);    
  system("PAUSE"); 
  return 0;
  } 
