#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Player{
	public:
		int userMoney,money,count,win,lose;//玩家金額、下注金額、共玩幾回合 、贏幾場、輸幾場、 
		Player(){
			userMoney=200;
			money =0;
			count=0;
			win=0;
			lose=0;
			
		}
		void show(){	//顯示玩家金額、 

			
			cout<<"您總共玩了"<<win+lose<<"回合，贏"<<win<<"回合，輸"<<lose<<"回合，目前餘額"<<userMoney<<"共贏"<<userMoney-200<<endl; 
		}
	
	
};
class Gamble{
	public:
		int comCards,comSum,comCount,userCards,userSum,userCount,odds; //發到的牌、 記點、幾次  賠率 
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
			cout<<"您目前的點數:"<<userSum<<endl;
			//玩家一開始發牌兩張結束
			do{
				comCards = (rand()%13)+1;
				if(comCards == 11 || comCards == 12 || comCards == 13 ){
					comSum += 10;
				}else{
					comSum += comCards;
				}
				comCount++;
			}while(comCount<5 && comSum < 18);
			//電腦一直加牌到5張或18點為止 
		}
		
		void playerServe(){
				userCards = (rand()%13)+1;
//				cout << "發牌=" << userCards << endl; 
				userCount++;
				if(userCards == 11 || userCards == 12 || userCards == 13 ){
					userSum += 10;
				}else{
					userSum += userCards;
				}
				if(userCount > 5){
					cout<<"最多只發五張牌囉!!!你已經發第五張了!";
				}

				cout<<"您目前的點數:"<<userSum<<endl;
		}
		
		int rate(){//賠率 
			//srand(time(NULL));
			odds=(rand()%6)+1; //1~6倍 
			return odds;
		}
		
		Player check(Player player,int ran){
			Player p = player;
			if(comSum > 21  ){
				if(userSum>21){
					cout<<"你和電腦都爆掉了!!輸了就賠錢"<<endl;
					p.lose++;
					p.userMoney -= p.money;
				}else{
					cout<<"電腦點數超過21點，賺錢拉唷呼~!"<<endl;
					p.win++;
					p.userMoney += p.money*odds;
				}
			}else{
				if(userSum>21){
					cout<<"你爆掉啦!!賠錢!!"<<endl;
					p.lose++;
					p.userMoney -= p.money;
				}else{
					if(userSum > comSum){
						cout<<"你的點數比電腦大!!恭喜你贏囉~~"<<endl;
						p.win++;
						p.userMoney += p.money*odds;
					}else{
							cout<<"你的點數不比電腦高，賠錢囉QQ"<<endl;
							p.lose++;
							p.userMoney -= p.money;
						}
				}
			}
			if(p.lose >player.lose){
				cout<<"你輸了"<<player.money<<"元。目前餘額"<<p.userMoney<<"元"<<endl;
			}else{
				cout<<"你贏了"<<player.money*odds<<"元，含本金"<<player.userMoney<<"元，目前餘額"<<p.userMoney<<"元。"<<endl;
				
			}
			return p;
		}
};




int main(void){
	Player user;

	char again;
	do {
		srand(time(NULL));
		Gamble gamble; //放在do裡是讓建構式重設(以免玩第二次上一局的值還在)
		gamble.reset();
		char add;//是否要加牌 
		cout<<"==========================遊戲開始=========================="<<endl;
		cout<<"此回合遊戲賠率為"<<gamble.rate()<<"倍"<<endl;	
		do{
			cout<<"請輸入要下注的金額(不得大於現有餘額"<<user.userMoney<<")"<<endl;
			cin>>user.money;			
		}while(user.money > user.userMoney);
		gamble.comServe();
		do{//用後測是因為一開始只發兩張牌，不可能超過21點。 
			cout<<"你想要冒險加牌嗎!!??(y/n)：";
			cin>>add;
			if(add == 'y' || add == 'Y' ){
				gamble.playerServe();
			}else if(add == 'n' || add == 'N'){
				break;
			}
			
		}while(gamble.userCount < 5 && gamble.userSum <21 );
		cout<<"==========================此局結果=========================="<<endl;
		cout<<"電腦共發"<<gamble.comCount<<"張牌，"<<"點數:"<<gamble.comSum<<endl;
		cout<<"你總共"<<gamble.userCount<<"張牌，"<<"點數:"<<gamble.userSum<<endl;
		user = gamble.check(user,gamble.odds);
		cout<<"還想再玩一次驚心動魄的21點嗎??(y/n)";
		cin>>again;

	}while(again == 'y' || again =='Y');
	
	user.show();

	system("pause");
	return 0;
}
