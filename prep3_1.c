//
// Created by user on 2022-01-19.
//

#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key){
    int i = 0;
    while(1){
        if (i==n) return -1;
        if(a[i]==key) return i;
        i++;
    }
}

int main(){
    int num, key, idx;
    scanf("%d", &num);
    int *x = calloc(num, sizeof (int));
    for (int i=0; i<num;i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &key);
    idx = search(x, num, key);
    if(idx==-1) printf("Fail");
    else printf("array[%d] === %d", idx, key);
}