#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(NULL));

int dice1 = (rand() % 6)+1;
int dice2 = (rand() % 6)+1;

printf("Die 1: %d\n",dice1);
printf("Die 2: %d\n",dice2);

return 0;
}
