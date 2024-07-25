#include <stdio.h>

int main(){
    int user;
    float unit,bill,sur,total;
    printf("Input User ID:");
        scanf("%d",&user);
        printf("Input Unit:"); 
        scanf("%f",&unit);
        if(unit<=199){
            bill=unit*5;
            sur=0;
            total=bill;
            if(bill<100){printf("The charge of %d is 100 BDT,sur is 0 BDT, Total 100 BDT",user);}
            else
            printf("The charge of %d is %f BDT,sur is %f BDT, Total %f BDT",user,bill,sur,total);
        }
        else if(200<=unit && unit<400){
            bill=unit*7;
            sur=bill*0.15;
            total=bill+sur;
            printf("The charge of %d is %f BDT,sur is %f BDT, Total %f BDT",user,bill,sur,total); 
        }
        else {
            bill=unit*10;
            sur=bill*0.15;
            total=bill+sur;
            printf("The charge of %d is %f BDT,sur is %f BDT, Total %f BDT",user,bill,sur,total);
        }
    return 0;
}