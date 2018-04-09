#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int score ; 
    cout <<" ¿é¤J¦¨ÁZ"<< endl;
    cin >> score;
    if ((score <0) || (score > 100))
       cout <<"Input error!"<< endl;
    if (score >=90 && score <= 100)
        cout <<"A"<< endl;
    if (score >=80 && score <90)
        cout <<"B"<< endl; 
    if (score >=70 && score < 80)
        cout <<"C"<< endl; 
    if (score >=60 && score <70)
        cout <<"D"<< endl;          
    if (score >= 0 && score <60)
        cout <<"E"<< endl;    
    system("pause");
    return 0;
}
