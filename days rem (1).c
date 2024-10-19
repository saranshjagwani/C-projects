
#include <stdio.h>

int main() {
    int year,month,day,alldays;
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter year \n");
    scanf("%d",&year);
    printf("enter month \n");
    scanf("%d",&month);
    printf("enter day \n");
    scanf("%d",&day);
    alldays=365;
if(month<12 || day<days[month] ){
        printf("wrong month or day input");
    }
    else{
    if(year%4==0){
        days[2]=29;
        alldays=366;
    }
    
    int yrday;
    for(int i=1; i<month; i++){
        yrday+=days[i];
    }
    
    printf("%d day is today \n",yrday+day);
    
    printf("%d is remaining days \n",alldays-(yrday+day));
  
}
    return 0;
}