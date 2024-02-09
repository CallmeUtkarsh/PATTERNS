#include<stdio.h>

int main(){
    //*****
    //*****
    //*****
    //*****
    //*****
    for(int i=1;i<=5;i++){              //outer loop for columns
        for(int j=1;j<=5;j++){          //inner loop for rows                     
            printf("*");                                        
        }
        printf("\n");
    }
    printf("\n");

    // //*
    // //**
    // //***
    // //****
    // //*****
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // *****
    // ****
    // ***
    // **
    // *
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // //123456
    // //12345
    // //1234
    // //123
    // //12
    // //1
    for(int i=6;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

    //  //1
    //  //12
    //  //123
    //  //1234
    //  //12345
    //  //123456
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

    // //    *
    // //   **
    // //  ***
    // // ****
    // //*****
    int rows;
    printf("number of rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i+j<=rows){
                printf(" ");
                }
            else{
                printf("*");
            }    
            }
            printf("\n");
        }

    // // 1
    // // 22
    // // 333
    // // 4444
    // // 55555    
    int rows2;
    printf("print number of rows :");
    scanf("%d",&rows2);
    for(int i=1;i<=rows2;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    // // 1
    // // 23
    // // 456
    // // 78910
    // // 1112131415
    int rows3;
    int x=0;
    printf("enter number of rows :");
    scanf("%d",&rows3);
    for(int i=1;i<=rows3;i++){
        for(int j=1;j<=i;j++){
            x++;
            printf("%d",x);
        }
        printf("\n");
    }
}
    //       *
    //      * *
    //     * * *
    //    * * * *
    //   * * * * *


    // a
    // ab
    // abc
    // abcd
    // abcde


                                                            