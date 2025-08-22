#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int id;
    char name[20];
    float marks;
    struct Student *next;
};
void insertNode(struct Student *s)
{
    printf("Enter the Student id \n");
    scanf("%d", &s->id);
    printf("Enter the Student name \n");
    getchar();
    scanf("%s", s->name);
    printf("Enter the Student marks \n");
    scanf("%f", &s->marks);
    s->next = NULL;
}

struct Student *create(int size)
{
    struct Student *start = NULL;
    struct Student *itr = NULL;
    int i = 0;
    if (size <= 0)
        return start;
    while (i < size)
    {
        if (i == 0)
        {
            // malloc is a function used ato create a dynamic memory location of size passes
            // and returns a void type address
            start = (struct Student *)malloc(sizeof(struct Student));
            insertNode(start);
            itr = start;
            i++;
        }
        else
        {
            itr->next = (struct Student *)malloc(sizeof(struct Student));
            itr = itr->next;
            insertNode(itr);

            i++;
        }
    }
    return start;
}
void display(struct Student *start)
{
    struct Student *itr = start;
    while (itr != NULL)
    {
        printf("The Student id is %d \n", itr->id);
        printf("The Student name is %s \n", itr->name);
        printf("The Student marks is %f \n", itr->marks);
        itr = itr->next;
    }
}

int main()
{
    struct Student *start = NULL;
    int size;
    printf("Enter the Size of Linked List To be create\n");
    scanf("%d", &size);
    start = create(size);
    display(start);
    return 0;
}