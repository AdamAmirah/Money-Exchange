#include<iostream>


	
extern	double money;
extern	int curr;
extern double BFC[][3];

 double CalcBuyBFC()
{
	
	double amount;
	switch(curr)
			{
			case 1:
					amount=BFC[0][2]*money;break;
				case 2:
					amount=BFC[1][2]*money;break;
				case 3:
					amount=(BFC[2][2]/100)*money;break;
				case 4:
					amount=money*(BFC[3][2]/100);break;
				case 5:
					amount=BFC[4][2]*money;break;
				case 6:
					amount=BFC[5][2]*money;break;
				case 7:
					amount=BFC[6][2]*money;break;
				case 8:
					amount=(BFC[7][2]/100)*money;break;
				case 9:
					amount=BFC[8][2]*money;break;
				case 10:
					amount=BFC[9][2]*money;break;
					
			}
			
			return amount;
}
	
