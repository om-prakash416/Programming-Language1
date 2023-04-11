#include<stdio.h>
#define ACTIVITIES_WEIGHTAGE 30
#define SPORTS_WEIGHTAGE 20
#define EXAMS_WEIGHTAGE 50
#define EXAMS_TOTAL 200
#define ACTIVITIES_TOTAL 60
#define SPORTS_TOTAL 50
int main(){
    int exam_scorel,activities_scorel,sports_score;
    int exam_score2,activities_score2,activities_score3;
    float exam_total,activities_total;
    float total_percent,exam_percent,sports_percent,activities_percentage;
    printf("\n enter the score obtained in two examination(out of 100: " );
    scanf("%d %d",&exam_scorel,&exam_score2);
     printf("\n enter the score obtained in sports events (out of 50: " );
    scanf("%d",&sports_score);
     printf("\n enter the score obtained in three activities (out of 100: " );
    scanf("%d %d %d",&activities_scorel,&activities_score2,&activities_score3);
    exam_total=(exam_scorel+exam_score2);
    activities_total=(activities_scorel+activities_score2+activities_score3);
    exam_percent=(float)exam_total * EXAMS_WEIGHTAGE/EXAMS_TOTAL;
    sports_percent=(float)sports_score*SPORTS_WEIGHTAGE / SPORTS_TOTAL;
    activities_percentage=(float)activities_total*ACTIVITIES_WEIGHTAGE/ACTIVITIES_TOTAL;

    total_percent=exam_percent+sports_percent+activities_percentage;
    printf("\n\n**************RESULT************");
    printf("\n Total percent in examination :%f",exam_percent);
    printf("\n Total percent in activities:%f",activities_percentage);
    printf("\n Total percent in sports:%f",sports_percent);
    printf("\n---------------------------------------------");
    printf("\n Total pervcentage: %f",total_percent);
    return 0;
    }