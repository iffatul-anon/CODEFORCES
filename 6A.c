#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (a+c>d && a+d>c && c+d>a)|| (b+c>d && b+d>c && c+d>b)){
        printf("TRIANGLE\n");
    }
    else if(a+b==c || a+b==d || a+c==b || a+c==d || a+d==b || a+d==c || b+c==a || b+c==d || b+d==a || b+d==c || c+d==a || c+d==b){
        printf("SEGMENT\n");
    }
    else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}