/*  
    * An array contain 20 students in 5 subjects
    * Ref: https://blog.csdn.net/a130737/article/details/34440935
    * Ref: https://blog.csdn.net/xfxf996/article/details/107457152 -> 传递2D array
*/
#include <stdio.h>

int averageSubject(int (*ptr)[5], int subject);
float averageStudents(int (*ptr)[5], int studentsIndex);

int main(){
    int students[3][5] = {
        1, 4, 5, 3, 2,
        2, 4, 4, 4, 3,
        5, 5, 5, 5, 5
    };
    int (*ptr)[5];
    ptr = students;
    int subject;
    subject = 0;
    //int result = averageSubject(ptr,subject);
    float result = averageStudents(ptr, 2);
    printf("result is %f.\n",result);
}

/*
    计算任意指定一门成绩所有学生的平均数, 并返回平均数.
    array : 成绩数组.
    subject: 指定学科;
    aveMarks: 返回平均值;
*/
int averageSubject(int (*ptr)[5], int subject)
{
    int i,aveMarks = 0;
    for(i = 0; i < 3; i++)
    {
        aveMarks += *(*(ptr + i) + subject);
        printf("%d\n", aveMarks);
    }
    return (aveMarks / 3);
}

/*
    计算单个学生的所有学科的总和的平均分
    ptr: students marks table pointer
    studentsIndex:
*/
float averageStudents(int (*ptr)[5], int studentsIndex)
{
    int i,averageAllMark = 0;
    for(i = 0; i < 5; i ++)
    {
        averageAllMark += (*(*(ptr + studentsIndex) + i));
    }
    return averageAllMark / 5;
}

/*
    Find students  who average marks under 50.
    */




/*
    Display every element of every students every subject marks.
    */