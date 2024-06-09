#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a, b, random_number;
    int v[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int x, o;


    // 初始化隨機數生成器
    srand(time(NULL));
    
    // 生成一個 0 到 100 之間的隨機數
    random_number = rand() % 101;
    
    // 要求 player1 輸入一個數字
    printf("Player1, enter a number: ");
    scanf("%d", &a);
    
    // 要求 player2 輸入一個數字
    printf("Player2, enter a number: ");
    scanf("%d", &b);
    
    // 顯示隨機數
    printf("The random number is: %d\n", random_number);
    
    // 判斷誰的數字更接近隨機數
    int diff_a = abs(a - random_number);
    int diff_b = abs(b - random_number);
    
    if (diff_a < diff_b) {
        printf("Player1 is closer to the random number.\n");
    } else if (diff_b < diff_a) {
        printf("Player2 is closer to the random number.\n");
    } else {
        printf("Both players are equally close to the random number.\n");
    }

    //印出九宮格
    int i , j;
    for(i = 0; i <3; i++){
        for(j = 0; j<3; j++){
            printf("%d",v[i][j]);
        }
        printf("\n");
    }
    
    if(diff_a < diff_b){
        switch (1)
        {
        case 1:{
            printf("please where did you wanna put?");
            scanf("%d",x);
        }



            break;
        
        default:
            break;
        }
    }
    
    return 0;
}
