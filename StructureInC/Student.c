/*Create the Strcture Of Student having Three Information
1. Student id
2. Student name
3. student marks
and create an Array to hold 10 information
*/
#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct Student student[3];
    /* Input All Student Information */
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Student id \n");
        scanf("%d", &student[i].id);
        printf("Enter the Student name \n");
        getchar();
        scanf("%s", student[i].name);

        printf("Enter the Student marks \n");
        scanf("%f", &student[i].marks);
    }
    /* Print All Student Information */
    for (int i = 0; i < 3; i++)
    {
        printf("The Student id is %d \n", student[i].id);
        printf("The Student name is %s \n", student[i].name);
        printf("The Student marks is %f \n", student[i].marks);
    }
    return 0;
}
