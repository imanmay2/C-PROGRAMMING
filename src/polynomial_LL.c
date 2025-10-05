#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};

struct Node *createNode(int coeff, int pow)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

void addLast(struct Node **head, int coeff, int pow)
{
    struct Node *newNode = createNode(coeff, pow);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display_poly(struct Node **head)
{
    struct Node *temp = *head;
    while (temp != NULL)
    {
        printf("%dx^%d ", temp->coeff, temp->pow);
        temp = temp->next;
    }
}

void addPoly(struct Node *poly1, struct Node *poly2, struct Node **poly)
{
    while (poly1 != NULL && poly2 != NULL)
    {
        if ((poly1)->pow > (poly2)->pow)
        {
            addLast(poly, (poly1)->coeff, (poly1)->pow);
            poly1 = (poly1)->next;
        }
        else if ((poly1)->pow < (poly2)->pow)
        {
            addLast(poly, (poly2)->coeff, (poly2)->pow);
            poly2 = (poly2)->next;
        }
        else
        {
            // equal case- > additon of the polynomial
            addLast(poly, (poly1)->coeff + (poly2)->coeff, (poly1)->pow);
            poly1 = (poly1)->next;
            poly2 = (poly2)->next;
        }
    }

    while (poly1 != NULL)
    {
        addLast(poly, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }

    while (poly2 != NULL)
    {
        addLast(poly, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }
}


void multiply(struct Node* poly1,struct Node* poly2,struct Node** poly){
    struct Node* p1=poly1;

    while(p1!=NULL){
        struct Node* p2=poly2;
        while(p2!=NULL){
            addLast(poly,p1->coeff * p2->coeff,p1->pow+p2->pow);
            p2=p2->next;
        }
        p1=p1->next;
    }
}

int main()
{
    struct Node *poly = NULL;
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;
    struct Node* polyM=NULL;

    addLast(&poly1, -9, 5);
    addLast(&poly1, 7, 3);
    addLast(&poly1, -4, 2);
    addLast(&poly1, 8, 0);

    addLast(&poly2, 7, 4);
    addLast(&poly2, -17, 3);
    addLast(&poly2, -8, 2);

    printf("Polynomial 1 is as follows : \n");
    display_poly(&poly1);
    printf("\n");
    printf("Polynomial 2 is as follows : \n");
    display_poly(&poly2);
    printf("\n");

    addPoly(poly1, poly2, &poly);

    printf("The addition of the polynomials are :\n");
    display_poly(&poly);

    multiply(poly1,poly2,&polyM);
    printf("The Multiplication of the polynomials are :\n");
    display_poly(&polyM);
}