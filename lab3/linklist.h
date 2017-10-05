typedef struct DataNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DateNode *next;
} tDataNode;

tDataNode* FindCmd(tDataNode * head, char * cmd);

int showAllCmd(tDataNode * head);
