#include<stdoi.h>
#include<stdlib.h>
int main()
{
    int course_work_score,written examination_score,percentage_score;
    char student name,pass_or_fail;
    double total score;

    printf("STUDENT NAME:");
    scanf("%s",&studentname);

    printf("COURSEWORK SCORE:");
    scanf("%d",&course_work_score);

    printf("WRITTEN EXAM SCORE:");
    scanf("%d",&writtenexamination_score);

    printf("TOTAL SCORE:%d\n",course_work_score+writtenexamination_score);

    printf("COURSEWORK:");
    if(course_work_score<15){
        printf("FAIL\n");
    }
    else if(course_work_score>=15){
        printf("PASS\n");
    }
    printf("WRITTEN EXAMS:");
    IF(writtenexamination_score<15){
    printf("FAIL\n");
    }
    else if (writtenexamination_score>=15)
        printf("PASS\n");

    printf ("STUDENT GOT:");
    scanf("%s",pass_or_fail);

    printf("TOTAL SCORE:");
    scanf("%if",&totalscore);

    printf("PERCENTAGE:%.2If(percent)\n",totalscore/50*100);

    printf("ENTER PERCENTAGE SCORE:");
    scanf("%d",&percentage_score);

    printf("STUDENT'S GRADE:");
    If(percentage_score>=0 && percentage_score<=39)
    {

        printf("F");
    }
    else if(percentage_score>=40 && percentage_score<=49)
    {
        printf("D");
    }
    else if(percentage_score>=50 && percentage_score<=59)
    {
        printf("C")
    }
    else if(percentage_score>=60 && percentage_score<=69)
        printf("B");
    else if (percentage_score>=70 && percentage_score<=100)
    {
        print("A");




        return 0;
    }
}
