#include<iostream>



extern	double money;
extern	int curr;
extern double NS[][3];

double CalcSellNS()
{
	double amount;
		switch(curr)
			{
				case 1:
					amount=money/NS[0][1];break;
				case 2:
					amount=money/NS[1][1];break;
				case 3:
					amount=money/(NS[2][1]/100);break;
				case 4:
					amount=(NS[3][1]/100)*money;break;
				case 5:
					amount=money/NS[4][1];break;
				case 6:
					amount=money/NS[5][1];break;
				case 7:
					amount=money/NS[6][1];break;
				case 8:
					amount=money/(NS[7][1]/100);break;
				case 9:
					amount=money/NS[8][1];break;
				case 10:
					amount=money/NS[9][1];break;
					
			}
			return amount ;
}
