#include<stdio.h>
#include<string.h>
int main (){
    int t;
    char s[3];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        if(s[0]=='a'){
            printf("%d\n",s[1]-'a');
        }
        if(s[0]=='b'){
            if(s[1]<'b'){
                printf("%d\n",26+(s[1]-'a'));
            }
            else{
                printf("%d\n",25+(s[1]-'a'));
            }
        }
        if(s[0]=='c'){
            if(s[1]<'c'){
                printf("%d\n",51+(s[1]-'a'));
            }
            else{
                printf("%d\n",50+(s[1]-'a'));
            }
        }
        if(s[0]=='d'){
            if(s[1]<'d'){
                printf("%d\n",76+(s[1]-'a'));
            }
            else{
                printf("%d\n",75+(s[1]-'a'));
            }
        }
        if(s[0]=='e'){
            if(s[1]<'e'){
                printf("%d\n",101+(s[1]-'a'));
            }
            else{
                printf("%d\n",100+(s[1]-'a'));
            }
        }
        if(s[0]=='f'){
            if(s[1]<'f'){
                printf("%d\n",126+(s[1]-'a'));
            }
            else{
                printf("%d\n",125+(s[1]-'a'));
            }
        }
        if(s[0]=='g'){
            if(s[1]<'g'){
                printf("%d\n",151+(s[1]-'a'));
            }
            else{
                printf("%d\n",150+(s[1]-'a'));
            }
        }
        if(s[0]=='h'){
            if(s[1]<'h'){
                printf("%d\n",176+(s[1]-'a'));
            }
            else{
                printf("%d\n",175+(s[1]-'a'));
            }
        }
        if(s[0]=='i'){
            if(s[1]<'i'){
                printf("%d\n",201+(s[1]-'a'));
            }
            else{
                printf("%d\n",200+(s[1]-'a'));
            }
        }
        if(s[0]=='j'){
            if(s[1]<'j'){
                printf("%d\n",226+(s[1]-'a'));
            }
            else{
                printf("%d\n",225+(s[1]-'a'));
            }
        }
        if(s[0]=='k'){
            if(s[1]<'k'){
                printf("%d\n",251+(s[1]-'a'));
            }
            else{
                printf("%d\n",250+(s[1]-'a'));
            }
        }
        if(s[0]=='l'){
            if(s[1]<'l'){
                printf("%d\n",276+(s[1]-'a'));
            }
            else{
                printf("%d\n",275+(s[1]-'a'));
            }
        }
        if(s[0]=='m'){
            if(s[1]<'m'){
                printf("%d\n",301+(s[1]-'a'));
            }
            else{
                printf("%d\n",300+(s[1]-'a'));
            }
        }
        if(s[0]=='n'){
            if(s[1]<'n'){
                printf("%d\n",326+(s[1]-'a'));
            }
            else{
                printf("%d\n",325+(s[1]-'a'));
            }
        }
        if(s[0]=='o'){
            if(s[1]<'o'){
                printf("%d\n",351+(s[1]-'a'));
            }
            else{
                printf("%d\n",350+(s[1]-'a'));
            }
        }
        if(s[0]=='p'){
            if(s[1]<'p'){
                printf("%d\n",376+(s[1]-'a'));
            }
            else{
                printf("%d\n",375+(s[1]-'a'));
            }
        }
        if(s[0]=='q'){
            if(s[1]<'q'){
                printf("%d\n",401+(s[1]-'a'));
            }
            else{
                printf("%d\n",400+(s[1]-'a'));
            }
        }
        if(s[0]=='r'){
            if(s[1]<'r'){
                printf("%d\n",426+(s[1]-'a'));
            }
            else{
                printf("%d\n",425+(s[1]-'a'));
            }
        }
        if(s[0]=='s'){
            if(s[1]<'s'){
                printf("%d\n",451+(s[1]-'a'));
            }
            else{
                printf("%d\n",450+(s[1]-'a'));
            }
        }
        if(s[0]=='t'){
            if(s[1]<'t'){
                printf("%d\n",476+(s[1]-'a'));
            }
            else{
                printf("%d\n",475+(s[1]-'a'));
            }
        }
        if(s[0]=='u'){
            if(s[1]<'u'){
                printf("%d\n",501+(s[1]-'a'));
            }
            else{
                printf("%d\n",500+(s[1]-'a'));
            }
        } 
        if(s[0]=='v'){
            if(s[1]<'v'){
                printf("%d\n",526+(s[1]-'a'));
            }
            else{
                printf("%d\n",525+(s[1]-'a'));
            }
        }
        if(s[0]=='w'){
            if(s[1]<'w'){
                printf("%d\n",551+(s[1]-'a'));
            }
            else{
                printf("%d\n",550+(s[1]-'a'));
            }
        }
        if(s[0]=='x'){
            if(s[1]<'x'){
                printf("%d\n",576+(s[1]-'a'));
            }
            else{
                printf("%d\n",575+(s[1]-'a'));
            }
        }
        if(s[0]=='y'){
            if(s[1]<'y'){
                printf("%d\n",601+(s[1]-'a'));
            }
            else{
                printf("%d\n",600+(s[1]-'a'));
            }
        }
        if(s[0]=='z'){
            printf("%d\n",626+(s[1]-'a'));
        }
    }
}