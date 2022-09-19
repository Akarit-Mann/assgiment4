

// i need some more time that my bad because i start date is little late sorry sir.

#include "stdio.h"
#include "stdlib.h"

struct data
{
    int amount;
    int age;
    int id;
    char name[100];
    char password[100];
    char location[100];
};

// while loop control pannel
int c1 = 1, c2 = 1;

int firstChoice;
char addMore;
int updateNun;

int main()
{

    FILE *fptr;

    struct data user;

    printf("Welcome From my program \n");

    while (c1 == 1)
    {
        printf("If you want to insert data press =>'1'\n");
        printf("If you want to Find data press =>'2'\n");
        printf("If you want to Updatae data press =>'3'\n");
        printf("If you want to stop program press =>'4'\n");
        scanf("%d", &firstChoice);
        switch (firstChoice)
        {
        case 1:
            printf("user choose add data\n");

            if ((fptr = fopen("database.txt", "a")) == NULL)
            {

                puts("File cannot open!");
                exit(1);
            }
            else
            {

                printf("Enter id,name,age,password,amount,location \n");
                printf(">:");

                scanf("%d %s %d %s %d %s", &user.id, user.name, &user.age, user.password, &user.amount, user.location);
                fprintf(fptr, "%d %s %d %s %d %s \n", user.id, user.name, user.age, user.password, user.amount, user.location, '\n');
                fclose(fptr);
                printf("data add finish! \n");
            }

            break;

        case 2:
            printf("user choose find data\n");

            // reference from some example code
            // there is some error

            char array[255];
            int productID;

            fptr = fopen("database.txt", "r");

            while (1)
            {
                fscanf(fptr, "%d %s %d %s %d %s", &user.id, user.name, &user.age, user.password, &user.amount, user.location);

                // productID = atoi(array);
                productID = 0;

                printf("Please enter product ID : \n");
                printf("After you get a result the program will stop : \n");

                scanf(" %d", &productID);

                while (fscanf(fptr, "%d %s %d %s %d %s ", &user.id, user.name, &user.age, user.password, &user.amount, user.location) == 6)
                {

                    if (productID == user.id)
                    {
                        fgets(array, 255, (FILE *)fptr);
                        printf("%d %s %d %s %d %s \n", user.id, user.name, user.age, user.password, user.amount, user.location);
                    }
                }
                break;
            }
            fclose(fptr);
            // c1 = 2;

            break;

        case 3:
            printf("user choose update data\n");

            fptr = fopen("database.txt", "r");

            while (1)
            {
                fscanf(fptr, "%d %s %d %s %d %s", &user.id, user.name, &user.age, user.password, &user.amount, user.location);

                productID = 0;

                printf("Please enter user id you want to update: ");

                scanf(" %d", &productID);

                while (fscanf(fptr, "%d %s %d %s %d %s ", &user.id, user.name, &user.age, user.password, &user.amount, user.location) == 6)
                {

                    if (productID == user.id)
                    {
                        fgets(array, 255, (FILE *)fptr);
                        printf("%d %s %d %s %d %s \n", user.id, user.name, user.age, user.password, user.amount, user.location);
                    }
                }
                printf("For name press => '1' \n");
                printf("For name press => '2' \n");
                printf("For name press => '3' \n");
                printf("For name press => '4' \n");
                printf("For name press => '5' \n");
                scanf("%d", &updateNun);

                switch (updateNun)
                {
                case 1:
                    printf("sorry this feature is not work");
                    break;

                case 2:
                    printf("sorry this feature is not work");

                    break;

                case 3:
                    printf("sorry this feature is not work");

                    break;

                case 4:
                    printf("sorry this feature is not work");

                    break;

                case 5:
                    printf("sorry this feature is not work");

                    break;

                default:
                    printf("sorry this feature is not work");

                    break;
                }

                break;
            }

            break;
        case 4:

            c1 = 2;
            break;

        default:
            printf("Please follow the rule,sir! \n");

            break;
        }
    }

    return 0;
}
