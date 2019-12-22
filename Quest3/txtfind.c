#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "txtfind.h"

#define LINE 256
#define WORD 30

int Get_Line(char s[]){
    char temp;
    int size=0;
    for(size_t i=0;i<LINE;i++){
      scanf("%c",&temp);
      s[i]=temp;
      if(temp=='\n' || temp=='\0'){
        size=i;
        s[i]='\0';
        i=LINE-1;
      }
    }
    return size;
    }
    
int getword(char w[]){
char temp;
    int size=0;
    for(int i=0;i<WORD;i++){
      scanf("%c",&temp);
      if(temp!='\n' || temp!='\t' || temp!='\0')
      w[i]=temp;
      if(temp=='\n' || temp=='\t' || temp=='\0'){
        size=i;
      i=WORD-1;
      }
    }
    w[size]='\0';
    return size;
}


int substring(char *str1,char *str2){
    char *p;
    p=strstr(str1,str2);
    if(p){
    return 1;
    }
    return 0;
}

int similar(char *s, char *t, int n)
{
  int Ssize = StrLength(s);
  int Tsize = StrLength(t);
  if ((Ssize - n) != Tsize)
  {
    return 0;
  }
  int tindex = 0, count = 0;

  for (size_t i = 0; i <= Ssize; i++)
  {
    if (s[i] != t[tindex])
    {
      count++;
    }
    if (s[i] == t[tindex])
    {
      tindex++;
    }
    if (count == n && (i + 1) == Ssize && tindex == Tsize)
    {
      return 1;
    }
    if (count > n)
    {
      return 0;
    }
  }
  return 0;
}

void print_line(char* str){
  char line[LINE];
  int print=0;
 for (size_t i = 0; i <LINE; i++){
      print=Get_Line(line);
      if(print==0){
        break;
      }
      if(substring(line,str)==1){
        printf("%s \n",line);
        }
        line[0]='\0';
      }
   }

 void print_similar_words(char *str){
       int print=0;
       char newC[WORD];
 for (size_t i = 0; i <LINE*LINE; i++){
      print=getword(newC);
      if(print==0){
        break;
      }
      if(similar(newC,str,1)||similar(newC,str,0)){
        printf("%s \n",newC);
        }
        newC[0]='\0';
      }
   }

   int StrLength(char *str){
     int i=0;
     while(str[i]!='\0'){
       i++;
     }
     return i;
   }
