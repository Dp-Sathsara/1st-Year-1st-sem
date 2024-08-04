#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//phototypes--->>>>
int parthway();
int parthway1();
int parthway2();
int parthway3();
int parthway4();

int want();
int Monday_print_timetables();
int Mondayf_print();

int Monday_print();
int day_time_table();
int day_time_table1();
int day_time_table2();
int day_time_table3();
int day_time_table4();
int day_time_table5();
int day_time_table6();
int day_time_table7();
int day_time_table8();
int day_time_table9();

int day_time_table_tu();
int day_time_table_tu1();
int day_time_table_tu2();
int day_time_table_tu3();
int day_time_table_tu4();
int day_time_table_tu5();
int day_time_table_tu6();
int day_time_table_tu7();
int day_time_table_tu8();
int day_time_table_tu9();
int day_time_table1();

int day_time_table_w();
int day_time_table_w1();
int day_time_table_w2();
int day_time_table_w3();
int day_time_table_w4();
int day_time_table_w5();
int day_time_table_w6();
int day_time_table_w7();
int day_time_table_w8();
int day_time_table_w9();
int Wednessday_print();

int day_time_table_th();
int day_time_table_th1();
int day_time_table_th2();
int day_time_table_th3();
int day_time_table_th4();
int day_time_table_th5();
int day_time_table_th6();
int day_time_table_th7();
int day_time_table_th8();
int day_time_table_th9();
int Thursday_print();

int day_time_table_f();
int day_time_table_f1();
int day_time_table_f2();
int day_time_table_f3();
int day_time_table_f4();
int day_time_table_f5();
int day_time_table_f6();
int day_time_table_f7();
int day_time_table_f8();
int day_time_table_f9();
int Friday_print();

int main()
{
    int week_number;//input declaration
    char choise; //input declaration
    char y,n; //input declaration

   
   
    printf("\n\n\t\t  *************** WELCOME TO LECTURE TIME MANAGEMENT ***************\n\n");
    printf("\t\t1)-Monday\n\n\t\t2)-Tuesday\n\n\t\t3)-Wednesday\n\n\t\t4)-Thursday\n\n\t\t5)-Friday\t\t\n\n");
    printf("input week number:");
    scanf("%d",&week_number);
    


    switch(week_number)
    {
        case 1:
            //printf("answer:%d\n",result);
            parthway();
        break;

        case 2:
            //printf("x");
            parthway1();
        break;
            
        case 3:
            //printf("y");
            parthway2();
        break;

        case 4:
            //printf("z");
            parthway3();
        break;

        case 5:
            //printf("p");
            parthway4();
        break;

        default:
            printf("\nWARNING !\n");
            printf("PLEASE ENTER THE MONDAY TO FRIDAY WEEK NUMBER..............\n\n");
    }
    printf("\n\n\t\t-------------------------**^**-------------------------");
    return 0;
}

