#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int prekiuKiekis, didelesDezes, mazosDezes, DideliuDeziu, MazuDeziu, LikoDideliuPrekiu, LikoMazuPrekiu;

  cout<< "Kiek turite prekiu? ";
  cin>> prekiuKiekis;

  cout<< "Kiek turite dideliu deziu? ";
  cin>> didelesDezes;

  cout<< "Kiek turite mazu deziu? ";
  cin>> mazosDezes;

  cout<< "I dideles dezes tilps po " << prekiuKiekis / didelesDezes << " prekes\n";
  cout<< "O i mazas dezes tilps po " << prekiuKiekis / mazosDezes <<  " prekes\n";

  DideliuDeziu = prekiuKiekis / didelesDezes;
  MazuDeziu = prekiuKiekis / mazosDezes;

  LikoDideliuPrekiu = DideliuDeziu * didelesDezes - prekiuKiekis;
  LikoMazuPrekiu = mazosDezes * MazuDeziu - prekiuKiekis;


  cout<< "Jei detumete i dideles dezes, jums liktu " << LikoDideliuPrekiu << " prekiu"<< endl;
  cout<< "jei detumete i mazas dezes, jums liktu " << LikoMazuPrekiu << " prekiu";




    return 0;
}
