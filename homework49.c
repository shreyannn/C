#include <stdio.h>  /* Create a structure named book having members name, no of pages and price.
WAP to read name, pages and price of 5 books using array of structure.
Display the name, no of pages and price of most expensive book among those
books */

struct book{
    char* name[15];
    int pages;
    float price;
};

void function (struct book arr[]){             // first assume arr[0].price is the hightest
   for(int i=1; i<5; i++){
        if(arr[0].price < arr[i].price){                // imp step.
            arr[0].price=arr[i].price;                  //  "   "
        } 
   }
   printf("the most expensive book cost : %.2f\n",arr[0].price);

  //     continue frommmmmmmmmmmmmm here 

}

int main(){
    int i;
    struct book arr[5];
    for(i=0; i<5; i++){
    printf("enter the name of the book: ");
    scanf("%s",arr[i].name);
    printf("enter the no of pages :");
    scanf("%d",&arr[i].pages);
    printf("enter it's price :");
    scanf("%f",&arr[i].price);
    }

    function(arr);

    return 0;
}
//almost done