#include<stdio.h>
#include <string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
struct student s1;
s1.roll=166;
s1.cgpa=9.2;
//s1.name="jaynil";
strcpy(s1.name,"jaynil\n");
printf("student name= %s\n",s1.name);
printf("roll number=%d\n",s1.roll);
printf("student cgpa=%f",s1.cgpa);

return 0;
}