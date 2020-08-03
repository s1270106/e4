#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int i,num,hcount=0,tcount=0;
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
  if(hcount>tcount) printf("You won!\n");
  else printf("You lost!\n");
  return 0;
}
