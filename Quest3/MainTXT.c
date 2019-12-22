#include <stdio.h>
#include <stdbool.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30

int main(){
    char Fromtext,Operation;
    char word[WORD];
    int count=0;
    while((Fromtext=getc(stdin))!=' '){
        word[count]=Fromtext;
        count++;
    }
    word[count]='\0';
    while((Fromtext=getc(stdin))!= '\n'){
        if(Fromtext=='a') Operation='a';
        if(Fromtext=='b') Operation='b';
    }
    while((Fromtext=getc(stdin))!='\n'){
    }
    //count=;
    if(Operation=='a'){
        print_line(word);
        }

        if(Operation=='b'){
            print_similar_words(word);
        }

       

    
    return 0;
}