#include<iostream>



extern	double money;
extern	int curr;
extern double Vital[][3];

double CalcSellVital()
{
	double amount;
		switch(curr)
			{
				case 1:
					amount=money/Vital[0][1];break;
				case 2:
					amount=money/Vital[1][1];break;
				case 3:
					amount=money/(Vital[2][1]/100);break;
				case 4:
					amount=(Vital[3][1]/100)*money;break;
				case 5:
					amount=money/Vital[4][1];break;
				case 6:
					amount=money/Vital[5][1];break;
				case 7:
					amount=money/Vital[6][1];break;
				case 8:
					amount=money/(Vital[7][1]/100);break;
				case 9:
					amount=money/Vital[8][1];break;
				case 10:
					amount=money/Vital[9][1];break;
					
			}
			return amount ;
}
