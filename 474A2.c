#include<stdio.h>
#include<string.h>
int main(){
    char c;
    char s[101];
    scanf("%c",&c);
    scanf("%s",&s);
    int l=strlen(s);
  
    if(c=='R'){
        for(int i=0;i<l;i++){
            if(s[i]=='w'){
                s[i]='q';
            }
            if(s[i]=='e'){
                s[i]='w';
            }
            if(s[i]=='r'){
                s[i]='e';
            }
            if(s[i]=='t'){
                s[i]='r';
            }
            if(s[i]=='y'){
                s[i]='t';
            }
            if(s[i]=='u'){
                s[i]='y';
            }
            if(s[i]=='i'){
                s[i]='u';
            }
            if(s[i]=='o'){
                s[i]='i';
            }
            if(s[i]=='p'){
                s[i]='o';
            }
            if(s[i]=='s'){
                s[i]='a';
            }
            if(s[i]=='d'){
                s[i]='s';
            }
            if(s[i]=='f'){
                s[i]='d';
            }
            if(s[i]=='g'){
                s[i]='f';
            }
            if(s[i]=='h'){
                s[i]='g';
            }
            if(s[i]=='j'){
                s[i]='h';
            }
            if(s[i]=='k'){
                s[i]='j';
            }
            if(s[i]=='l'){
                s[i]='k';
            }
            if(s[i]==';'){
                s[i]='l';
            }
            if(s[i]=='x'){
                s[i]='z';
            }
            if(s[i]=='c'){
                s[i]='x';
            }
            if(s[i]=='v'){
                s[i]='c';
            }
            if(s[i]=='b'){
                s[i]='v';
            }
            if(s[i]=='n'){
                s[i]='b';
            }
            if(s[i]=='m'){
                s[i]='n';
            }
            if(s[i]==','){
                s[i]='m';
            }
            if(s[i]=='.'){
                s[i]=',';
            }
            if(s[i]=='/'){
                s[i]='.';
            }
        }
    }
      if(c=='L'){
        for(int i=0;i<l;i++){
            if(s[i]=='.'){
                s[i]='/';
            }
            if(s[i]==','){
                s[i]='.';
            }
            if(s[i]=='m'){
                s[i]=',';
            }
            if(s[i]=='n'){
                s[i]='m';
            }
            if(s[i]=='b'){
                s[i]='n';
            }
            if(s[i]=='v'){
                s[i]='b';
            }
            if(s[i]=='c'){
                s[i]='v';
            }
            if(s[i]=='x'){
                s[i]='c';
            }
            if(s[i]=='z'){
                s[i]='x';
            }
            if(s[i]=='l'){
                s[i]=';';
            }
            if(s[i]=='k'){
                s[i]='l';
            }
            if(s[i]=='j'){
                s[i]='k';
            }
            if(s[i]=='h'){
                s[i]='j';
            }
            if(s[i]=='g'){
                s[i]='h';
            }
            if(s[i]=='f'){
                s[i]='g';
            }
            if(s[i]=='d'){
                s[i]='f';
            }
            if(s[i]=='s'){
                s[i]='d';
            }
            if(s[i]=='a'){
                s[i]='s';
            }
            if(s[i]=='o'){
                s[i]='p';
            }
            if(s[i]=='i'){
                s[i]='o';
            }
            if(s[i]=='u'){
                s[i]='i';
            }
            if(s[i]=='y'){
                s[i]='u';
            }
            if(s[i]=='t'){
                s[i]='y';
            }
            if(s[i]=='r'){
                s[i]='t';
            }
            if(s[i]=='e'){
                s[i]='r';
            }
            if(s[i]=='w'){
                s[i]='e';
            }
            if(s[i]=='q'){
                s[i]='w';
            }
        }
    }
    
    printf("%s\n",s);
    return 0;
}