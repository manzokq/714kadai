

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"

//

/*
第一問
(1)10000
(2)1001111
(3)111110

第二問
(1)1fe
(2)fd
(3)630

第三問

char -128〜127
int  -2147483648〜2147483647


第四問

�@

第五問

34回

第六問

20回

第七問

30

第八問

20

第九問

void




*/

//第十問
float kyori(float x1, float y1, float x2, float y2);


//第十一問
struct Card
{
private:
	
	char cardname[12];
	char cardnumber;
	char aa[12];
public:

	void cardSet(int i)
	{
		
		if (i >= 0 && i < 52)
		{
			switch (i % 4)
			{
			case 0:
				//char cardname[10] = "スペード";
				strcpy_s(cardname, "スペードの");
				//sprintf(cardname, "%d", "スペード");
				
				cardnumber = '0' + i % 13 + 1;
				strcpy_s(aa, cardnumber);
				//card[i] =str2;

				break;

			case 1:
				//char cardname[10] = "ハート";
				strcpy_s(cardname, "ハートの");
				//sprintf(cardname, "%d", "ハート");
				cardnumber = '0'+ i % 13 + 1;
				break;

			case 2:
				//char cardname[10] = "ダイヤ";
				strcpy_s(cardname, "ダイヤの");
				//sprintf(cardname, "%d", "ダイヤ");
				cardnumber = '0' + i % 13 + 1;
				break;

			case 3:
				//char cardname[10] = "クラブ";
				strcpy_s(cardname, "クラブの");//
				//sprintf(cardname, "%d", "クラブ");
				cardnumber = '0' + i % 13 + 1;
				break;


			default:
				break;
			}

		}
		/*
		else if (i == 52)
		{
			cardnumber = 666;
			strcpy_s(cardname, "ジョーカー");
			//sprintf(cardname, "%d", "ジョーカー");
		}
		*/

	}

	char* View()
	{
		//char r[50];
		char* r=NULL;
		r = (char*)malloc(sizeof(char) * 50);

		char* aaaa = (char*)cardnumber;
		strcat_s(cardname,cardnumber);// (char*)cardnumber);
		if (r == NULL) {
			std::cout<<"配列作成失敗\n";
		}
		else

		
	
			//r = cardname;
			strcpy_s(r,12,cardname);
		
			

		return r;
	}


};

struct  Yamahuda
{
private:
	std::string a[53];

	char* str[53];
public:


	Card card;

	void deck()
	{

		
		for (int i = 0; i < 53; i++)
		{
			card.cardSet(i);
			//card.View();
			strcpy_s(str[i] ,50,card.View());
			std::cout << str[i];
		}
	}

	void yamahuda_view()
	{
		for (int i = 0; i < 53; i++)
		{
		
		}
	}



};


int main() 
{
	Card a;
	Yamahuda yamahuda;

	std::string aa[53];
	
	for (int i = 0; i < 53; i++)
	{
		a.cardSet(i);
		std::cout<< a.View();
		//a.View();
	}
	
	
	//aa[1] = a.View();
	//std::cout << aa[1];
	//yamahuda.deck();

	//yamahuda.yamahuda_view();

	return 0;
}

//第十問
float kyori(float x1, float y1,float x2,float y2)
{

	float r = 0;

	r = sqrt((x2 - x1)* (x2 - x1) + (y2 - y1)* (y2 - y1));


	return r;
}


