#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int total=200;
int max_card=0;
char pair='y';
int check(int num1,int num2,int num3,int num4,int num5);
int  max(int num1,int num2,int num3,int num4,int num5); 
char compare(int p,int c,int p_card,int c_card);
int main(void){
	int p1,p2,b1,b2,b3,c1,c2,c3,bet,p_con,c_con,p_card,c_card;
	int win=0,lose=0,tie=0;
	char con='y',final;
	while(total-5>0&&con!='n'){
		pair='n';
		total-=5;
		srand(time(NULL));
		p1=rand()%13+1;
		p2=rand()%13+1;
		b1=rand()%13+1;
		b2=rand()%13+1;
		b3=rand()%13+1;
		c1=rand()%13+1;
		c2=rand()%13+1;
		c3=rand()%13+1;
		printf("�z���P��:%d %d\n",p1,p2);
		printf("�i�����P��:%d %d %d\n",b1,b2,b3);
		do{
			printf("�п�J����άO���^�X(-1)");
			scanf("%d",&bet);
			if(bet>total){
				printf("�U�`���B�W�X�֦����B\n");
			}
		}while(bet>total);
		fflush(stdin);
		if(bet>0){	
			p_con=check(p1,p2,b1,b2,b3);
			//p_con=check(1,1,1,2,2);
			if(p_con>0){
				pair='y';
			}
			p_card=max(p1,p2,b1,b2,b3);
			pair='n';
			max_card=0;
			c_con=check(c1,c2,b1,b2,b3);
			//c_con=check(9,9,9,5,5);
			if(c_con>0){
				pair='y';
			}
			c_card=max(c1,c2,b1,b2,b3);
//			printf("%d %d",p_card,c_card);
			final=compare(p_con,c_con,p_card,c_card);
			if(final=='W'){
				win++;
				total+=bet;
				//printf("%d %d\n",p_con,c_con);
				printf("�q�����P��:%d %d\n",c1,c2);
				printf("�AĹ�F�ثe���B��:%d\n",total);
			}else if(final=='T'){
				tie++;
				//printf("%d %d\n",p_con,c_con);
				printf("�q�����P��:%d %d\n",c1,c2);
				printf("����ثe���B��:%d\n",total);
			}else{
				lose++;
				//printf("%d %d\n",p_con,c_con);
				total-=bet;
				printf("�q�����P��:%d %d\n",c1,c2);
				printf("�A��F�ثe���B��:%d\n",total);
			}		
			printf("�O�_�n�~��(y/n)");
			scanf("%c",&con);
		}
		else{
			printf("�O�_�n�~��(y/n)");
			scanf("%c",&con);
		}
	}
	if(total<5){
		printf("������F�����}");	
	}	
	printf("���¥��{ �z�@Ĺ�F%d��  ��F%d�� ����%d��  �{�b�`���B��%d\n",win,lose,tie,total);
	if(total-200>0)
		printf("�`�@��%d\n",total-200);
	else
		printf("�`�@��%d\n",200-total);	
	printf("\n"); 	
	system("pause");
	return 0;
}
//��X�̦h�ۦP�P 
int check(int num1,int num2,int num3,int num4,int num5){
	int count=0;
	int max=0;
	//�qnum1�P�_��num5 
	if(num1==num2){
		max_card=num1;
		count=2;
		//�q�᭱���e��
		if(num1==num5)
			count=3;
		if(num1==num4){
			if(num1==num5)
				count=4;
			else
			    count=3;
		}
		if(num1==num3){
			if(num1==num4||num1==num5)
				count=4;
			else
			    count=3;	
		}
		if(count>max)
			max=count;
	}				
	if(num1==num3){
		max_card=num1;
		count=2;
		if(num1==num5)
			count=3;
		if(num1==num4){
			if(num1==num5)
				count=4;
			else
			    count=3;
		}
		if(count>max)
			max=count;
	}
	if(num1==num4){
		max_card=num1;
		count=2;
		if(num1==num5)
			count=3;
		if(count>max)
			max=count;
	}	
	if(num1==num5){
		max_card=num1;
		count=2;
		if(count>max)
			max=count;
	}
	if(num2==num3){
		if(num2>num1)
			max_card=num2;
		count=2;
		if(num2==num5)
			count=3;
		if(num2==num4){
			if(num2==num5)
				count=4;
			else
			    count=3;
		}
		if(count>max)
			max=count;
	}
	if(num2==num4){
		if(num2>num1||max_card==0)
			max_card=num2;
		count=2;
		if(num2==num5)
			count=3;
		if(count>max)
			max=count;
	}
	if(num2==num5){
		if(num2>num1||max_card==0)
			max_card=num2;
		count=2;
		if(count>max)
			max=count;
	}
	if(num3==num4){
		if((num3>num1&&num3>num2)||max_card==0)
			max_card=num3;
		count=2;
		if(num3==num5)
			count=3;
		if(count>max)
			max=count;		
	}
	if(num3==num5){
		if((num3>num1&&num3>num2)||max_card==0)
			max_card=num3;
		count=2;
		if(count>max)
			max=count;		
	}
	if(num4==num5){
		if((num4>num1&&num4>num2&&num4>num3)||max_card==0)
			max_card=num4;
		count=2;
		if(count>max)
			max=count;	
	}
//	printf("\n%d",max_card);
	return max;
}
//��X�̤j�i���P 
int  max(int num1,int num2,int num3,int num4,int num5){
	int max=num1;
	if(max<num2){
		max=num2;
	}
	if(max<num3){
		max=num3;
	}
	if(max<num4){
		max=num4;
	}
	if(max<num5){
		max=num5;
	}
	if(pair=='y')
		return max_card;
	else	
		return max;
}
//��Ĺ�P�_ 
char compare(int p,int c,int p_card,int c_card){
	char final;
	if(p>c){
		final='W';
	}else{
		if(p==c){
			if(p_card>c_card){
				final='W';
			}else if(p_card==c_card){
				final='T';
			}else{
				final='L';
			}
		}
		else{
			final='L';
		}
	}
	return final;
}
