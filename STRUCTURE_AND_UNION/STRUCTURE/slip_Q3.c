#include<stdio.h>
struct cricketer
{
    char pname[20];
    char team_name[20];
    int avg;
    int high_score;
}player[5];

void main()
{
    int n,i;
    printf("ENTER THE NUMBER OF ENTERIES:\t");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("ENTER PLAYER NAME:\t");
        scanf("%s",player[i].pname);
        
        printf("ENTER TEAM NAME:\t");
        scanf("%s",player[i].team_name);
        
        printf("ENTER PLAYERS AVERAGE SCORE:\t");
        scanf("%d",&player[i].avg);
        
        printf("ENTER PLAYERS HIGH SCORE:\t");
        scanf("%s",player[i].pname);

        printf("\nPLAYER DETAILS\n");
        printf("\nPLAYER NAME\tTEAM NAME\tAVERAGE SCORE\tHIGH SCORE\n");
        printf("------------------------------------------------------\n");
        for ( i = 0; i < n; i++)
        {
            printf("%S\t%s\t%d\t%d\n",player[i].pname,player[i].team_name,player[i].avg,player[i].high_score);
        }
    }
    

}
