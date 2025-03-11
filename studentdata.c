#include<stdio.h>
struct stu-INFO
[
char name [30];
int rollno;
float sub1,sub2,sub3,total_marks;
}
student[5];
int main()
{
int i;
for(i=0;i<5;i++)
{
printf("enter the student name \n");
scanf("%s",student[i].name);
printf("enter the roll number \n");
scanf("%d",student[i].rollno);
printf("enter the marks of sub1 \n");
scanf("%f",student[i].sub1);
printf("enter the marks of sub2 \n");
scanf("%f",student[i].sub2);
printf("enter the marks of sub3 \n");
scanf("%f",student[i].sub3);
student[i].total_marks=student[i].sub1+student[i].sub2+student[i].sub3;
printf("total marks are %f \n",student[i].total_marks);
}
printf("-----------------student details--------------------\n");
for(i=0;i<5;i++)
{
printf("name of the student : %s \n",student[i].name);
printf("roll number %d \n",student[i].rollno);
printf("marks of sub1=%f \n",student[i].sub1);
printf("marks of sub2=%f \n",student[i].sub2);
printf("marks of sub3=%f \n",student[i].sub3);
printf("total marks are=%f \n",student[i].total_marks);}}
