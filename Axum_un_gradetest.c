#include <stdio.h>
#include <stdlib.h>
int main(){
    struct  student{
        char name[20] ;
        char id[15];


    struct course{
         char grade [2];
        char coursecode[10] ;
        char coursename[20] ;
        int crhours;
        }cor[2];
        }stu1[3];
        int a=3,i=0,j=0,b=2,m=1,k=1;
    printf("how many students do you have?\n");
    scanf("%d",&a);
        struct student *st;
        struct course *crs;
        st=(struct student*)malloc(a*(sizeof(struct student)));// memory allocation for the structures of student and course
        crs=(struct course*)malloc(b*(sizeof(struct course)));
 for(i=0;i<a;i++){
        printf("\nSudent %d Data.\n",i+1);
        printf("Enter Sudent  name:\n");
        scanf("%s",&stu1[i].name);
        printf("Enter Sudent id:\n");
        scanf("%s",&stu1[i].id);

    printf("how many courses does %s take?\n",stu1[i].name);
     scanf("%d",&b);
for(j=0;j<b;j++){

        printf("\ncourse %d Data.",j);
        printf("Enter course code\n");
        scanf("%s",&stu1[i].cor[j].coursecode);
        printf("Enter course name\n");
        scanf("%s",&stu1[i].cor[j].coursename);
        printf("Enter credit houres\n");
        scanf("%d",&stu1[i].cor[j].crhours);
        printf("Enter Student Grade:\n");
        scanf("%s",&stu1[i].cor[j].grade);}}

for(m=0;m<a;m++){

printf("\n===========================================================\n");
printf("=\t\tAXUM UNIVERSITY STUDENT NFORMATION\n");
printf("=\t\tStudent Grade Report\n");
printf("=\t\t_______________________\n");
printf("\n    Student Id:\t %s",stu1[m].id);
printf("\n    Student Name: %s",stu1[m].name);
printf("\n\n");
printf("\t----------------------------------------\n");
printf("\t|\tCode \t\t\tGrade\t|\n");
printf("\t----------------------------------------\n");

for(k=0;k<b;k++){


printf("\t|\t%s",stu1[m].cor[k].coursecode);
printf("\t\t\t %s\t|\n",stu1[m].cor[k].grade);
}
printf("\t----------------------------------------\n");
printf("\n\tCorse Matrix");
printf("\n\t-------------------------------------------------------------------------\n");
printf("\t|\tcoursecode \t|\tcoursename\t|\tcredithours\t|\n");
printf("\t-------------------------------------------------------------------------\n");

for(k=0;k<b;k++){


printf("\t|\t %s",stu1[m].cor[k].coursecode);
printf("\t\t|\t%s",stu1[m].cor[k].coursename);
printf("\t\t|\t%d \t\t|\n",stu1[m].cor[k].crhours);
}
printf("\t-------------------------------------------------------------------------\n");
printf("\n=================================================================================");}

     free(crs); //making the allocation of the structures free.
     free(st);

return 0;
}
