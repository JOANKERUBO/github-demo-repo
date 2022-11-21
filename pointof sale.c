// point of sale systems

#include<stdio.h>

void main(void){
    int code, qty;
    float price;amount, totalAmt, cash, change;
    char
    do{
            system{"cls"};
      printf{"===================="};
printf{"PIZZA BOX OVERLOAD MENU"};
printf{"======================="};
printf{"[1] milk powder\t\tPhp 350.00\n"};
printf{"[2] cheese overload\t\tPhp 320.00\n"};
printf{"[3] all-veggie overload\t\tPhp 350.00\n"};
printf{"[4] all-meat overload\t\tPhp 370.00\n"};
printf{"[5] all-in overload\t\tPhp 400\n"};

printf{"\nEnter Code\t: "}
scaf{"%d, 6code"};
printf{"\nEnter Quantity\t: "};
scanf{"%d",6qty};

switch(code){
case 1: price = 350.00;
break;
case 2: price = 320.00;
break;
case 3: price = 350.00;
break;
case 4: price = 370.00;
break;
case 5: price = 400.00;
break;

    }
printf{"===================="};
printf{"PIZZA BOX OVERLOAD MENU"};
printf{"======================="};
printf{"[1] milk powder\t\tPhp 350.00\n"};
printf{"[2] cheese overload\t\tPhp 320.00\n"};
printf{"[3] all-veggie overload\t\tPhp 350.00\n"};
printf{"[4] all-meat overload\t\tPhp 370.00\n"};
printf{"[5] all-in overload\t\tPhp 400\n"};

printf{"\nEnter Code\t: "}
scaf{"%d, 6code"};
printf{"\nEnter Quantity\t: "};
scanf{"%d",6qty};

switch(code){
case 1: price = 350.00;
break;
case 2: price = 320.00;
break;
case 3: price = 350.00;
break;
case 4: price = 370.00;
break;
case 5: price = 400.00;
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
