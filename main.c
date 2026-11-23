#include <stdio.h>

int main(void)
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("   STUDENT PRODUCTIVITY TRACKER\n");
        printf("====================================\n");
        printf("1. Task Manager\n");
        printf("2. Exam Tracker\n");
        printf("3. Study Planner\n");
        printf("4. View Progress Report\n");
        printf("0. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input. Please enter a number.\n");

            while (getchar() != '\n')
            {
                /* Clear invalid input from the input buffer. */
            }

            choice = -1;
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\nTask Manager will be added in the next stage.\n");
                break;

            case 2:
                printf("\nExam Tracker will be added in the next stage.\n");
                break;

            case 3:
                printf("\nStudy Planner will be added in the next stage.\n");
                break;

            case 4:
                printf("\nProgress Report will be added in the next stage.\n");
                break;

            case 0:
                printf("\nThank you for using Student Productivity Tracker!\n");
                break;

            default:
                printf("\nPlease choose a number from 0 to 4.\n");
        }

    } while (choice != 0);

    return 0;
}
