/*Problem Title: Professor Neo’s Attendance Analyzer 🎓
🧩 Story:

Professor Neo teaches Introduction to Programming to first-year students.
Every day, he records attendance in a digital register using binary codes:

1 means the student was present

0 means the student was absent

At the end of the week, Neo wants to analyze how his class performed in terms of attendance.
He wants your help to count how many students were present and how many were absent on that particular day.

Problem Statement:

You are given an array attendance[] of size n, where each element is either 1 or 0.
Write a program to count and print the total number of present and absent students.

📥 Input Format:

The first line contains an integer n — total number of students in the class.

The second line contains n space-separated integers (each either 0 or 1)

Output Format:

Print the following two lines:

Present: X
Absent: Y


Where X is the number of students present and Y is the number of students absent.*/
#include <stdio.h>

int main() {
    int n, i, status;
    int present = 0, absent = 0;

    printf("enter the number of students:");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        scanf("%d", &status);
        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
    }

    
    printf("Present: %d\n", present);
    printf("Absent: %d", absent);

    return 0;
}
