#include <iostream>
#include <string>
#include <inchar.h>
#include <time.h>
#include <fstream>


//mady by Francisiek 2019
void zapisz(std::string rd)
{
	std::fstream plik; std::string co;
	std::cout<<"For what is this password? ";
	std::cin>>co;
	plik.open(co+".txt", std::ios::out | std::ios::app);
	plik<<rd<<'\n';
	plik.close();
}

int main()
{
	srand( time( NULL ) );
	int ile=0;
	std::cout<<"Password Generator by Francisiek v1.0 \n";
	std::cout<<"How long password? (in characters)\n";
	std::cin>>ile;
	std::string rnd(ile,'x');
	
	for(int i=0; i<ile; i++)
	{
		rnd[i]=(rand() % 92 ) + 33;
	}

	std::cout<<rnd<<'\n';
	std::cout<<"Save to file? Y/N\n";
	std::cin.ignore();
	
    char lol=getch();//char lol=getchar(); //cout<<"test"; system("pause");
	lol=tolower(lol);
	if(lol=='y') zapisz(rnd);
    
    std::cout<<"Press any key to exit\n";
	getch();
    return 0;
}
