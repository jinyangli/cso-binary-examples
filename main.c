#include <stdio.h>

typedef struct node {
    long id;
    char *name;
    struct node *next;
} node;

void  mystery1(int *arr, int n);
int   mystery2(char *s);
char *mystery3(node *n, long id);

int main(int argc, char **argv)
{
    /* Puzzle 1: increment every element of an int array */
    int arr[5] = {10, 20, 30, 40, 50};
    mystery1(arr, 5);
    printf("mystery1: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* Puzzle 2: length of a C string */
    char *s = "hello, world";
    printf("mystery2(\"%s\") = %d\n", s, mystery2(s));

    /* Puzzle 3: look up a name by id in a linked list */
    node c = {3, "carol", NULL};
    node b = {2, "bob",   &c};
    node a = {1, "alice", &b};
    char *name = mystery3(&a, 2);
    printf("mystery3(list, 2) = %s\n", name ? name : "NULL");
    name = mystery3(&a, 7);
    printf("mystery3(list, 7) = %s\n", name ? name : "NULL");

    return 0;
}
