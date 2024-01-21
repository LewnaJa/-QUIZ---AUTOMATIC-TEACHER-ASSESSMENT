#include <iostream>
#include <fstream>
using namespace std;
int numerlini = 1;
int punkty;
int maxPunkty = 5;
string imie, imie1, nazwisko, odpowiedz1, odpowiedz2, odpowiedz3, odpowiedz4, odpowiedz5, linia;
int main()
{

   cout<<"Podaj imie ucznia"<<endl;
   cin>>imie1;


   fstream plik;
   plik.open(imie1+".txt", ios::in);


   while(getline(plik, linia ))
        {
     switch(numerlini)
     {
   case 1:

       imie = linia;

    break;
    case 2:

       nazwisko = linia;

    break;
    case 3:

       odpowiedz1 = linia;

    break;
    case 4:

       odpowiedz2 = linia;

    break;
     case 5:

       odpowiedz3 = linia;

    break;
     case 6:

       odpowiedz4 = linia;

    break;
     case 7:

       odpowiedz5 = linia;

    break;

         }
     numerlini++;
   }
   plik.close();





   cout<<imie<<endl;

   cout<<nazwisko<<endl;

   cout<<odpowiedz1<<endl;

   cout<<odpowiedz2<<endl;

   cout<<odpowiedz3<<endl;

   cout<<odpowiedz4<<endl;

   cout<<odpowiedz5<<endl;


      if(odpowiedz1=="A" || odpowiedz1=="a")
   {
      cout<<"odpowiedz1 jest poprawna"<<endl;
      punkty++;
   }
   else{
    cout<<"odpowiedz1 jest blendna"<<endl;
   }

    if(odpowiedz2=="B" || odpowiedz2=="b")
   {
      cout<<"odpowiedz2 jest poprawna"<<endl;
      punkty++;
   }
   else{
    cout<<"odpowiedz2 jest blendna"<<endl;
   }

    if(odpowiedz3=="A" ||odpowiedz3=="a")
   {
      cout<<"odpowiedz3 jest poprawna"<<endl;
      punkty++;
   }
   else{
    cout<<"odpowiedz3 jest blendna"<<endl;
   }

    if(odpowiedz4=="A" || odpowiedz4=="a")
   {
      cout<<"odpowiedz4 jest poprawna"<<endl;
      punkty++;
   }
   else{
    cout<<"odpowiedz4 jest blendna"<<endl;
   }

    if(odpowiedz5=="C" || odpowiedz5=="c")
   {
      cout<<"odpowiedz5 jest poprawna"<<endl;
      punkty++;
   }
   else{
    cout<<"odpowiedz5 jest blendna"<<endl;
   }

   cout<<punkty<<"/"<<maxPunkty<<endl;

      switch(punkty)
   {
   case 0:
    cout<<"Uczen otrzymuje ocene 1"<<endl;
    break;

    case 1:
    cout<<"Uczen otrzymuje ocene 1"<<endl;
    break;

    case 2:
    cout<<"Uczen otrzymuje ocene 2"<<endl;
    break;

    case 3:
    cout<<"Uczen otrzymuje ocene 3"<<endl;
    break;

    case 4:
    cout<<"Uczen otrzymuje ocene 4"<<endl;
    break;

    case 5:
    cout<<"Uczen otrzymuje ocene 5"<<endl;
    break;

   }

    return 0;
}
