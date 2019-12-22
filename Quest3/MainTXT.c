#include <stdio.h>
#include <stdbool.h>
#include "txtfind.h"
#define WORD 30

int main(){
    char Operation;
    char word[WORD];
    getword(word);
    scanf(" %c\n",&Operation);
    if (Operation=='a')
    {
       print_line(word);
    }
    if(Operation=='b'){
        print_similar_words(word);
    }
    return 0;
}