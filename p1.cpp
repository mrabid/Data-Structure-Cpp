struct Node
{
    int data;
    struct node *link;
}*root;

typedef struct Node node;


void insertfirst()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter a data to insert\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=root;
    root=temp;
}

void insertlast()
{
    node *p, *temp;
    p=root;
    temp=(node*)malloc(sizeof(node));
    printf("Enter a data to insert\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void print()
{
    node *p;
    p=root;
    while(p->link!=NULL)
    {
        printf("%d => ",p->data);
        p=p->link;
    }
    printf("%d => NULL",p->data);
}

int main()
{
    root = NULL;

    insertlast();
    insertlast();
    insertlast();
    print();

}


