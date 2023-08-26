#include <stdio.h>

int main(void) {

    int grade[5], g;

    float GPA=0.0, grade_point=0.0, result=0.0;


            for(g=0; g<=class_num; g++) {
                scanf(" %d", &grade[g]);
                printf("Please enter students' grades: %d.", grade[g]);
            }

            // Conversion of grades
            if (grade == "A"){
                grade_point = 4.0;
            }
            if (grade == "B"){
                grade_point = 3.0;
            }
            if (grade == "C")
            {
                grade_point =2.0;
            }
            if (grade == "D"){
                grade_point = 1.0;
            }
            if (grade == "F"){
                grade_point = 0.0;
            }

            // Formula to calculate GPA
            result += grade_point[g];
            GPA = result/class_num[c];
        }
    }

    // Print user input and results in a table
    printf(“\n  \t Grades \t GPA”);
    for(n=0; n<25; n++) {
        printf(“%d \t %f”, grade[g], GPA);
    }
    return 0;
}
