#include <iostream>

using namespace std;

int ChocolateBars(int bars,int copuns){
    if (copuns >= 7){
            return ChocolateBars(bars+(copuns/7),(copuns%7)+(copuns/7));
    }
    else return bars;
}

int main()
{
    int dollars , copun ;
    cout << "Enter number of dollars : ";
    cin >> dollars ;
    copun = dollars;
    cout << ChocolateBars(dollars,copun) <<" Chocolate Bars"<< endl;
    return 0;
}
