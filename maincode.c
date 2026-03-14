#include <stdio.h> 
int t_count=0; 
int ticket_prices[12]={5,10,15,20,25,30,35,40,45,50,55,60}; 
char *loc[]={"Agara","Electronic City","Koramangala","Shantinagar","Mahalakshmi 
Layout","Malleshwaram", 
"Forum Checkpost","BEL Circle","Toll Gate","Mysore Bank Circle","KR Circle","KBS"}; 
 
//Function Declarations 
void ticket_generate(); 
void pass_generate(); 
void free_ticket(); 
 
//type 1,2,3 
void ticket_print(float price,int m,int f,int l); 
void pass_print(int price,int m,char id[4],int id_type,int tp); 
void free_ticket_print(int l,char id[4]); 
 
void file_ticket_print(int price,int m,int f,int l); 
void file_pass_print(int price,int m,char id[4],int id_type,int tp); 
void file_free_ticket_print(int l,char id[4]); 
 
void display_locs(); 
 
void ticket_generate() 
{ 
 int s,m,l,f; 
 printf("\nEnter 1.Senior Citizen 2.Half Ticket 3.Full Ticket\n"); 
 scanf("%d",&s); 
 printf("\nEnter payment method 1.Cash 2.UPI\n"); 
           
 scanf("%d",&m); 
 do{ 
 //printf("\nEnter From 1.Agara\t2.Electronic 
City\n3.Koramangala\t4.Shantinagar\n5.BEL Circle\t6.Toll Gate\n7.Mysore Bank 
Circle\t8.KR Circle\n9.KBS \n"); 
 printf("\nEnter From\n"); 
 display_locs(); 
 scanf("%d",&f); 
 //printf("\nEnter Destination 1.Agara\t2.Electronic 
City\n3.Koramangala\t4.Shantinagar\n5.BEL Circle\t6.Toll Gate\n7.Mysore Bank 
Circle\t8.KR Circle\n9.KBS \n"); 
 printf("\nEnter Destination\n"); 
 display_locs(); 
 scanf("%d",&l);  
 float price; 
  
 if(l>f) 
    price=ticket_prices[(l-f)-1]; 
 else if(l<f) 
    price=ticket_prices[(f-l)-1]; 
 else price=0; 
  
 if(s==1)  
    price=0.7*price; 
 else if(s==2) 
    price=0.5*price; 
 else if(s==3) 
    price=price; 
  
 t_count++;   
 ticket_print(price,m,f,l); 
 }while(l>f); 
           
} 
 
void pass_generate() 
{    int tp,m,v,i; 
     char id[4]={0}; 
 printf("\nEnter 1.Day Pass 2.Weekly Pass 3.Monthly Pass\n"); 
 scanf("%d",&tp); 
 printf("\nEnter Verification ID Type 1.Aadhar Card 2.DL 3.Voter Id\n"); 
 scanf("%d",&v); 
 if(v==1) 
 { 
  printf("\nEnter last four digit of Aadhar Card Number\n"); 
  scanf("%s",id); 
  //for(i=0;i<=4;i++) 
     //scanf("%c",&id[i]); 
 } 
 else if(v==2) 
 { 
  printf("\nEnter last four digit of DL Number\n"); 
  scanf("%s",id); 
  //for(i=0;i<=4;i++) 
     //scanf("%c",&id[i]); 
 } 
  else if(v==3) 
 { 
  printf("\nEnter last four digit of Voter ID Number\n"); 
  scanf("%s",id); 
  //for(i=0;i<=4;i++) 
     //scanf("%c",&id[i]); 
 } 
 printf("\nEnter payment method 1.Cash 2.UPI\n"); 
           
 scanf("%d",&m); 
  
 int price; 
 if(tp==1) 
    price=80; 
 else if(tp==2) 
    price=350; 
 else if(tp==3) 
    price=1200; 
  
 pass_print(price,m,id,v,tp); 
  
} 
 
