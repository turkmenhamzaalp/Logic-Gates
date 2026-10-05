#include <stdio.h>
#include <stdlib.h>

int and_gate(int data1,int data2);
int or_gate(int data1,int data2);
int if_gate(int data1,int data2);
int if_and_only_if(int data1,int data2);
int exlusive_or(int data1,int data2);
void menu();
int main(){
    menu();
    getchar();
    getchar();
}
void menu (){
    int data1 , data2;
    int choice = 0;
    do
    {
        printf("Choice Ur Gate Press 0 To Exit\n");
        printf("1. Press 1 To AND Gate.\n2. Press 2 To OR Gate.\n3. Press 3 To IF Gate\n4. Press 4 To IF AND ONLY IF Gate.\n5. Press 5 To EXCLUSIVE OR Gate.\n");
        printf("Your Chois : ");
        scanf("%d",&choice);
        if (choice < 0 || choice > 5) {
            printf("Please enter a number between 1 and 3.\n");
    }        
    } while (choice > 5 || choice < 0);
    if (choice == 0){
        printf("program exiting ... \n");
        return;
    }
    printf("Enter Data1 And Data2 \n");
    while ((data1 != 0 && data1 != 1 ) || (data2 != 1 && data2 != 0)){ 
            printf("Data1:");
            scanf("%d",&data1);
            printf("Data2:");
            scanf("%d",&data2);
            if ((data1 != 0 && data1 != 1 ) || (data2 != 1 && data2 != 0)){ 
                printf("Please Enter 1 Or 0 :\n");
        }
        }    
    switch (choice){
    case 1:
        and_gate(data1,data2);
        break;
    case 2:
        or_gate(data1,data2);
        break;
    case 3:
        if_gate(data1,data2);
        break;
    case 4:
        if_and_only_if(data1,data2);
        break;
    case 5:
        exlusive_or(data1,data2);
        break;
    }
}
int and_gate(int data1,int data2){
    if (data1 == 1 && data2 == 1){
        printf("data1 & data2 AND gate is : 1");
        return 1;
    }
    printf("data1 & data2 AND gate is : 0");
    return 0;
}
int or_gate(int data1,int data2){
    if (data1 == 0 && data2 == 0){
        printf("Data1 and Data2 OR Gate = 0");
        return 0;
    }
    printf("Data1 and Data2 OR Gate = 1");
    return 1;
}
int if_gate(int data1,int data2){
    if (data1 ==1 && data2 == 0)
    {
        printf("Data1 and Data 2 IF Gate = 0");
        return 0;
    }
    printf("Data1 and Data2 IF Gate = 1");
    return 1;
}
int if_and_only_if(int data1,int data2){
    if ((data1 == 1 && data2 == 0)||(data1 == 0 && data2 == 1)){
        printf("Data1 and Data 2 IF AND ONLY IF Gate = 0");
        return 0;
    }
    printf("Data1 and Data2 IF AND ONLY IF Gate = 1");
    return 1;
}
int exlusive_or(int data1,int data2){
    if ((data1 == 1 && data2 == 1)||(data1 == 0 && data2 == 0)){
        printf("Data1 and Data2 EXCLUSIVE OR Gate = 0");
        return 0;
    }
    printf("Data1 and Data2 EXCLUSIVE OR Gate = 1");
    return 1;
}
