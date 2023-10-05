/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/

#include <stdio.h>
  struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
        float Sum = 0 ;
        float Avg = 0;
    } typedef S ;
    void getGrade( int score ) {
    printf(" ");
    if( score >= 80 ) printf( " A" ) ; 
    else if( score >= 75 && score < 80 ) printf( "B+" ) ; 
    else if( score >= 70 && score < 75 ) printf( " B" ) ; 
    else if( score >= 65 && score < 70 ) printf( "C+" ) ; 
    else if( score >= 60 && score < 65 ) printf( " C" ) ; 
    else if( score >= 55 && score < 60 ) printf( "D+" ) ; 
    else if( score >= 50 && score < 55 ) printf( " D" ) ; 
    else printf( " F" ) ;

}
int main() {
    struct Student CPE[3];
    {
        for (int i = 0; i < 3; i++)
        {
            printf("Enter your name  : ");
            scanf("%s",CPE[i].Name);

            printf("Enter your ID  : ");
            scanf("%s",CPE[i].ID);

            printf("Enter your ScoreSub1  : ");
            scanf("%f",&CPE[i].ScoreSub1);

            printf("Enter your ScoreSub2  : ");
            scanf("%f",&CPE[i].ScoreSub2);

            printf("Enter your ScoreSub3 : ");
            scanf("%f",&CPE[i].ScoreSub3);

            printf("Enter your ScoreSub4  : ");
            scanf("%f",&CPE[i].ScoreSub4);

            printf("Enter your ScoreSub5 : ");
            scanf("%f",&CPE[i].ScoreSub5);

        } 

        printf("Student Details:\n");
        for (int i = 0; i <3 ; i++)
        {
            printf("\nStudent : %d", i+1);
            printf("\nName : %s", CPE[i].Name);
            printf("\nID : %s", CPE[i].ID);
            printf("\nScore : %.0f %.0f %.0f %.0f %.0f",CPE[i].ScoreSub1,CPE[i].ScoreSub2,CPE[i].ScoreSub3,CPE[i].ScoreSub4,CPE[i].ScoreSub5);
            printf("\nGrades :" ) ;
        getGrade( CPE[i].ScoreSub1 ) ;
        getGrade( CPE[i].ScoreSub2 ) ;
        getGrade( CPE[i].ScoreSub3 ) ;
        getGrade( CPE[i].ScoreSub4 ) ;
        getGrade( CPE[i].ScoreSub5 ) ;
            float Avg = (CPE[i].ScoreSub1 + CPE[i].ScoreSub2 + CPE[i].ScoreSub3 + CPE[i].ScoreSub4 + CPE[i].ScoreSub5) /5.0;
            printf("\nAverage Scores: %0.2f",Avg);
        }
        
       
    }
    return 0 ;
}//end main function