//
// Created by user on 2022-01-18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int num, need;
    int temp = 0;
    scanf("%d %d", &num,&need);
    int *trees = calloc(num, sizeof(int));
    char line2[100];
    for(int i=0; i<num;i++){
        scanf("%d", &trees[i]);
    }
    for(int i=0; i<num-1; i++){
        for(int j=0; j<num-1-i;j++){
            if(trees[j]>trees[j+1]){
                temp = trees[j];
                trees[j] = trees[j+1];
                trees[j+1] = temp;
            }
        }
    }
    for(int i=0; i<num; i++){
        printf("%d\n", trees[i]);
    }
}