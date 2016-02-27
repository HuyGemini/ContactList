#define MAXLEN 100

typedef struct {
    char *name; //ten
    char *add; //dia chi
    char *email; //email
    char phone[MAXLEN];
}information;

typedef struct Node {
    information data;
    struct Node *Next;
}Node;

typedef struct Node *list;

Node *Insert_toHead(Node *First, information X);
Node *Insert_Middle(Node *Pred, information X);
Node *Insert_toLast(Node *First, information X );
void Delete(Node *Pred);
Node *Delete_Head(Node *First);
void Delete_Last();
int isEmpty(Node *First);
Node *MakeNull(Node *First);
void Print(Node *First);


