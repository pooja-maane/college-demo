#include <stdio.h>

int main(){
    float TNT_C=3,DS_C=4,DLD_C=4,DMGT_C=3,FSD_C=3,SEC_C=2,IFS_C=1,Total_C=20;
    char name[30];
    float sgpa;
    float TNT_G,DS_G,DLD_G,DMGT_G,FSD_G,SEC_G,IFS_G;
    float TNT_M,DS_M,DLD_M,DMGT_M,FSD_M,SEC_M,IFS_M,Total_M;
    float TNT,DS,DLD,DMGT,FSD,SEC,IFS;

    printf("enter sudent name: ");
    scanf("%s",name);

    printf("enter TNT marks: ");
    scanf("%f",&TNT);
    if(TNT>=40&&TNT<=44){
        TNT_G=4;
    }
    else if(TNT>=45&&TNT<=49){
        TNT_G=5;
    }
    else if(TNT>=50&&TNT<=59){
        TNT_G=6;
    }
    else if(TNT>=60&&TNT<=69){
        TNT_G=7;
    }
    else if(TNT>=70&&TNT<=79){
        TNT_G=8;
    }
    else if(TNT>=80&&TNT<=89){
        TNT_G=9;
    }
    else if(TNT>=90&&TNT<=100){
        TNT_G=10;
    }
    else{
        TNT_G=0;
    }

    printf("enter DS marks: ");
    scanf("%f",&DS);
    if(DS>=40&&DS<=44){
        DS_G=4;
    }
    else if(DS>=45&&DS<=49){
        DS_G=5;
    }
    else if(DS>=50&&DS<=59){
        DS_G=6;
    }
    else if(DS>=60&&DS<=69){
        DS_G=7;
    }
    else if(DS>=70&&DS<=79){
        DS_G=8;
    }
    else if(DS>=80&&DS<=89){
        DS_G=9;
    }
    else if(DS>=90&&DS<=100){
        DS_G=10;
    }
    else{
        DS_G=0;
    }

    printf("enter DLD marks: ");
    scanf("%f",&DLD);
    if(DLD>=40&&DLD<=44){
        DLD_G=4;
    }
    else if(DLD>=45&&DLD<=49){
        DLD_G=5;
    }
    else if(DLD>=50&&DLD<=59){
        DLD_G=6;
    }
    else if(DLD>=60&&DLD<=69){
        DLD_G=7;
    }
    else if(DLD>=70&&DLD<=79){
        DLD_G=8;
    }
    else if(DLD>=80&&DLD<=89){
        DLD_G=9;
    }
    else if(DLD>=90&&DLD<=100){
        DLD_G=10;
    }
    else{
        DLD_G=0;
    }

    printf("enter DMGT marks: ");
    scanf("%f",&DMGT);
    if(DMGT>=40&&DMGT<=44){
        DMGT_G=4;
    }
    else if(DMGT>=45&&DMGT<=49){
        DMGT_G=5;
    }
    else if(DMGT>=50&&DMGT<=59){
        DMGT_G=6;
    }
    else if(DMGT>=60&&DMGT<=69){
        DMGT_G=7;
    }
    else if(DMGT>=70&&DMGT<=79){
        DMGT_G=8;
    }
    else if(DMGT>=80&&DMGT<=89){
        DMGT_G=9;
    }
    else if(DMGT>=90&&DMGT<=100){
        DMGT_G=10;
    }
    else{
        DMGT_G=0;
    }

    printf("enter FSD marks: ");
    scanf("%f",&FSD);
    if(FSD>=40&&FSD<=44){
        FSD_G=4;
    }
    else if(FSD>=45&&FSD<=49){
        FSD_G=5;
    }
    else if(FSD>=50&&FSD<=59){
        FSD_G=6;
    }
    else if(FSD>=60&&FSD<=69){
        FSD_G=7;
    }
    else if(FSD>=70&&FSD<=79){
        FSD_G=8;
    }
    else if(FSD>=80&&FSD<=89){
        FSD_G=9;
    }
    else if(FSD>=90&&FSD<=100){
        FSD_G=10;
    }
    else{
        FSD_G=0;
    }

    printf("enter SEC marks: ");
    scanf("%f",&SEC);
    if(SEC>=40&&SEC<=44){
        SEC_G=4;
    }
    else if(SEC>=45&&SEC<=49){
        SEC_G=5;
    }
    else if(SEC>=50&&SEC<=59){
        SEC_G=6;
    }
    else if(SEC>=60&&SEC<=69){
        SEC_G=7;
    }
    else if(SEC>=70&&SEC<=79){
        SEC_G=8;
    }
    else if(SEC>=80&&SEC<=89){
        SEC_G=9;
    }
    else if(SEC>=90&&SEC<=100){
        SEC_G=10;
    }
    else{
        SEC_G=0;
    }

    printf("enter IFS marks: ");
    scanf("%f",&IFS);
    if(IFS>=40&&IFS<=44){
        IFS_G=4;
    }
    else if(IFS>=45&&IFS<=49){
        IFS_G=5;
    }
    else if(IFS>=50&&IFS<=59){
        IFS_G=6;
    }
    else if(IFS>=60&&IFS<=69){
        IFS_G=7;
    }
    else if(IFS>=70&&IFS<=79){
        IFS_G=8;
    }
    else if(IFS>=80&&IFS<=89){
        IFS_G=9;
    }
    else if(IFS>=90&&IFS<=100){
        IFS_G=10;
    }
    else{
        IFS_G=0;
    }

    TNT_M = TNT_C*TNT_G;
    DS_M = DS_C*DS_G;
    DLD_M = DLD_C*DLD_G;
    DMGT_M = DMGT_C*DMGT_G;
    FSD_M = FSD_C*FSD_G;
    SEC_M = SEC_C*SEC_G;
    IFS_M = IFS_C*IFS_G;
    Total_M = TNT_M+DS_M+DLD_M+DMGT_M+FSD_M+SEC_M+IFS_M;
    sgpa = Total_M/Total_C;

    printf("sgpa of %s is %.2f",name,sgpa);

}