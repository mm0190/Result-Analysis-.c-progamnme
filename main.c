#include<stdio.h>
int main()
{
    float marks,percentage,totalmarks;
    char grade;
 
    printf("Enter marks and totalmarks:");
    scanf("%f\n%f",&marks,&totalmarks);
    
    if(marks >= 90) {
        grade = 'O';
        printf("grade is '%c' ",grade);
    }
    
    else if(marks >= 80 && marks < 90) 
    {
        grade = 'A';
        printf("grade is '%c' \n ",grade);
    }
    
    else if(marks >= 70 && marks < 80) 
    {
        grade = 'B';
        printf("grade is '%c' \n ",grade);
    }
    
    else if(marks >= 60 && marks < 70)  
    {
        grade = 'C';
        printf("grade is '%c' \n ",grade);
    }
    
    else if(marks >= 50 && marks < 60)  
    {
      grade = 'D';
      printf("grade is '%c' \n ",grade);
    }
    
    else if(marks>=40 && marks < 50)  
    {
        grade = 'E';
        printf("grade is '%c' \n ",grade);
    }
    
    else 
    {
     grade = 'F';
     printf("grade is '%c' \n(*F) 'Please Work Hard'",grade);
    }
    
    percentage=(totalmarks/600)*100;
    printf("\noverall percentage:%.3f",percentage);
    
    return 0;
}