#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,num,hcount=0,tcount=0;
  char str[10];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  srand((unsigned int)time(NULL));
  printf("Tossing a coin...\n");
  for(i=0;i<3;i++){
    num=rand()%2;
    printf("Round %d: ",i+1);
    if(num==0){
      printf("Heads\n");
      hcount++;
    }
    else{
      printf("Tails\n");
      tcount++;
    }
  }
  printf("Heads: %d, Tails: %d\n",hcount,tcount);
  if(hcount>tcount) printf("%s won!\n",str);
  else printf("%s lost!\n",str);
  return 0;
}
