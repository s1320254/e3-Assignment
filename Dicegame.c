#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  char name[100];
srand(time(NULL));

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
int dice1 = (rand() % 6)+1;
int dice2 = (rand() % 6)+1;

printf("Die 1: %d\n",dice1);
printf("Die 2: %d\n",dice2);
printf("Total value; %d\n",dice1+dice2);
  if((daice1+dice2) >= 8){
    printf("%s won\n",name);
  } else{
    printf("%s lost\n",name);
  }
return 0;
}
