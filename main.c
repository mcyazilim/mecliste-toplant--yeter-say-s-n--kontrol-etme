#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aparty,bparty,cparty,currentcouncilor;
    const int sumcouncilor=600;

    printf("Enter the number of councilors of the parties:");
    scanf("%d%d%d",&aparty,&bparty,&cparty);

    currentcouncilor=aparty+bparty+cparty;

    if(currentcouncilor<200){
        printf("Majority is not enough\n");
        printf("Current councilor must be 200\n");
    }else{
        printf("Council is ready for session\n");
    }
    return 0;
}