int parthway()
{
  int parthway;
  float time;
  

 

    printf("\n\t\t1-AMAT,PHYS,PMAT\t\t2-COSC,PHYS,PMAT\n\n\t\t3-ELEC,PHYS,PMAT\t\t4-AMAT,COSC,PMAT\n\n\t\t5-COSC,PMAT,STAT\t\t6-CHEM,COSC,PMAT\n\n\t\t7-AMAT,CHEM,PMAT\t\t8-COST,ELEC,PHYS\n\n\t\t9-AMAT,PMAT,STAT\t\t10-CHEM,COST,PMAT\n\n");
    printf("Input Your Pathway:\n\n");
    scanf("%d",&parthway);

    switch(parthway)
    {
        case 1:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[Now subject: AMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - A11 307]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
          
          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table();
            Monday_print_timetables();
            want();
        break;

        case 2:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");

          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table1();
            want();
            
        break;
            
        case 3:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[ELEC 11513]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n");
    
          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:ELEC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table2();
            want();
        break;

        case 4:

         printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[AMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - A11 307]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
          
          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,COSC,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table3();
            want();
        break;

        case 5:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<14.00)
          {
            printf("\t\t\t[STAT 11613]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(14.00<=time && time<16.00)
          {
            printf("\t\t\t[STAT 11632]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");
                
          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PMAT,STAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table4();
            want();
        break;

        case 6:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[CHEM 11612]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
                
          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[CHEM 11631 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Chemistry LAB]\n");
          
          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COSC,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table5();
          want();
        break;

        case 7:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[AMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - A11 307]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[CHEM 11612]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[CHEM 11631 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Chemistry LAB]\n");

          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");      
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,CHEM,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table6();
          want();
        break;

        case 8:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[ELEC 11513]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");
          
          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");      
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:COST,ELEC,PHYS]\n\n");
          printf("\n\n//-----------------------------------------------------------------------//\n");
          day_time_table7();
          want();
        break;

        case 9:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[AMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - A11 307]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<14.00)
          {
            printf("\t\t\t[STAT 11613]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(14.00<=time && time<16.00)
          {
            printf("\t\t\t[STAT 11632]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");
                
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,PMAT,STAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table8();
          want();
        break;

        case 10:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[CHEM 11612]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
          
          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[CHEM 11631 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Chemistry LAB]\n");
          
          }else if(16.00<=time && time<18.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 1)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table9();
          want();
        break;

        default:
            printf("error");
    }
  return parthway;
}
int parthway1()
{
  int parthway;
  float time;
    printf("\n\t\t1-AMAT,PHYS,PMAT\t\t2-COSC,PHYS,PMAT\n\n\t\t3-ELEC,PHYS,PMAT\t\t4-AMAT,COSC,PMAT\n\n\t\t5-COSC,PMAT,STAT\t\t6-CHEM,COSC,PMAT\n\n\t\t7-AMAT,CHEM,PMAT\t\t8-COST,ELEC,PHYS\n\n\t\t9-AMAT,PMAT,STAT\t\t10-CHEM,COST,PMAT\n\n");
    printf("Input Your Pathway:\n\n");
    scanf("%d",&parthway);

    switch(parthway)
    {
        case 1:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11512]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_tu();
            want();
        break;

        case 2:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PHYS,PMAT\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_tu1();
            want();
        break;
            
        case 3:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11512]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
    
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:ELEC,PHYSICS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_tu2();
            want();
        break;

        case 4:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
          
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");
            printf("\n\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,COSC,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_tu3();
            want();
        break;

        case 5:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");
                
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PMAT,STAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_tu4();
            want();
        break;

        case 6:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\tPMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\tNow it's time to rest.]\n\n");
                
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COSC,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_tu5();
          want();
        break;

        case 7:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,CHEM,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_tu6();
          want();
        break;

        case 8:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11512]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n\n");
                
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:COST,ELEC,PHYS]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_tu7();
          want();
        break;

        case 9:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n\n");
                
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,PMAT,STAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_tu8();
          want();
        break;

        case 10:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
          
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11023 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - Computer LAB]\n");;
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_tu9();
          want();
        break;

        default:
            printf("error");
    }
  return parthway1;
}                                                                                                                                                                                                                                                                                         
int parthway2()
{
  int parthway;
  float time;
    printf("\n\t\t1-AMAT,PHYS,PMAT\t\t2-COSC,PHYS,PMAT\n\n\t\t3-ELEC,PHYS,PMAT\t\t4-AMAT,COSC,PMAT\n\n\t\t5-COSC,PMAT,STAT\t\t6-CHEM,COSC,PMAT\n\n\t\t7-AMAT,CHEM,PMAT\t\t8-COST,ELEC,PHYS\n\n\t\t9-AMAT,PMAT,STAT\t\t10-CHEM,COST,PMAT\n\n");
    printf("Input Your Pathway:\n\n");
    scanf("%d",&parthway);

    switch(parthway)
    {
        case 1:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<12.00)
          {
            printf("PHYS 11532\n");
            printf("Lecture hall - B1 212\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("PHYS 11512\n");
            printf("Lecture hall - B1 212\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("Now it's time to rest.\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("PHYS 11521 (LAB - Group 2)\n");
            printf("Lecture hall - Physics LAB\n");
          
          }else
          {
            printf("There is no lecture at this time.\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_w();
            want();
        break;

        case 2:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("PHYS 11532\n");
            printf("Lecture hall - B1 212\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("Now it's time to rest.\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("PHYS 11521 (LAB - Group 2)\n");
            printf("Lecture hall - Physics LAB\n");

          }else
          {
            printf("There is no lecture at this time.\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_w1();
            want();
        break;
            
        case 3:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("ELEC 11513\n");
            printf("Lecture hall - A7 201\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("PHYS 11532\n");
            printf("Lecture hall - B1 212\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("Now it's time to rest.\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("PHYS 11521 (LAB - Group 2)\n");
            printf("Lecture hall - Physics LAB\n");
            printf("ELEC 11521 (LAB - Group 1)\n");
            printf("Lecture hall - ELEC LAB\n");
          }else
          {
            printf("There is no lecture at this time.\n");
          }
            printf("\n\t\t\t[Pathway:ELEC,PHYSICS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_w2();
            want();
        break;

        case 4:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");

          }else
          {
            printf("There is no lecture at this time.\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,COSC,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_w3();
            want();
        break;

        case 5:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");

          }else if(10.00<=time && time<13.00)
          {
            printf("STAT 11621 LAB\n");
            printf("Lecture hall - Computer LAB\n");

          }else
          {
            printf("There is no lecture at this time.\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PMAT,STAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_w4();
            want();
        break;

        case 6:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("CHEM 11601\n");
            printf("Lecture hall - B1 212\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");
                
          }else
          {
            printf("There is no lecture at this time.\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COSC,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_w5();
          want();
        break;

        case 7:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("CHEM 11601\n");
            printf("Lecture hall - B1 212\n");

          }else
          {
            printf("There is no lecture at this time.\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,CHEM,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_w6();
          want();
        break;

        case 8:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("ELEC 11513\n");
            printf("Lecture hall - A7 201\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("PHYS 11532\n");
            printf("Lecture hall - B1 212\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("Now it's time to rest.\n");

          }else if(13.00<=time && time<16.00)
          {
            printf("PHYS 11521 (LAB - Group 2)\n");
            printf("Lecture hall - Physics LAB\n");
            printf("ELEC 11521 (LAB - Group 1)\n");
            printf("Lecture hall - ELEC LAB\n");
                
          }else
          {
            printf("There is no lecture at this time.\n");
          }
          printf("\n\t\t\t[Pathway:COST,ELEC,PHYS]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_w7();
          want();
        break;

        case 9:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(10.00<=time && time<13.00)
          {
            printf("STAT 11621 LAB\n");
            printf("Lecture hall - Computer LAB\n");

          }else
          {
            printf("There is no lecture at this time.\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,PMAT,STAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_w8();
          want();
        break;

        case 10:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("CHEM 11601\n");
            printf("Lecture hall - B1 212\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("COSC/COST 11023\n");
            printf("Lecture hall - B1 212\n");
          
          }else
          {
            printf("There is no lecture at this time.\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_w9();
          want();
        break;

        default:
            printf("error");
    }
  return parthway1;
}
int parthway3()
{
  int parthway;
  float time;
    printf("\n\t\t1-AMAT,PHYS,PMAT\t\t2-COSC,PHYS,PMAT\n\n\t\t3-ELEC,PHYS,PMAT\t\t4-AMAT,COSC,PMAT\n\n\t\t5-COSC,PMAT,STAT\t\t6-CHEM,COSC,PMAT\n\n\t\t7-AMAT,CHEM,PMAT\t\t8-COST,ELEC,PHYS\n\n\t\t9-AMAT,PMAT,STAT\t\t10-CHEM,COST,PMAT\n\n");
    printf("Input Your Pathway:\n\n");
    scanf("%d",&parthway);

    switch(parthway)
    {
        case 1:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 3)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_th();
            want();
        break;

        case 2:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 3)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_th1();
            want();
        break;
            
        case 3:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 3)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:ELEC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_th2();
            want();
        break;

        case 4:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,COSC,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_th3();
            want();
        break;

        case 5:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PMAT,STAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_th4();
            want();
        break;

        case 6:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COSC,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_th5();
          want();
        break;

        case 7:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<18.00)
          {
             printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,CHEM,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_th6();
          want();
        break;

        case 8:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<12.00)
          {
            printf("\t\t\t[PHYS 11521 (LAB - Group 3)]\n\n");
            printf("\t\t\t[Lecture hall - Physics LAB]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:COST,ELEC,PHYS]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_th7();
          want();
        break;

        case 9:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<18.00)
          {
             printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_th8();
          want();
        break;

        case 10:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[COSC/COST 11012]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(15.00<=time && time<17.00)
          {
            printf("\t\t\t[COSC/COST 11023]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_th9();
          want();
        break;

        default:
            printf("error");
    }
  return parthway;
}
int parthway4()
{
  int parthway;
  float time;
    printf("\n\t\t1-AMAT,PHYS,PMAT\t\t2-COSC,PHYS,PMAT\n\n\t\t3-ELEC,PHYS,PMAT\t\t4-AMAT,COSC,PMAT\n\n\t\t5-COSC,PMAT,STAT\t\t6-CHEM,COSC,PMAT\n\n\t\t7-AMAT,CHEM,PMAT\t\t8-COST,ELEC,PHYS\n\n\t\t9-AMAT,PMAT,STAT\t\t10-CHEM,COST,PMAT\n\n");
    printf("Input Your Pathway:\n\n");
    scanf("%d",&parthway);

    switch(parthway)
    {
        case 1:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          
          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_f();
            want();
        break;

        case 2:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232\n]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_f1();
            want();
        break;
            
        case 3:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
    
          }else if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[ELEC 11521 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - ELEC LAB]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:ELEC,PHYS,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_f2();
            want();
        break;

        case 4:

          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          
          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:AMAT,COSC,PMAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_f3();
            want();
        break;

        case 5:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
                
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[STAT 11613]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
            printf("\n\t\t\t[Pathway:COSC,PMAT,STAT]\n\n");
            printf("\n//-----------------------------------------------------------------------//\n");
            day_time_table_f4();
            want();
        break;

        case 6:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
                
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[CHEM 11622]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COSC,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_f5();
          want();
        break;

        case 7:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[CHEM 11622]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,CHEM,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_f6();
          want();
        break;

        case 8:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(13.00<=time && time<16.00)
          {
            printf("\t\t\t[ELEC 11521 (LAB - Group 2)]\n\n");
            printf("\t\t\t[Lecture hall - ELEC LAB]\n");
                
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:COST,ELEC,PHYS]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_f7();
          want();
        break;

        case 9:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(8.00<=time && time<9.00)
          {
            printf("\t\t\t[AMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - A11 201]\n");

          }else if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");
                
          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[STAT 11613]\n\n");
            printf("\t\t\t[Lecture hall - A7 201]\n");
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:AMAT,PMAT,STAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_f8();
          want();
        break;

        case 10:
          printf("Enter your Time:");
          scanf("%f",&time);
          printf("\n\n//-----------------------------------------------------------------------//\n");
          printf("\n\t\t\t[Time : %0.2f]\n\n",time);
          if(9.00<=time && time<10.00)
          {
            printf("\t\t\t[PMAT 11223]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(10.00<=time && time<12.00)
          {
            printf("\t\t\t[PMAT 11232]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");

          }else if(12.00<=time && time<13.00)
          {
            printf("\t\t\t[Now it's time to rest.]\n\n");

          }else if(13.00<=time && time<15.00)
          {
            printf("\t\t\t[CHEM 11622]\n\n");
            printf("\t\t\t[Lecture hall - B1 212]\n");
          
          }else
          {
            printf("\t\t\t[There is no lecture at this time.]\n\n");
          }
          printf("\n\t\t\t[Pathway:CHEM,COST,PMAT]\n\n");
          printf("\n//-----------------------------------------------------------------------//\n");
          day_time_table_f9();
          want();
        break;

        default:
            printf("error");
    }
  return parthway;
}

int want()
{
    int choise,y,n;
    
            printf("\nDid you get what you wanted ?\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            printf("choise: \n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                    for ( int loop = 0; loop < 1; ++loop) {
                        for ( int each = 0; each < 4; ++each) {
                        printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                            sleep ( 1);
                        }
                           }
                           printf ( "\n");
                  }
                  else
                  {
                    for ( int loop = 0; loop < 1; ++loop) {
                        for ( int each = 0; each < 4; ++each) {
                           printf ( "\rSorry try again & Thank you%.*s   \b\b\b", each, "...");
                                fflush ( stdout);//force printing as no newline in output
                                sleep ( 1);
                                    }
                                }
                        printf ( "\n");
                  }
}
int Monday_print_timetables()
{
    int choise,y,n;
           printf("\n\nDid you print the time table ?\n\n");
            printf("\t\t1-TODAY TIME TABLE\t\t2-FULL TIME TABLE\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                    for ( int loop = 0; loop < 1; ++loop) {
                        for ( int each = 0; each < 4; ++each) {
                        printf ( "\rPrinting%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                            sleep ( 1);
                        }
                           }
                           printf ( "\n");
                           Monday_print();
                           printf("Look The 'C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs' folder\n\n");
                  }
                  else
                  {
                    for ( int loop = 0; loop < 1; ++loop) {
                        for ( int each = 0; each < 4; ++each) {
                           printf ( "\rPrinting%.*s   \b\b\b", each, "...");
                                fflush ( stdout);//force printing as no newline in output
                                sleep ( 1);
                                    }
                                }
                        printf ( "\n");
                        Mondayf_print();
                        printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
                        printf("\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
                        printf("\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
                        printf("\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
                        printf("\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
                        printf("\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
                        printf("\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
                        printf("\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
                        printf("\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
                        printf("\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");




                  }
}

//Monday functions
int day_time_table()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[AMAT 11232]\t[A11 307]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 1)]\t[Physics LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}   
int day_time_table1()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:COSC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 1)]\n\n"); 
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                    
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
} 
int day_time_table2()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:ELEC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[ELEC 11513]\t[A7 201]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 1)]\t[Physics LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table3()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:AMAT,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[AMAT 11232]\t[A11 307]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table4()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:COSC,PMAT,STAT]\n\n");
                    printf("\n\n\t[time:13.00-14.00]\t[STAT 11613]\t[A11 201]\n\n"); 
                    printf("\n\t[time:14.00-16.00]\t[STAT 11632]\t[A11 201]\n\n");
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table5()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:CHEM,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[CHEM 11612]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[CHEM 11631 (LAB - Group 1)]\t[Chemistry LAB]\n\n");
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table6()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:AMAT,CHEM,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[AMAT 11232]\t[A11 307]\n\n");
                    printf("\n\t[time:10.00-12.00]\t[CHEM 11612]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[CHEM 11631 (LAB - Group 1)]\t[Chemistry LAB]\n\n");
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table7()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:COST,PHYS,ELEC]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[ELEC 11513]\t[A7 201]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 1)]\t[Physics LAB]\n\n");
                    printf("\n\t[time:16.00-18.00]\t[COSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table8()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:AMAT,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[AMAT 11232]\t[A11 307]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-14.00]\t[STAT 11613]\t[ A11 201]\n\n");
                    printf("\n\t[time:14.00-16.00]\t[STAT 11632]\t[ A11 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table9()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Monday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[CHEM 11612]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\tCHEM 11631 (LAB - Group 1)]\t[Chemistry LAB]\n\n");
                    printf("\n\t[time:16.00-18.00]\tCOSC/COST 11023 (LAB - Group 1)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
} 
int Monday_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Monday.txt", "w");
                    fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    fprintf(fp,"\n\n\t[time:8.00-10.00]\t[AMAT 11232]\t[A11 307]\n\n");
                    fprintf(fp,"\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    fprintf(fp,"\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 1)]\t[Physics LAB]\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
} 
int Mondayf_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Full.txt", "w");
                    fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
   fprintf(fp,"\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
   fprintf(fp,"\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
   fprintf(fp,"\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
   fprintf(fp,"\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
   fprintf(fp,"\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
   fprintf(fp,"\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
   fprintf(fp,"\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
} 



//Tuesday functions
int day_time_table_tu()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\t[time:10.00-12.00]\t[PHYS 11512]\t[B1 212]\n\n");  
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[AMAT 11223]\t[A7 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu1()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:COSC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11232]\t[ B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu2()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Parthway:ELEC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\t[time:10.00-12.00]\t[PHYS 11512]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu3()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:AMAT,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[AMAT 11223]\t[A7 201]\n\n"); 
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu4()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:PMAT,COSC,STAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu5()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:CHEM,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu6()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:AMAT,CHEM,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[AMAT 11223]\t[A7 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu7()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:COST,PHYS,ELEC]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PHYS 11512]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu8()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:AMAT,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[AMAT 11223]\t[A7 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_tu9()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Tuesday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11023 (LAB - Group 2)]\t[Computer LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int Tuesday_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Full.txt", "w");
                     fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
   fprintf(fp,"\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
   fprintf(fp,"\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
   fprintf(fp,"\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
   fprintf(fp,"\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
   fprintf(fp,"\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
   fprintf(fp,"\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
   fprintf(fp,"\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
}

//Wednessday functions
int day_time_table_w()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PHYS 11532]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 2)]\t[Physics LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w1()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:COSC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PHYS 11532]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 2)]\t[Physics LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w2()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:ELEC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[ELEC 11513]\t[ A7 201]\n\n"); 
                    printf("\n\n\t[time:10.00-12.00]\t[PHYS 11532]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 2)]\t[Physics LAB]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[ELEC 11521 (LAB - Group 1)]\t[ELEC LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w3()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:AMAT,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w4()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:COSC,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:10.00-13.00]\t[STAT 11621 LAB]\t[Computer LAB]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w5()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:CHEM,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[CHEM 11601]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n");

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w6()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:AMAT,CHEM,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[CHEM 11601]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w7()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:COST,PHYS,ELEC]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[ELEC 11513]\t[A7 201]\n\n");
                    printf("\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n"); 
                    printf("\n\t[time:10.00-12.00]\t[PHYS 11532]\t[B1 212]\n\n");
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[PHYS 11521 (LAB - Group 2)]\t[Physics LAB]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[ELEC 11521 (LAB - Group 1)]\t[ELEC LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w8()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:AMAT,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:10.00-13.00]\t[STAT 11621 LAB]\t[Computer LAB]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_w9()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Wednesday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[CHEM 11601]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:9.00-10.00]\t[COSC/COST 11023]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int Wednessday_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Full.txt", "w");
                     fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
   fprintf(fp,"\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
   fprintf(fp,"\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
   fprintf(fp,"\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
   fprintf(fp,"\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
   fprintf(fp,"\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
   fprintf(fp,"\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
   fprintf(fp,"\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
}


//thursday functions
int day_time_table_th()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-12.00]\t[PHYS 11521 (LAB - Group 3)]\t[Physics LAB]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th1()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:COSC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-12.00]\t[PHYS 11521 (LAB - Group 3)]\t[Physics LAB]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[B1 212]\n\n");
                    printf("\n\t[time:15.00-17.00]\t[COSC/COST 11023]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th2()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:ELEC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-12.00]\t[PHYS 11521 (LAB - Group 3)]\t[ Physics LAB]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th3()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:AMAT,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[B1 212]\n\n"); 
                    printf("\n\t[time:15.00-17.00]\t[COSC/COST 11023]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th4()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:COSC,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[B1 212]\n\n"); 
                    printf("\n\t[time:15.00-17.00]\t[COSC/COST 11023]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th5()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:CHEM,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[B1 212]\n\n");
                    printf("\n\n\t[time:15.00-17.00]\t[COSC/COST 11023]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th6()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:AMAT,CHEM,PMAT]\n\n");
                    printf("\n\n\t[There is no lecture at this time.]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th7()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:COST,PHYS,ELEC]\n\n");
                    printf("\n\n\t[time:9.00-12.00]\t[PHYS 11521 (LAB - Group 3)]\t[Physics LAB]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[B1 212]\n\n");
                    printf("\n\t[time:15.00-17.00]\t[COSC/COST 11023]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th8()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[There is no lecture at this time.]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_th9()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Thursday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[time:13.00-15.00]\t[COSC/COST 11012]\t[ B1 212]\n\n"); 
                    printf("\n\t[time:15.00-17.00]\t[COSC/COST 11023]]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int Thursday_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Full.txt", "w");
                     fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
   fprintf(fp,"\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
   fprintf(fp,"\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
   fprintf(fp,"\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
   fprintf(fp,"\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
   fprintf(fp,"\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
   fprintf(fp,"\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
   fprintf(fp,"\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
}

//Friday functions
int day_time_table_f()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[AMAT 11223]\t[A11 201]\n\n"); 
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n");

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f1()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:COSC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f2()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:ELEC,PHYS,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-16.00]\t[ELEC 11521 (LAB - Group 2)]\t[ELEC LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f3()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:AMAT,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[AMAT 11223]\t[A11 201]\n\n"); 
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n"); 

                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f4()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:COSC,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n"); 
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n");
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[STAT 11613]\t[A7 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f5()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Parthway:CHEM,COSC,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n"); 
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[CHEM 11622]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f6()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:AMAT,CHEM,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[AMAT 11232]\t[A11 201]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n");  
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[CHEM 11622]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f7()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:COST,PHYS,ELEC]\n\n");
                    printf("\n\n\t[time:13.00-16.00]\t[ELEC 11521 (LAB - Group 2)]\t[ELEC LAB]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f8()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:AMAT,STAT,PMAT]\n\n");
                    printf("\n\n\t[time:8.00-9.00]\t[AMAT 11232]\t[A11 201]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n");  
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[STAT 11613]\t[A7 201]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int day_time_table_f9()
{
    int choise,y,n;
           printf("\n\nDid you want today time table\n\n");
            printf("\t\t1-YES\t\t2-NO\n\n");
            scanf("%d",&choise);
                if(choise==1)
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rProcessing%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                    printf("\n\t\t[Friday]\t[Pathway:CHEM,COST,PMAT]\n\n");
                    printf("\n\n\t[time:9.00-10.00]\t[PMAT 11223]\t[B1 212]\n\n");
                    printf("\n\t[time:10.00-12.00]\t[PMAT 11232]\t[B1 212]\n\n");
                    printf("\n\t[time:12.00-13.00]\t[INTERVAL TIME]\n\n");
                    printf("\n\t[time:13.00-15.00]\t[CHEM 11622]\t[B1 212]\n\n");
                  }
                  else 
                  {
                     for ( int loop = 0; loop < 1; ++loop) 
                    {
                        for ( int each = 0; each < 4; ++each)
                        {
                            printf ( "\rThank you%.*s   \b\b\b", each, "...");
                            fflush ( stdout);//force printing as no newline in output
                                 sleep ( 1);
                        }
                    }
                    printf ( "\n");
                  }
}
int Friday_print()
{
    FILE *fp;
    fp=fopen("C:/Users/Sandavi/3D Objects/COSC_11023/VSCODE/Time tables outputs/Full.txt", "w");
                     fprintf(fp,"\n\t\t[Monday]\t[Parthway:AMAT,PHYS,PMAT]\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\t[Time table]\n");
   fprintf(fp,"\t\t\t\t\t\t\t[ACADAMIC YEAR 2021/2022-PHYSICAL SCIENCE]\n\n");
   fprintf(fp,"\t\t[8.00-8.55]\t[9.05-9.55]\t[10.05-10.55]\t[11.05-11.55]\t[12.00-13.00]\t[13.00-13.55]\t[14.05-14.55]\t[15.05-15.55]\t[16.05-16.55]\t[17.05-17.55]\t\n\n");
   fprintf(fp,"\t\n[Monday]\t[AMAT-11232 \t AMAT-11232]\t[CHEM-11612]\t[CHEM-11612]\t[INTERVAL]\t[STAT-11613]\t[STAT-11632]\t[STAT-11632]\t[COSC-LAB(G1)]\t[COSC-LAB(G1)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t[ELEC-11513]\t\t\t\t\t[PHY-lab(G1)\t PHY-lab(G1) \t PHY-lab(G1)]\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-lab(G1)\t CHEM-lab(G1) \t CHEM-lab(G1)]\n\n\n");
   fprintf(fp,"\t\n[Tuesday]\t[PMAT-11223]\t[PMAT-11223]\t[PHYS-11512]\t[PHYS-11512]\t[INTERVAL]\t[AMAT-11223 \t AMAT-11223]\t\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[COSC-lab(G2) \t COSC-lab(G2)]\t\n\n\n");
   fprintf(fp,"\t\n[Wednesday]\t[CHEM-11601]\t[COSC-11023]\t[PHYS-11532]\t[PHYS-11532]\t[INTERVAL]\t[PHYS-LAB(G2)\t PHYS-LAB(G2) \tPHYS-LAB(G2)]\t\t\n");
   fprintf(fp,"\t\t\t\t\t\t[STAT -LAB]\t\t\t\t\t[ELEC-LAB(G1)] \t ELEC-LAB(G1) \t ELEC-LAB(G1)]\n\n\n");
   fprintf(fp,"\t\n[Thursday]\t[PHYS-LAB(G3) \t PHYS-LAB(G3) \t [PHYS-LAB(G3)]\t\t\t[INTERVAL]\t[COSC-11012 \t COSC-11012]\t[COSC-11032 \t COSC-11032]\t\n\n\n");
   fprintf(fp,"\t\n[Friday]\t\t\t[PMAT-11232] \t[PMAT-11232 \t PMAT-11232]\t[INTERVAL]\t[ELEC-LAB(G2) \t ELEC-LAB(G2) \t ELEC-LAB(G2)]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[CHEM-11622 \t CHEM-11622]\t\n");
   fprintf(fp,"\t\t\t\t\t\t\t\t\t\t\t\t[STAT-11613 \t STAT-11613]\t\n\n\n");
    //fprintf(fp,"reed");

    fclose(fp);
}

