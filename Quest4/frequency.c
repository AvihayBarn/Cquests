#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "frequency.h"
#define NUM_LETTERS ((int)26)
    //The TrieNode struct
    typedef struct TrieNode{
        char letter;
        long unsigned int count;
        boolean InsertedAlready[NUM_LETTERS];
        struct TrieNode* children[NUM_LETTERS];
        }TrieNode;
    //TrieNode constructor
    TrieNode* NewTrieNode(char letter){
        TrieNode *Child = (TrieNode*)malloc(sizeof(TrieNode));
        Child->count=0;
        Child->letter=letter;
        for(int i=0;i<NUM_LETTERS;i++){
        Child->InsertedAlready[i]=FALSE;
    	}
	return Child;
    }
    //Creating a new child to node
    TrieNode* Insert(TrieNode *Father,char letter){
        int child=letter-'a';
        if(Father->InsertedAlready[child]==TRUE) return Father->children[child];
        else{
        TrieNode *Child=NewTrieNode(letter);
        Father->InsertedAlready[child]=TRUE;
        Father->children[child]=Child;
        return Child;
        } 
    }
     //Checks if the node has no childs
    boolean HasNoChilds(TrieNode* node){
        for(int i=0;i<NUM_LETTERS;i++){
            if(node->InsertedAlready[i]==TRUE) return FALSE;
        }
         return TRUE;
        }
    //Prints the Trie from a to z in order
    void PrintRegular(TrieNode* root, char *str, int words){
	if (HasNoChilds(root)){
		str[words] = '\0';
		printf("%s\t%ld\n", str, root->count);
		return;
	}
	if (root->count > 0){
		str[words] = '\0';
		printf("%s\t%ld\n", str, root->count);
	}
	int i;
	for (i=0; i<NUM_LETTERS; i++){
		if (root->InsertedAlready[i]==TRUE){
			str[words] = root->children[i]->letter;
			PrintRegular(root->children[i], str, words+1);
		}
	}
}
    //prints the Trie from z to a in reversed order
   void PrintReversed(TrieNode* root, char *str, int words){
	if (HasNoChilds(root)){
		str[words] = '\0';
		printf("%s\t%ld\n", str, root->count);
		return;
	}
	if (root->count > 0){
		str[words] = '\0';
		printf("%s\t%ld\n", str, root->count);
	}
	int i;
	for (i=NUM_LETTERS-1; i>=0; i--){
		if (root->InsertedAlready[i]==TRUE){
			str[words] = root->children[i]->letter;
			PrintReversed(root->children[i], str, words+1);
		}
	}
}
    //Release all the memory we used to build the Trie
    void ReleaseMemory(TrieNode* root){
        if(root==NULL) return;
        if(HasNoChilds(root)){
	 free(root); 
	  return;
	}
        else{
            for(int i=0;i<NUM_LETTERS;i++){
                if(root->InsertedAlready[i]){
                    ReleaseMemory(root->children[i]);
                }
            }
            free(root);
        }
    }
    int main(int argc,char *argv[]){

        char Buffer=0;
        TrieNode* Root=NewTrieNode('\0');
        //A temporary Node that represent the current node we check
        TrieNode* CurrentNode=Root;
	//a loop that stops when all the input finished
        while((Buffer=getc(stdin))!=EOF){
            if(Buffer<='z'&&Buffer>='a'){
                CurrentNode=Insert(CurrentNode,Buffer);
            }
            else if(Buffer<='Z'&&Buffer>='A'){
                CurrentNode=Insert(CurrentNode,tolower(Buffer));
            }
            else if(Buffer==' '||Buffer=='\n'){
                CurrentNode->count++;
                CurrentNode=Root;
            }
        }
        /*A large array to include all the words to print in the tree*/
        char WordsLength[1500];
        /*R means Regular*/
        char Filter='R';
        if(argc>1) Filter=*argv[1];
        if(Filter=='r') PrintReversed(Root,WordsLength,0);
        else PrintRegular(Root,WordsLength,0);
        ReleaseMemory(Root);
        return 0;


    }
         

     
     
 
