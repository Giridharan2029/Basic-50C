#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fib(int n){
    int f=0;
    int l=1;
    int ans;
    printf("%d %d ",f,l);
    for(int i = 2; i < n;i++){
        ans=f+l;
        f = l;
        l = ans;
        printf("%d ",l);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    fib(n);
}
