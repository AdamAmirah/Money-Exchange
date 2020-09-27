 #include<iostream>


	
extern	double money;
extern	int curr;
extern double Vital[][3];

 double CalcBuyVital()
{
	
	double amount;
	switch(curr)
			{
			case 1:
					amount=Vital[0][2]*money;break;
				case 2:
					amount=Vital[1][2]*money;break;
				case 3:
					amount=(Vital[2][2]/100)*money;break;
				case 4:
					amount=money*(Vital[3][2]/100);break;
				case 5:
					amount=Vital[4][2]*money;break;
				case 6:
					amount=Vital[5][2]*money;break;
				case 7:
					amount=Vital[6][2]*money;break;
				case 8:
					amount=(Vital[7][2]/100)*money;break;
				case 9:
					amount=Vital[8][2]*money;break;
				case 10:
					amount=Vital[9][2]*money;break;
					
			}
			
			return amount;
}
	
