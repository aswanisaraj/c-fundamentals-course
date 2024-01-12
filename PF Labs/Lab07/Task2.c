/*  Task 2: Please input the runs and wickets for both team 1 and team 2. Ensure that all values are non-negative (zero is
allowed). Additionally, check that if team 2 has more runs, their wickets should be less than 10.
After the input check is complete, if team 2 has more runs, print "Team 2 has won by … wickets" (the number of
remaining wickets for team B; if they have lost 6 wickets, there are 4 wickets remaining). If team 1 has more runs,
print, "Team 1 has won by … runs" (the difference in runs between team A and team B). In the event that both
teams have the same runs but different numbers of wickets, the team with fewer wickets will win. Print "Team 1
won by 1 run" for team 1 and "Team 2 won by … wickets" for team 2. Otherwise, print, "The match is a draw".*/


#include<stdio.h>
int main(){
    int r1, r2, w1, w2;
    printf("Runs for team 1:");
    scanf("%d", &r1);
    while(r1 <=0){
        printf("Runs for team 1:");
        scanf("%d", &r1);
    }

    printf("Wickets for team 1:");
    scanf("%d", &w1);
    printf("Runs for team 2:");
    scanf("%d", &r2);
    printf("Wickets for team 2:");
    scanf("%d", &w2);

    int w_rem, by_runs;
    w_rem = 10 - w2;
    by_runs = r1 - r2;

    if(r1 > r2){
        printf("Team 1 has won by %d runs", by_runs );
    }else 
        printf("Team 2 has won by %d wickets",w_rem);

    printf("\n");

    return 0;
}