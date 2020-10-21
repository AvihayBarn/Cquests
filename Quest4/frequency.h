#ifndef frequency
#define frequency

#define NUM_LETTERS ((int)26)
    //Declerations
    typedef struct TrieNode TrieNode;
    typedef enum {FALSE=0, TRUE=1} boolean;
    TrieNode* NewTrieNode(char letter);
    TrieNode* Insert(TrieNode *Father,char letter);
    boolean HasNoChilds(TrieNode* node);
    void PrintRegular(TrieNode* node,char* word,int WordsLength);
    void PrintReversed(TrieNode* node,char* word,int WordsLength);
    void ReleaseMemory(TrieNode* root);


#endif
