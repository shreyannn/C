#include <stdio.h>


void board(int *arr);
void marking_board(int choice, int mark, int *arr );

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int i=1,player=1,choice;
    int mark;
    do{
    board(arr);
    player=(player%2) ? 1 : 2 ;
    printf("player %d, enter your move: ",player);
    scanf("%d",&choice);
    mark = (player==1) ? 1 : 0 ;
    marking_board(choice, mark,  arr);
    
    i++;
    player++;
    }while(i<=9);


    return 0;
}

void board(int *arr){
    
    printf("\n\n\n                       |     |     \n");
    printf("                    %d  |  %d  |  %d \n",arr[1],arr[2],arr[3]);
    printf("                  _____|_____|_____\n");
    printf("                       |     |     \n");
    printf("                    %d  |  %d  | %d  \n",arr[4],arr[5],arr[6]);
    printf("                  _____|_____|_____\n");
    printf("                       |     |     \n");
    printf("                    %d  |  %d  |  %d \n",arr[7],arr[8],arr[9]);
    printf("                       |     |     \n\n\n");

}

void marking_board(int choice , int mark, int *arr ){
    if (choice==1){
        arr[1]=mark;
    } 
    else if( choice==2){
        arr[2]=mark;
    }
    else if( choice==3){
        arr[3]=mark;
    }
    else if( choice==4){
        arr[4]=mark;
    }
    else if( choice==5){
        arr[5]=mark;
    }
    else if( choice==6){
        arr[6]=mark;
    }
    else if( choice==7){
        arr[7]=mark;
    }
    else if( choice==8){
        arr[8]=mark;
    } 
    else if( choice==9){
        arr[9]=mark;
    }
    else {
        printf("invalid move");
    }
}
