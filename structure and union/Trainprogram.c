/*Define a structure data type TRAIN_INFO. The type contain Train No.: integer type Train 
name: string Departure Time: aggregate type TIME Arrival Time: aggregate type TIME Start 
station: string End station: string The structure type Time contains two integer members: 
hour and minute. Maintain a train timetable and implement the following operations: 
 
(i) List all the trains (sorted according to train number) that depart from a particular section. 
 
 
(ii) List all the trains that depart from a particular station at a particular time. 
 
(iii) List all the trains that depart from a particular station within the next one hour of a given 
time. 
 
(iv) List all the trains between a pair of start station and end station.*/
#include<stdio.h>
#include<string.h>

#define MAX 50

typedef struct TIME
{
    int min;
    int hour;
}Time;

typedef struct Train_info{
    int Train_no;
    char Train_name[100];
    Time dep_time;
    Time arr_time;
    char start_st[100];
    char end_st[100];
}Train;
int main()
{
    int no_of_train=0;
    int i,choice;
    char dep_st[100];
    char arr_st[100];
    Train train[MAX];
    edit_train(train , &no_of_train);
    return 0;
}

void edit_train(Train *train, int *no_of_train)
{
    int choice;
    int i,train_num;
    Train temp;

    while(1)
    {
        //Display Train edit menu
        printf("\t\t****TRAIN EDIT MENU****\n");
        printf("1.Add Train\n");
        printf("2.Delete Train\n");
        printf("3.Exit Train edit menu\n");
        printf("Enter Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            //Already max number of train accepted.
            if(*no_of_train>=MAX)
            {
                printf("ERRPR! There are already maximum train added\n");
                break;
            }
            printf("Input Train Number : ");
            scanf("%d",&temp.Train_no);
            //check whether this train number exist or not.
            for (i=0;i<=*no_of_train-1;i++)
            {
                if (train[i].Train_no==temp.Train_no)
                {
                    printf("Error! Train number %d already exist. Please try again.\n\n");
                    temp.Train_no=-1;
                    break;
                }
            }
            if(temp.Train_no==-1)
            {
                break;
            }
            printf("Input Train Name : ");
            fflush(stdin);
            gets(temp.Train_name);
            printf("Input the Departure time\n");
            printf("Hour : ");
            scanf("%d",&temp.dep_time.hour);
            printf("Minute : ");
            scanf("%d",&temp.dep_time.min);
            printf("Input the Arrival time\n");
            printf("Hour : ");
            scanf("%d",&temp.arr_time.hour);
            printf("Minute : ");
            scanf("%d",&temp.arr_time.min);
            printf("Input Departure Station : ");
            fflush(stdin);
            gets(temp.start_st);
            printf("Input Destination : ");
            fflush(stdin);
            gets(temp.end_st);
            //short according to train number
            train[*no_of_train]=temp;
            for(i=*no_of_train;i>=1;i--)
            {
                if(train[i-1].Train_no>=train[i].Train_no)
                {
                    temp=train[i-1];
                    train[i-1]=train[i];
                    train[i]=temp;
                }
                else break;
            }
            *no_of_train=*no_of_train+1;
            printf ("Train %d added successfully.\n\n", train[i].Train_no);
            break;
        case 2:
            //if no train available
            if(*no_of_train==0)
            {
                printf ("\nError! No Train Available.\n\n"); 
                break;
            }
            //Input Train Number.
             printf("Input Train Number : ");
            scanf("%d",&train_num);
            //have to find and delete train
            for(i=0;i<=*no_of_train-1;i++)
            {
                if(train[i].Train_no==train_num)
                {
                    while(i<=*no_of_train-1)
                    {
                        train[i]=train[i+1];
                        i++;
                    }
                    *no_of_train=*no_of_train-1;
                    printf ("Train %d deleted successfully.\n\n", train_num);
                    train_num=-1;
                    break;
                }
            }
            //If train not found
            if(train_num!=-1)
            {
                printf ("Error! Train %d not found\n\n", train_num);
                break;
            }
        case 3:
            printf("\n");
            return;
        default:
        printf("\nError! Wrong Choice.\n\n");
        }
    }
}