#include <stdio.h>

int main() {
    float attendance,assignment_scores,exam_results;
    float final_grade;
    printf("enter attendance (in %):");
    scanf("%f",&attendance);
    printf("enter assignment_scores (in %):");
    scanf("%f",&assignment_scores);
    printf("enter exam_results (in %):");
    scanf("%f",&exam_results);
    if  (attendance > 80) 
    {
    final_grade=(0.2*attendance)+(0.4*assignment_scores)+(0.4*exam_results);
     if(final_grade>=90)
     
     printf("the grade awarded is A*");
     else if(final_grade>=80)
     printf("the grade awarded is A");
     else if(final_grade>=70)
     printf("the grade awarded is B");
     else if(final_grade>=60)
     printf("the grade awarded is C");
     else
     printf("the grade awarded is D");
    } 
    else
    printf("your attendance is too low to recieve a grade");
    
return 0;
}  