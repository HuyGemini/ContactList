#define MAXLEN 100

typedef struct {
    char name[MAXLEN]; //ten
    char add[MAXLEN]; //dia chi
    char email[MAXLEN]; //email
    char phone[MAXLEN];
}information;

typedef struct Node Node;

struct Node {
    information data;
    Node *Next;
};

void help();
Node *Insert_toHead(Node *First, information X);
Node *Insert_Middle(Node *Pred, information X);
Node *Insert_toLast(Node *First, information X );
void Delete(Node *Pred);
Node *Delete_Head(Node *First);
void Delete_Last();
int isEmpty(Node *First);
Node *MakeNull(Node *First);
void Print(Node *First);

Node *CreateContact(Node *First);

