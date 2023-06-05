#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    int marks;
    char name[100];
    struct student* next;
};

int main() {
    struct student s1, s2, s3, s4, s5;

    s1.roll = 2;
    s1.marks = 40;
    strcpy(s1.name, "jhon");
    s1.next = &s2;

    s2.roll = 4;
    s2.marks = 40;
    strcpy(s2.name, "mike");
    s2.next = &s3;

    s3.roll = 8;
    s3.marks = 80;
    strcpy(s3.name, "lucifer");
    s3.next = &s4;

    s4.roll = 9;
    s4.marks = 90;
    strcpy(s4.name, "victor");
    s4.next = &s5;

    s5.roll = 2;
    s5.marks = 50;
    strcpy(s5.name, "luke");
    s5.next = NULL;

    printf("%s, %d, %d\n", s1.name, s1.roll, s1.marks);
    printf("Next: %p\n", s1.next);

    printf("%s, %d, %d\n", s2.name, s2.roll, s2.marks);
    printf("Next: %p\n", s2.next);

    printf("%s, %d, %d\n", s3.name, s3.roll, s3.marks);
    printf("Next: %p\n", s3.next);

    printf("%s, %d, %d\n", s4.name, s4.roll, s4.marks);
    printf("Next: %p\n", s4.next);

    printf("%s, %d, %d\n", s5.name, s5.roll, s5.marks);
    printf("Next: %p\n", s5.next);
    
printf("%s",s1.next->next->name);
printf("%s",s2.next->name);
printf("%d",s1.next->roll);
    return 0;
}

