#include <stdio.h>
#include <stdlib.h>
#define LINE 256

void getline(char[] s){
    for(int i=0;i<s.length;i++){
    char temp=*(s+i)
    }
}

int substring(char *str1,char *str2){
  *p=strstr(str1,str2);
    if(p)
    return 1;
    return 0;
}

int similar(char *s,char *t,int n){
int tindex=0,start,end,wordlen,count=0;
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
if(count==n){
 if(i-start+n)==wordlen){
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