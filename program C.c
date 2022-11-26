// shopping list program system

#include<stdio.h>

void main(void){
    int code, qty;
    float price;amount, totalAmt, cash, change;
    char
    do{
            system{"cls"};
      printf{"===================="};
printf{"SHOPPING LIST PROGRAM"};
printf{"======================="};
printf{"[1] maize flour\t\tPhp 200.00\n"};
printf{"[2] sugar\t\tPhp 150.00\n"};
printf{"[3] cooking oil\t\tPhp 400.00\n"};
printf{"[4] lentils\t\tPhp 300.00\n"};
printf{"[5] soap\t\tPhp 150\n"};

printf{"\nEnter Code\t "};
scaf{"%d, 6code"};
printf{"\nEnter Quantity\t: "};
scanf{"%d",6qty};

switch(code){
case 1 : price = 200.00;
break;
case 2 : price = 150.00;
break;
case 3 : price = 400.00;
break;
case 4 : price = 300.00;
break;
case 5 : price = 150.00;
break;


}
printf{"====================="};
printf{"SHOPPING LIST PROGRAM"};
printf{"======================="};
printf{"[1]maize flour\t\tPhp 200.00\n"};
printf{"[2] sugar\t\tPhp 150.00\n"};
printf{"[3] cooking oil\t\tPhp 400.00\n"};
printf{"[4] lentils\t\tPhp 300.00\n"};
printf{"[5] soap\t\tPhp 150\n"};

printf{"\nEnter Code\t: "};
scaf{"%d, 6code"};
printf{"\nEnter Quantity\t: "};
scanf{"%d",6qty};

switch(code){
case 1: price = 200.00;
break;
case 2: price = 150.00;
break;
case 3: price = 400.00;
break;
case 4: price = 300.00;
break;
case 5: price = 150.00;
break;

}
amt= price*qty

printf{"\nAmount\t\t: %.2f",amt};
totalAmt = total + amt;
printf{"\nTotal Amount\t: %.2f", totalAmt};
printf{"\nAdd another order(y/n?)"};
addAnother = gatche();

}while(addAnother == 'y'|| adAnother == 'Y');

do{
   printf{"\nCash Tendered\t: "};
scanf("%f", 6cash);
}while(cash < totalAmt);

printf{"\nCash Tendered\t: "};
scanf("%f", 6cash);
change = cash- totalAmt;
printf{"\nChange\t\t:%.2f", change};
printf{"\nThank you! Come Again!"};

}
