/*Write a function that will take the mark of a student as an argument and return the grade as a character. Look at the table below to understand the grading policy.

Mark Range
Grade
80-100
A
60-79
B
40-59
C
0-39
F

*/
#include <stdio.h>

char get_grade(int mark) {
  if (mark >= 80 && mark <= 100) {
    return 'A';
  } else if (mark >= 60 && mark <= 79) {
    return 'B';
  } else if (mark >= 40 && mark <= 59) {
    return 'C';
  } else if (mark >= 0 && mark <= 39) {
    return 'F';
  } else {
    return 'X';
  }
}

int main() {
  int mark;
  char grade;

  printf("Enter the mark: ");
  scanf("%d", &mark);

  grade = get_grade(mark);

  printf("Grade: %c\n", grade);

  return 0;
}

