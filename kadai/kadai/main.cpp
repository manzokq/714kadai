

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"

//

/*
����
(1)10000
(2)1001111
(3)111110

����
(1)1fe
(2)fd
(3)630

��O��

char   1
int    4
float  4
double 8


��l��

�@

��ܖ�

34��

��Z��

20��

�掵��

30

�攪��

20

����

void




*/

//��\��
float kyori(float x1, float y1, float x2, float y2);


//��\���
struct Card
{
private:
	
	char cardname[12];
	int cardnumber;
	//char aa[12];
public:

	void cardSet(int i)
	{
		
		if (i >= 0 && i < 52)
		{
			switch (i % 4)
			{
			case 0:
				//char cardname[10] = "�X�y�[�h";
				strcpy_s(cardname, "�X�y�[�h��");
				//sprintf(cardname, "%d", "�X�y�[�h");
				
				cardnumber =  i % 13 + 1;
				
				//card[i] =str2;

				break;

			case 1:
				//char cardname[10] = "�n�[�g";
				strcpy_s(cardname, "�n�[�g��");
				//sprintf(cardname, "%d", "�n�[�g");
				cardnumber = i % 13 + 1;

				break;

			case 2:
				//char cardname[10] = "�_�C��";
				strcpy_s(cardname, "�_�C����");
				//sprintf(cardname, "%d", "�_�C��");
				cardnumber = i % 13 + 1;

				break;

			case 3:
				//char cardname[10] = "�N���u";
				strcpy_s(cardname, "�N���u��");//
				//sprintf(cardname, "%d", "�N���u");
				cardnumber = i % 13 + 1;

				break;


			default:
				break;
			}

		}
		
		else if (i == 52)
		{
			cardnumber = 666;
			strcpy_s(cardname, "�W���[�J�[");
			//sprintf(cardname, "%d", "�W���[�J�[");
		}
		

	}

	char* Viewname()
	{
		//char r[50];
		char* r=NULL;
		r = (char*)malloc(sizeof(char) * 50);

		char* aaaa = (char*)cardnumber;
		//strcat_s(cardname,cardnumber);// (char*)cardnumber);
		if (r == NULL) {
			std::cout<<"�z��쐬���s\n";
		}
		else

		
	
			//r = cardname;
			strcpy_s(r,12,cardname);
		
			

		return r;
	}

	int Viewnum()
	{
		int r;
		r = cardnumber;
		return r;
	}

};

struct  Yamahuda
{
private:
	std::string a[53];

	//char* str[53];

	
public:


	Card card;

	void deck()
	{

		
		for (int i = 0; i < 53; i++)
		{
			card.cardSet(i);
			std::cout << card.Viewname();
			
			std::cout << card.Viewnum();
			
		}
	}

	



};


int main() 
{
	Card a;
	Yamahuda yamahuda;

	
	yamahuda.deck();
	
	
	
	//aa[1] = a.View();
	//std::cout << aa[1];
	//yamahuda.deck();

	//yamahuda.yamahuda_view();

	return 0;
}

//��\��
float kyori(float x1, float y1,float x2,float y2)
{

	float r = 0;

	r = sqrt((x2 - x1)* (x2 - x1) + (y2 - y1)* (y2 - y1));


	return r;
}


