#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LINE 256
#define WORD 30

int Get_Line(char s[LINE]){
    char temp;
    int size=0;
    for(int i=0;i<LINE;i++){
      printf("apply a letter \n");
      scanf("%c",&temp);
      s[i]=temp;
      if(s[i]=='\n'){
        size=i+1;
      i=LINE-1;
      }
    }
    return size;
    }
    
int getword(char w[WORD]){
char temp;
    int size=0;
    for(int i=0;i<WORD;i++){
      printf("apply a letter \n");
      scanf("%c",&temp);
      w[i]=temp;
      if(w[i]=='\n' || w[i]=='\t'){
        size=i+1;
      i=WORD-1;
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
  if((strlen(s)-n)!=strlen(t)){
    return 0;
  }
int tindex=0,start,wordlen,count=0;
bool isStart=false;
wordlen=strlen(t)+n;
for(int i=0;i<strlen(s);i++){
  if(s[i]!=t[tindex]){
    count++;
  }
if(s[i]==t[tindex] && !isStart){
   isStart=true;
   start=i;
   tindex++;
}
if(count==n && (i+1)==strlen(s)){
 if((i-start+n)==wordlen){
 return 1;
}
else {
i=start;
tindex=0;
isStart=false;
}
}
}
return 0;
}
void print_line(char* str){
  char* line;
printf("add your text now \n");
scanf("%c",line);
 for (size_t i = 0; i < strlen(str); i++)
 {
 
 }
 
}
