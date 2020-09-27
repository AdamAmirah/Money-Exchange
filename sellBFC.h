#include<iostream>



extern	double money;
extern	int curr;
extern double BFC[][3];

double CalcSellBFC()
{
	double amount;
		switch(curr)
			{
				case 1:
					amount=money/BFC[0][1];break;
				case 2:
					amount=money/BFC[1][1];break;
				case 3:
					amount=money/(BFC[2][1]/100);break;
				case 4:
					amount=(BFC[3][1]/100)*money;break;
				case 5:
					amount=money/BFC[4][1];break;
				case 6:
					amount=money/BFC[5][1];break;
				case 7:
					amount=money/BFC[6][1];break;
				case 8:
					amount=money/(BFC[7][1]/100);break;
				case 9:
					amount=money/BFC[8][1];break;
				case 10:
					amount=money/BFC[9][1];break;
					
			}
			
			return amount ;
}
