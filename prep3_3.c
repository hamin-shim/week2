//
// Created by user on 2022-01-19.
//

#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key){
    int i = 0;
    a[n] = key;
    while(1){
        //if (i==n) return -1;
        if(a[i]==key) break;
        i++;
    }
    return i == n ? -1 : i;
    // 삼항연산자: (조건문) ? (참이면 실행될 코드) : (거짓이면 실행될 코드)
}

int main(){
    int num, key, idx;
    scanf("%d", &num);
    int *x = calloc(num+1, sizeof (int));
    for (int i=0; i<num;i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &key);
    idx = search(x, num, key);
    if(idx==-1) printf("Fail");
    else printf("array[%d] === %d", idx, key);
}