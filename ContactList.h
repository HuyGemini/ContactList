
typedef struct information {
    char *name; //ten
    char *add; //dia chi
    char *email; //email
    char phone[MAXLEN];
};

struct Node{
    information data;
    Node *Next;
};

typedef Node *list;

Node *Insert_toHead(Node *First, information X);
