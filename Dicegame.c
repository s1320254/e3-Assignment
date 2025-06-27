#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(NULL));

int dice1 = (rand() % 6)+1;
int dice2 = (rand() % 6)+1;

printf("Die 1: %d\n",dice1);
printf("Die 2: %d\n",dice2);

  if((daice1+dice2) >= 8){
    printf("You won\n");
  } else{
    printf("You lost\n");
  }
return 0;
}
