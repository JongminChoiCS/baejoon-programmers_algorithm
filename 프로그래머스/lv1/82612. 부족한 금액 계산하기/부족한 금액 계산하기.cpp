using namespace std;

long long solution(int price, int money, int count)
{
    long long totalPrice = 0;
    
    for(int i = 1; i <= count; i++)
        totalPrice += price * i;
    
    if(money < totalPrice)
        return (totalPrice - money);

    return 0;
}