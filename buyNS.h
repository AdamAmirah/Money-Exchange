#include<iostream>


	
extern	double money;
extern	int curr;
extern double NS[][3];

 double CalcBuyNS()
{
	
	double amount;
	switch(curr)
			{
			case 1:
					amount=NS[0][2]*money;break;
				case 2:
					amount=NS[1][2]*money;break;
				case 3:
					amount=(NS[2][2]/100)*money;break;
				case 4:
					amount=money*(NS[3][2]/100);break;
				case 5:
					amount=NS[4][2]*money;break;
				case 6:
					amount=NS[5][2]*money;break;
				case 7:
					amount=NS[6][2]*money;break;
				case 8:
					amount=(NS[7][2]/100)*money;break;
				case 9:
					amount=NS[8][2]*money;break;
				case 10:
					amount=NS[9][2]*money;break;
					
			}
			
			return amount;
}

