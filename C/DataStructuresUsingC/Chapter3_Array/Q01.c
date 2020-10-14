/*
    * <<Data structures using C>>
    * An array contain 20 students in 5 subjects
    * Ref: https://blog.csdn.net/a130737/article/details/34440935
    * Ref: https://blog.csdn.net/xfxf996/article/details/107457152 -> 传递2D array
*/
#include <stdio.h>
#include <stdlib.h>

int averageSubject(int (*ptr)[5], int studentSum, int subjectIndex);
int averageStudent(int (*ptr)[5], int studentIndex, int subjectSum);
void unCertificationStudents(int (*ptr)[5], int subjectSum, int studentSum, int underLine, int *returnPtr);
void printAll(int (*ptr)[5], int subjectSum, int studentSum);

int main(){
    int students[5][5] = {
        10, 40, 50, 30, 20,
        20, 40, 40, 40, 30,
        50, 50, 50, 50, 50,
        70, 60, 80, 60, 50,
        90, 40, 70, 60, 80
    };
    int (*ptr)[5];
    ptr = students;
    int studentIndex = 0;
    int subjectIndex = 5;
    int studentSum = 5;
    int subjectSum = 5;
    int aveSubject = averageSubject(ptr, studentSum, subjectIndex);
    int aveStudent = averageStudent(ptr, studentIndex, subjectSum);

    int resultPtr[5] = {0};
    unCertificationStudents(ptr, subjectSum, studentSum, 50, resultPtr);

    //Print Answer
    printf("All students %dth subject ave is %d.\n", subjectIndex, aveSubject);
    printf("The   index  %dth student ave is %d.\n",studentIndex, aveStudent);
    for(int i = 0; i < studentSum; i++)
    {
        if(i == studentSum - 1)
        {
            printf("%d.\n",*(resultPtr + i));
        }
        else
        {
            printf("%d,",*(resultPtr + i));
        }

    }
    printAll(ptr,subjectSum,studentSum);
    return 0;
}

/*
    计算任意指定一门成绩所有学生的平均数, 并返回平均数.
    array : 成绩数组.
    subject: 指定学科;
    aveMarks: 返回平均值;
    */
int averageSubject(int (*ptr)[5], int studentSum, int subjectIndex)
{
    int averageValue = 0;
    for(int i = 0; i < studentSum; i++)
    {
        averageValue += *(*(ptr + i) + subjectIndex);
    }
    averageValue /= studentSum;
    return averageValue;
}

/*
    计算单个学生的所有学科的总和的平均分
    ptr: students marks table pointer
    studentsIndex:
    */
int averageStudent(int (*ptr)[5], int studentIndex, int subjectSum)
{
    int averageValue = 0;
    for(int i = 0; i < subjectSum; i++)
    {
        averageValue += *(*(ptr + studentIndex) + i);
    }
    averageValue /= subjectSum;
    return averageValue;
}

/*
    Find students  who average marks under 50.
    */
void unCertificationStudents(int (*ptr)[5], int subjectSum, int studentSum, int underLine, int *returnPtr)
{
    //int *array = (int *)(malloc(sizeof(int) * studentSum));
    int averageValue;
    for(int i = 0; i < studentSum; i++)
    {
        averageValue = 0;
        averageValue = averageStudent(ptr, i, subjectSum);
        if(averageValue < underLine)
        {
            returnPtr[i] = 1;
        }
    }
}



/*
    Display every element of every students every subject marks.
    */
void printAll(int (*ptr)[5], int subjectSum, int studentSum)
{
    for(int i = 0; i < studentSum; i++)
    {
        for(int j = 0; j < subjectSum; j++)
        {
            if(j == subjectSum - 1)
            {
                printf("%d.\n", *(*(ptr + i) + j));
            }
            else
            {
                printf("%d,", *(*(ptr + i) + j));
            }
            
        }
    }
}