#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int flag=0;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]==a[k]){
                    flag=1;
                    goto anon;
                }
            }
        }
        anon:
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}