void free_ticket() 
{ 
 int l,i; 
 char id[4]={0}; 
 //printf("\nEnter Destination 1.Agara\t2.Electronic 
City\n3.Koramangala\t4.Shantinagar\n5.BEL Circle\t6.Toll Gate\n7.Mysore Bank 
Circle\t8.KR Circle\n9.Majestic \n"); 
 printf("\nEnter Destination\n"); 
 display_locs(); 
 scanf("%d",&l); 
 printf("\nEnter Aadhar Card last four numbers\n"); 
 scanf("%s",id); 
 //for(i=0;i<4;i++) 
     //scanf("%c",&id[i]); 
  
 free_ticket_print(l,id); 
} 
 
           
void ticket_print(float price,int m,int f,int l) 
{ 
      printf("\n"); 
   
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
===================================="); 
      printf("\n"); 
   printf("\n\t\t\t\t\t  IRTC\t\t\n"); 
      printf("\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
   printf("\n\t\t\tOwned and Operated by the State Government\n"); 
   printf("\nDate: %s \t\t\t\tTime: %s\n",_DATE,TIME_); 
   printf("\nFrom: "); 
   switch(f) 
   { 
    case 1 : printf("Agara");break; 
    case 2 : printf("Electronic City");break; 
    case 3 : printf("Koramangala");break; 
    case 4 : printf("Shantinagar");break; 
    case 5 : printf("Mahalakshmi Layout");break; 
    case 6 : printf("Malleshwaram");break; 
    case 7 : printf("Forum Checkpost");break; 
    case 8 : printf("BEL Circle");break; 
    case 9 : printf("Toll Gate");break; 
    case 10 : printf("Mysore Bank Circle");break; 
    case 11 : printf("KR Circle");break; 
    case 12 : printf("Majestic");break; 
    default : printf(" ");break; 
   } 
   printf("\nTicket to "); 
           
   switch(l) 
   { 
    case 1 : printf("Agara");break; 
    case 2 : printf("Electronic City");break; 
    case 3 : printf("Koramangala");break; 
    case 4 : printf("Shantinagar");break; 
    case 5 : printf("Mahalakshmi Layout");break; 
    case 6 : printf("Malleshwaram");break; 
    case 7 : printf("Forum Checkpost");break; 
    case 8 : printf("BEL Circle");break; 
    case 9 : printf("Toll Gate");break; 
    case 10 : printf("Mysore Bank Circle");break; 
    case 11 : printf("KR Circle");break; 
    case 12 : printf("Majestic");break; 
    default : printf(" ");break; 
   } 
    
   printf("\n\t\t\t\tFare Cost: Rs.%.2f",price); 
   printf("\n\t\t\t\tPayment received through"); 
   m=m-1; 
   (m==1)?printf(" UPI "):printf(" Cash "); 
   printf("\n"); 
   
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
===================================="); 
      printf("\n"); 
       
      file_ticket_print(price,m,f,l); 
      printf("\nLocation ticket print:%s\n",_FILE_); 
           
} 
 
void pass_print(int price,int m,char id[4],int id_type,int tp) 
{  int i; 
    printf("\n"); 
     
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
===================================="); 
      printf("\n"); 
       printf("\n\t\t\t\t\t  IRTC\t\t\n"); 
      printf("\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
   printf("\n\t\t\tOwned and Operated by the State Government\n"); 
   printf("\nDate: %s \t\t\t\tTime: %s\n",_DATE,TIME_); 
 switch(tp) 
   { 
    case 1 : printf("\nDay Pass\n");break; 
    case 2 : printf("\nWeekly Pass\n");break; 
    case 3 : printf("\nMonthly Pass\n");break; 
    default : printf(" ");break; 
      } 
 printf("\nDate: %s \t\t Time: %s\n",_DATE,TIME_); 
 printf("\nPass Cost: Rs.%d",price); 
 switch(tp) 
   { 
    case 1 : printf("\nValid till 23:59PM\n");break; 
    case 2 : printf("\nValid till 7 days from date of purchase\n");break; 
    case 3 : printf("\nValid till 30 days from date of purchase\n");break; 
    default : printf(" ");break; 
      } 
           
 printf("\nPayment received through"); 
 m=m-1; 
 (m==1)?printf(" UPI "):printf(" Cash "); 
 //printf("\n"); 
 printf("\n\nVerification ID Type: "); 
  switch(id_type) 
   { 
    case 1 : printf("Aadhar Card");break; 
    case 2 : printf("Driving License");break; 
    case 3 : printf("Voter ID");break; 
    default : printf(" ");break; 
      } 
     printf(" Number (Last four Digits)\n"); 
     //printf("%s",id); 
  for(i=0;i<4;i++) 
         printf("%c",id[i]); 
     printf("\n"); 
      
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
===================================="); 
      printf("\n"); 
       
      file_pass_print(price,m,id,id_type,tp); 
      printf("\nLocation:%s\n",_FILE_); 
} 
 
void free_ticket_print(int l,char id[4]) 
{ 
 int i; 
           
 printf("\n"); 
  
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
==================================="); 
      printf("\n"); 
  printf("\n\t\t\t\t\t  IRTC\t\t\n"); 
      printf("\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
   printf("\n\t\t\tOwned and Operated by the State Government\n"); 
   printf("\nDate: %s \t\t\t\tTime: %s\n",_DATE,TIME_); 
 printf("\nWomen Empowerment Scheme Free Ticket\n"); 
 printf("\nTicket to "); 
   switch(l) 
   { 
    case 1 : printf("Agara");break; 
    case 2 : printf("Electronic City");break; 
    case 3 : printf("Koramangala");break; 
    case 4 : printf("Shantinagar");break; 
    case 5 : printf("Mahalakshmi Layout");break; 
    case 6 : printf("Malleshwaram");break; 
    case 7 : printf("Forum Checkpost");break; 
    case 8 : printf("BEL Circle");break; 
    case 9 : printf("Toll Gate");break; 
    case 10 : printf("Mysore Bank Circle");break; 
    case 11 : printf("KR Circle");break; 
    case 12 : printf("Majestic");break; 
    default : printf(" ");break; 
   } 
   printf("\n\nVerification ID Aadhar Card Number (Last four Digits\n"); 
   printf("\n"); 
           
   //printf("%s",id); 
      for(i=0;i<4;i++) 
         printf("%c",id[i]); 
     printf("\n"); 
      
printf("=================================================================
====================================\n"); 
      
printf("=================================================================
===================================="); 
      printf("\n"); 
} 
 
void file_ticket_print(int price,int m,int f,int l) 
{ 
 //file_print_default(); 
 FILE *ptr=fopen("print.txt","w"); 
 //fprintf(ptr,"%s","\n"); 
    
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
    
fprintf(ptr,"%s","=========================================================
============================================\n"); 
    //fprintf("\n"); 
 fprintf(ptr,"%s","\n\t\t\t\t\tICTC\t\t\n"); 
 fprintf(ptr,"%s","\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
 fprintf(ptr,"%s","\n\t\tOwned and run by the State Government\n"); 
 fprintf(ptr,"%s %s %s %s","\nDate: ",_DATE,"\t\t Time: ",TIME_); 
 fprintf(ptr,"%s"," From: "); 
  switch(f) 
   { 
    case 1 : fprintf(ptr,"%s","Agara");break; 
           
    case 2 : fprintf(ptr,"%s","Electronic City");break; 
    case 3 : fprintf(ptr,"%s","Koramangala");break; 
    case 4 : fprintf(ptr,"%s","Shantinagar");break; 
    case 5 : fprintf(ptr,"%s","Mahalakshmi Layout");break; 
    case 6 : fprintf(ptr,"%s","Malleshwaram");break; 
    case 7 : fprintf(ptr,"%s","Forum Checkpost");break; 
    case 8 : fprintf(ptr,"%s","BEL Circle");break; 
    case 9 : fprintf(ptr,"%s","Toll Gate");break; 
    case 10 : fprintf(ptr,"%s","Mysore Bank Circle");break; 
    case 11 : fprintf(ptr,"%s","KR Circle");break; 
    case 12 : fprintf(ptr,"%s","Majestic");break; 
    default : fprintf(ptr,"%c"," ");break; 
   } 
   
 fprintf(ptr,"%s","\nTicket to "); 
   switch(l) 
   { 
    case 1 : fprintf(ptr,"%s","Agara");break; 
    case 2 : fprintf(ptr,"%s","Electronic City");break; 
    case 3 : fprintf(ptr,"%s","Koramangala");break; 
    case 4 : fprintf(ptr,"%s","Shantinagar");break; 
    case 5 : fprintf(ptr,"%s","Mahalakshmi Layout");break; 
    case 6 : fprintf(ptr,"%s","Malleshwaram");break; 
    case 7 : fprintf(ptr,"%s","Forum Checkpost");break; 
    case 8 : fprintf(ptr,"%s","BEL Circle");break; 
    case 9 : fprintf(ptr,"%s","Toll Gate");break; 
    case 10 : fprintf(ptr,"%s","Mysore Bank Circle");break; 
    case 11 : fprintf(ptr,"%s","KR Circle");break; 
    case 12 : fprintf(ptr,"%s","Majestic");break; 
    default : fprintf(ptr,"%c"," ");break; 
   } 
           
  
   fprintf(ptr,"%s %d","\nFare Cost: Rs.",price); 
   fprintf(ptr,"%s","\nPayment received through"); 
   m=m-1; 
   (m==1)?fprintf(ptr,"%s"," UPI "):fprintf(ptr,"%s"," Cash "); 
   //fprintf("\n"); 
   
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
      
fprintf(ptr,"%s","=========================================================
============================================\n"); 
      //fprintf("\n"); 
      fclose(ptr); 
} 
 
void file_pass_print(int price,int m,char id[4],int id_type,int tp) 
{ 
 FILE *ptr=fopen("print.txt","w"); 
 //fprintf(ptr,"%s","\n"); 
    
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
    
fprintf(ptr,"%s","=========================================================
============================================\n"); 
    //fprintf("\n"); 
fprintf(ptr,"%s","\n\t\t\t\t\tICTC\t\t\n"); 
 fprintf(ptr,"%s","\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
 fprintf(ptr,"%s","\n\t\tOwned and Operated by the State Government\n"); 
 fprintf(ptr,"%s %s %s %s","\nDate: ",_DATE,"\t\t Time: ",TIME_); 
    switch(tp) 
   { 
           
    case 1 : fprintf(ptr,"%s","\nDay Pass\n");break; 
    case 2 : fprintf(ptr,"%s","\nWeekly Pass\n");break; 
    case 3 : fprintf(ptr,"%s","\nMonthly Pass\n");break; 
    default : fprintf(ptr,"%c"," ");break; 
      } 
 fprintf(ptr,"%s","\nDate: %s \t\t Time: %s\n",_DATE,TIME_); 
 fprintf(ptr,"%s %d","\nPass Cost: Rs.",price); 
  switch(tp) 
   { 
    case 1 : fprintf(ptr,"%s","""\nValid till 23:59PM\n");break; 
    case 2 : fprintf(ptr,"%s","\nValid till 7 days from date of purchase\n");break; 
    case 3 : fprintf(ptr,"%s","\nValid till 30 days from date of 
purchase\n");break; 
    default : fprintf(ptr,"%c"," ");break; 
      } 
 fprintf(ptr,"%s","\nPayment received through"); 
 m=m-1; 
 (m==1)?fprintf(ptr,"%s"," UPI "):fprintf(ptr,"%s"," Cash "); 
 //printf("\n"); 
 fprintf(ptr,"%s","\n\nVerification ID Type: "); 
  switch(id_type) 
   { 
    case 1 : fprintf(ptr,"%s","Aadhar Card");break; 
    case 2 : fprintf(ptr,"%s","Driving License");break; 
    case 3 : fprintf(ptr,"%s","Voter ID");break; 
    default : fprintf(ptr,"%c"," ");break; 
      } 
     fprintf(ptr,"%s"," Number (Last four Digits)\n"); 
     int i; 
     for(i=0;i<4;i++) 
         fprintf(ptr,"%c",id[i]); 
           
     //fprintf("\n"); 
      
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
      
fprintf(ptr,"%s","=========================================================
============================================\n"); 
      //fprintf("\n"); 
      fclose(ptr); 
} 
 
void file_free_ticket_print(int l,char id[4]) 
{ 
 //file_print_default(); 
 FILE *ptr=fopen("print.txt","w"); 
 //fprintf(ptr,"%s","\n"); 
    
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
    
fprintf(ptr,"%s","=========================================================
============================================\n"); 
    //fprintf("\n"); 
 fprintf(ptr,"%s","\n\t\t\t\t\tICTC\t\t\n"); 
 fprintf(ptr,"%s","\n\t\t\tINTER-CITY TRANSPORT CORPORATION\n"); 
 fprintf(ptr,"%s","\n\t\tOwned and Operated by the State Government\n"); 
 fprintf(ptr,"%s %s %s %s","\nDate: ",_DATE,"\t\t Time: ",TIME_); 
 fprintf(ptr,"%s","\nWomen Empowerment Scheme Free Ticket\n"); 
 fprintf(ptr,"%s","\nTicket to "); 
   switch(l) 
   { 
    case 1 : fprintf(ptr,"%s","Agara");break; 
    case 2 : fprintf(ptr,"%s","Electronic City");break; 
           
    case 3 : fprintf(ptr,"%s","Koramangala");break; 
    case 4 : fprintf(ptr,"%s","Shantinagar");break; 
    case 5 : fprintf(ptr,"%s","Mahalakshmi Layout");break; 
    case 6 : fprintf(ptr,"%s","Malleshwaram");break; 
    case 7 : fprintf(ptr,"%s","Forum Checkpost");break; 
    case 8 : fprintf(ptr,"%s","BEL Circle");break; 
    case 9 : fprintf(ptr,"%s","Toll Gate");break; 
    case 10 : fprintf(ptr,"%s","Mysore Bank Circle");break; 
    case 11 : fprintf(ptr,"%s","KR Circle");break; 
    case 12 : fprintf(ptr,"%s","Majestic");break; 
    default : fprintf(ptr,"%c"," ");break; 
   } 
   fprintf(ptr,"%s","\n\nVerification ID Aadhar Card Number (Last four Digits\n\n"); 
   //fprintf("\n"); 
   int i; 
     for(i=0;i<4;i++) 
         fprintf(ptr,"%c",id[i]); 
     //fprintf("\n"); 
      
fprintf(ptr,"%s","\n=======================================================
==============================================\n"); 
     
fprintf(ptr,"%s","=========================================================
============================================\n"); 
      //fprintf("\n"); 
      fclose(ptr); 
} 
 
void display_locs() 
{ 
 int i=0; 
 printf("\n"); 
           
 while(i<=11) 
 { 
  printf(" %d.%s\t",(i+1),loc[i]); 
        //if(i!=6) 
           //printf("\t"); 
  if(i%2!=0) 
    printf("\n"); 
  i++; 
 } 
} 
int main() 
{ 
 while(1) 
 {      printf("\t\t\tIRTC\t\t"); 
        printf("\n\tINTER-CITY TRANSPORT CORPORATION\n"); 
        printf("\n\tOwned and Operated by the State Government"); 
        //display_locs(); 
     printf("\n\t1.Ticket generate\t2.Pass generate\n\t3.Womens Welfare 
Scheme Ticket\t4.Ticket Count (for the day)\n"); 
     int ch; 
      
     scanf("%d",&ch); 
     switch(ch) 
     {case 1:ticket_generate();break; 
      case 2:pass_generate();break; 
      case 3:free_ticket();break; 
      case 4:printf("\nTickets sold on Date-%s Time-%s : 
%d\n",_DATE,TIME_,t_count); break; 
      default: printf("\nUnassigned Key\n");break; 
     }  
 } 
} 
