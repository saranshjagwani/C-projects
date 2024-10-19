#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct items{
    char item[20];
    float price ;
    int qty;
};
struct orders{
    char customer[50];
    char date[50];
    int numofItems;
    struct items itm[50];
};
void BillBana(char name[50] , char date[30]){
printf("\n\n");
printf("\t\t\t\t\t Harsh Cafe \t\t\t\t\t");
printf("\n------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\nDate : %s", date);
printf("\n Invoice to : %s",name);
printf("\n");
printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n Iteam\t\t");
printf("\n Quantity\t\t");
printf("\n Total\t\t");
printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n");
}
void Kaisa_Banau_Bill(char item [20],int qty , float price){
    printf("%s\t\t",item);
    printf("   %d\t\t ",qty);
    printf("        %.2f\t\t",qty * price);
    printf("\n");
}
void Dekh_Bill(float total){
    printf("\n");
    float dis = 0.1*total;
    float netTotal = total-dis;
    float gst = 0.18*netTotal;
    float granftotal = netTotal + gst ;
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nSub Total \t\t\t%.2f",total);
    printf("\n Discount @10\t\t\t%.2f",dis);
    printf("\n\t\t\t\t------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n Net total\t\t\t%.2f",netTotal);
    printf("\n Gst @18\t\t\t\t%.2f",gst);
    printf("\n\t\t\t\t-------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\nGrand Total %.2f", granftotal);
    printf("\n\t\t\t\t--------------------------------------------------------------------------------------------------------------------------------------------");

}
int main(){
    int opt , n;
    char name[50];
    char saveBill = 'y', flag='y';
    float total;
    int i;
    struct orders item;
    struct orders ord ;
    struct orders order ;
    FILE *fp;
    while(flag == 'y'){
        printf("============================== Harsh Cafe ==============================");

        printf("\n 1.Generate Invoice");
        printf("\n 2.Show all Invoice");
        printf("\n 3.Search Invoice");
        printf("\n 4.Exit");

        printf("\n\n Your Choise : ");
        scanf("%d",&opt);

        printf("\n Your Choice is %d",opt);

        printf("\n");
    }
    switch(opt){
        case 1 : 

        printf("\n PLease Enter  the name of customer : \n ");
        fgetc(stdin);
        fgets(ord.customer , 50 ,stdin );
        ord.customer[strlen(ord.customer) - 1] = 0;
        strcpy(ord.date,__DATE__);
        printf("\n Please Enter the number of iteam : \t");
        scanf("%d",&n);
        ord.numofItems = n;
        
       for(int i=0 ; i<n ; ++i){
        fgetc(stdin);
        printf("\n\n Please enter a number of item : ");
        fgets(ord.itm[i].item , 20,stdin);
        ord.itm[i].item[strlen(ord.itm[i].item) - 1 ] = '0';
        printf("\n Please entera a number of quntity: ");
        scanf("%d",&ord.itm[i].qty);
        printf("\n Please enter a number of price : ");
        scanf("%f",&ord.itm[i].price);
        total += ord.itm[i].qty * ord.itm[i].price;
        }
        BillBana(ord.customer , ord.date);

        for(int i=0;i<ord.numofItems; i++){
            Kaisa_Banau_Bill(ord.itm[i].item, ord.itm[i].qty , ord.itm[i].price);
        }
        Dekh_Bill(total);
        printf("\n Do you want to save invoise [y/n]: \t");
        scanf("%s",&saveBill);
        if(saveBill == 'y'){
            fp = fopen("HarshCafe.text","a+");
            fwrite(&ord, sizeof(struct orders)  , 1, fp);
            if(fwrite !=0){
                printf("\n Save successfully");
            }else
            printf("\n Erroe Saving ");
            fclose(fp);
        }
        break;

    
        case 2:
         fp = fopen("HarshCafe.txt","r");
        printf("\n******************** Previous Invoise ********************\t");
        while(fread(&ord, sizeof(struct orders), 1 , fp)){
        float tot = 0;
        BillBana(ord.customer , ord.date);
        for(int i=0;i<ord.numofItems;i++){
            Kaisa_Banau_Bill(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
            tot+=ord.itm[i].qty * ord.itm[i].price;
        }
        Dekh_Bill(tot);
    }
    fclose(fp);
    break ;
    
    
    case 3 :
    printf("\nEntere the name of customer : \t");
    fgetc(stdin);
    fgets(name,50,stdin);
    name[strlen(name) - 1] = '\0';

    fp = fopen("HarshCafe.txt","r");
    printf("\n******************** Invoice of char* ********************\t");
    while(fread(&ord , sizeof(struct orders), 1 , fp)){
        float tot = 0;
        if(!strcmp(ord.customer,name)){
        BillBana(ord.customer , ord.date);
        for(int j=0;j<ord.numofItems;j++){
            Kaisa_Banau_Bill(ord.itm[j].item,ord.itm[j].qty,ord.itm[j].price);
            tot += ord.itm[j].qty* ord.itm[j].price;
        }
        Dekh_Bill(tot);
        i=1;
        }
        fclose(fp);

    }
    if(!i) {
        printf("\n Nahi mila tera koi invoice ");
    }
    fclose(fp);
    break;
    case 4:
    printf("\n\tChal nikal");
    exit(0);

default:
    printf("\n Kuch Bhi mMatlab");
    break;
    }
    printf("\n Aur kuch sir?[y/n]\t");
    scanf("%s",&flag);

printf("\n\n");

    return 0;
}