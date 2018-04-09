#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Player{
	public:
		int userMoney,money,count,win,lose;//���a���B�B�U�`���B�B�@���X�^�X �BĹ�X���B��X���B 
		Player(){
			userMoney=200;
			money =0;
			count=0;
			win=0;
			lose=0;
			
		}
		void show(){	//��ܪ��a���B�B 

			
			cout<<"�z�`�@���F"<<win+lose<<"�^�X�AĹ"<<win<<"�^�X�A��"<<lose<<"�^�X�A�ثe�l�B"<<userMoney<<"�@Ĺ"<<userMoney-200<<endl; 
		}
	
	
};
class Gamble{
	public:
		int comCards,comSum,comCount,userCards,userSum,userCount,odds; //�o�쪺�P�B �O�I�B�X��  �߲v 
		void reset(){
			comCards = 0;
			comSum = 0;
			comCount=0;
			userCards = 0;
			userSum =0;
			userCount = 0;
			odds =0;
		}
		void comServe(){
			for(int i=0 ; i<2;i++){
				userCards = 0;
				userCards = (rand()%13)+1;
				if(userCards == 11 || userCards == 12 || userCards == 13 ){
					userSum += 10;
				}else{
					userSum += userCards;
				}
				userCount+=1;
		
			}
			cout<<"�z�ثe���I��:"<<userSum<<endl;
			//���a�@�}�l�o�P��i����
			do{
				comCards = (rand()%13)+1;
				if(comCards == 11 || comCards == 12 || comCards == 13 ){
					comSum += 10;
				}else{
					comSum += comCards;
				}
				comCount++;
			}while(comCount<5 && comSum < 18);
			//�q���@���[�P��5�i��18�I���� 
		}
		
		void playerServe(){
				userCards = (rand()%13)+1;
//				cout << "�o�P=" << userCards << endl; 
				userCount++;
				if(userCards == 11 || userCards == 12 || userCards == 13 ){
					userSum += 10;
				}else{
					userSum += userCards;
				}
				if(userCount > 5){
					cout<<"�̦h�u�o���i�P�o!!!�A�w�g�o�Ĥ��i�F!";
				}

				cout<<"�z�ثe���I��:"<<userSum<<endl;
		}
		
		int rate(){//�߲v 
			//srand(time(NULL));
			odds=(rand()%6)+1; //1~6�� 
			return odds;
		}
		
		Player check(Player player,int ran){
			Player p = player;
			if(comSum > 21  ){
				if(userSum>21){
					cout<<"�A�M�q�����z���F!!��F�N�߿�"<<endl;
					p.lose++;
					p.userMoney -= p.money;
				}else{
					cout<<"�q���I�ƶW�L21�I�A�ȿ��ԭ�I~!"<<endl;
					p.win++;
					p.userMoney += p.money*odds;
				}
			}else{
				if(userSum>21){
					cout<<"�A�z����!!�߿�!!"<<endl;
					p.lose++;
					p.userMoney -= p.money;
				}else{
					if(userSum > comSum){
						cout<<"�A���I�Ƥ�q���j!!���ߧAĹ�o~~"<<endl;
						p.win++;
						p.userMoney += p.money*odds;
					}else{
							cout<<"�A���I�Ƥ���q�����A�߿��oQQ"<<endl;
							p.lose++;
							p.userMoney -= p.money;
						}
				}
			}
			if(p.lose >player.lose){
				cout<<"�A��F"<<player.money<<"���C�ثe�l�B"<<p.userMoney<<"��"<<endl;
			}else{
				cout<<"�AĹ�F"<<player.money*odds<<"���A�t����"<<player.userMoney<<"���A�ثe�l�B"<<p.userMoney<<"���C"<<endl;
				
			}
			return p;
		}
};




int main(void){
	Player user;

	char again;
	do {
		srand(time(NULL));
		Gamble gamble; //��bdo�̬O���غc�����](�H�K���ĤG���W�@�������٦b)
		gamble.reset();
		char add;//�O�_�n�[�P 
		cout<<"==========================�C���}�l=========================="<<endl;
		cout<<"���^�X�C���߲v��"<<gamble.rate()<<"��"<<endl;	
		do{
			cout<<"�п�J�n�U�`�����B(���o�j��{���l�B"<<user.userMoney<<")"<<endl;
			cin>>user.money;			
		}while(user.money > user.userMoney);
		gamble.comServe();
		do{//�Ϋ���O�]���@�}�l�u�o��i�P�A���i��W�L21�I�C 
			cout<<"�A�Q�n�_�I�[�P��!!??(y/n)�G";
			cin>>add;
			if(add == 'y' || add == 'Y' ){
				gamble.playerServe();
			}else if(add == 'n' || add == 'N'){
				break;
			}
			
		}while(gamble.userCount < 5 && gamble.userSum <21 );
		cout<<"==========================�������G=========================="<<endl;
		cout<<"�q���@�o"<<gamble.comCount<<"�i�P�A"<<"�I��:"<<gamble.comSum<<endl;
		cout<<"�A�`�@"<<gamble.userCount<<"�i�P�A"<<"�I��:"<<gamble.userSum<<endl;
		user = gamble.check(user,gamble.odds);
		cout<<"�ٷQ�A���@����߰ʾz��21�I��??(y/n)";
		cin>>again;

	}while(again == 'y' || again =='Y');
	
	user.show();

	system("pause");
	return 0;
}
