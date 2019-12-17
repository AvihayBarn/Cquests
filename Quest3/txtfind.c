#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LINE 256

int Get_Line(char s[LINE]){
    char temp;
    int size=0;
    for(int i=0;i<LINE;i++){
      printf("apply a letter \n");
      scanf("%c",&temp);
      s[i]=temp;
      if(s[i-1]=='/' && s[i]=='n'){
        size=i+1;
      break;
      }
    }
    return size;
    }


int substring(char *str1,char *str2){
    char *p=strstr(str1,str2);
    if(p)
    return 1;
    return 0;
}

int similar(char *s,char *t,int n){
int tindex=0,start,end,wordlen,count=0;
bool isStart=false;
wordlen=sizeof(t)+n;
for(int i=0;i<sizeof(s);i++){
  if(s[i]!=t[tindex]){
    count++;
  }
if(s[i]==t[tindex] && !isStart){
   isStart=true;
   start=i;
   tindex++;
}
if(count==n){
 if((i-start+n)==wordlen){
 return 1;
}
else 
count=0;
i=start;
tindex=0;
isStart=false;
}
}
return 0;
}
void print_line(char* str){

}