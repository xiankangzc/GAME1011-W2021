#include<iostream>
#include<stdlib.h>
using namespace std;


class Platform
{
private:
	string m_name, m_manufacturer;
public:
	Platform(string _name, string _manufacturer)
	{
		m_name = _name;
		m_manufacturer = _manufacturer;
	}
	string getName()
	{
		return m_name;
	}
	string getManufacturer()
	{
		return m_manufacturer;
	}
};

class Game
{
private:
	string m_Gname, m_Gpublisher, m_Gdeveloper;
public:
	Game(string _Gname, string _Gpublisher,string _Gdeveloper)
	{
		m_Gname = _Gname;
		m_Gpublisher = _Gpublisher;
		m_Gdeveloper = _Gdeveloper;
	}
	string getGname()
	{
		return m_Gname;
	}
	string getGpublisher()
	{
		return m_Gpublisher;
	}
	string getGdeveloper()
	{
		return m_Gdeveloper;
	}
};

class Achievment
{
private:
	string m_Atitle, m_Adescript;
	int m_Ascore;
public:
	Achievment(string _Atitle, string _Adescript, int _Ascore)
	{

		m_Atitle = _Atitle;
		m_Adescript = _Adescript;
		m_Ascore = _Ascore;
	}
	string getAtitle()
	{
		return m_Atitle;
	}
	string getAdescript()
	{
		return m_Adescript;
	}
	int getAscore()
	{
		return m_Ascore;
	}

};

int main()
{
	//PLATFORM
	Platform* pPlatform = nullptr;
	string *platf, Platname, Platmanu;
	int NumPlat;

	//GAME
    int GameNum;
	string *games, Gname, Gpublisher, Gdeveloper;
	Game* pGame = nullptr;

	//ACHIEVMENT
	int Achievnum, achievscore;
	string *achiev, AchievTitle, Achievdescript;
	Achievment* pAchievment = nullptr;


	cout << "HELLO AND WELCOME \nThis will be your achievment managment program.\n";
	cout << "\nHow many platforms do you have? "; cin >> NumPlat; cout << "\n";
	platf = new string[NumPlat];
	for (int i = 0; i < NumPlat; i++)
	{
		cout << "\nPLATFORM " << i+1<<endl<<"-----------------------------------------------------------------------------"<<endl;
		cout << "PLATFORM NAME: "; cin >> Platname;
		cout << "MANUFACTURER NAME: "; cin >> Platmanu;
		pPlatform = new Platform(Platname, Platmanu);


		cout << "\nEnter number of games: "; cin >> GameNum;
		cout << "You have " << GameNum << " games on the " << Platname;
		games = new string[GameNum];
		for (int j = 0; j < GameNum; j++)
		{
			cout << "\n\n\nGAME " << j + 1 << endl << "-----------------------------";
			cout << "\nGAME NAME: "; cin >> Gname;
			cout << "GAME PUBLISHER: "; cin >> Gpublisher;
			cout << "GAME DEVELOPER: "; cin >> Gdeveloper;
			pGame = new Game(Gname,Gpublisher, Gdeveloper);	


			cout << "\n\nEnter number of achievments: "; cin >> Achievnum;
			cout << "You have " << Achievnum << " achievments on the game " << Gname;
			achiev = new string[Achievnum];
			for (int m = 0; m < Achievnum; m++)
			{
				cout << "\n\nACHIEVMENT " << m + 1 << endl << "-----------------------------";
				cout << "\nACHIEVMENT TITLE: "; cin >> AchievTitle;
				cout << "ACHIEVMENT DESCRIPTION: "; cin >> Achievdescript;
				cout << "ACHIEVMENT SCORE: : "; cin >> achievscore;
				pAchievment = new Achievment(AchievTitle, Achievdescript, achievscore);


				system("CLS");
				cout << "\n***************************************************************" << endl;

				cout << "\nPLAPTFORM NAME: " << pPlatform->getName();
				cout << "\nPLAPTFORM MANUFACTURER: " << pPlatform->getManufacturer();

				cout << "\nGAME NAME: " << pGame->getGname();
				cout << "\nGAME PUBLISHER: " << pGame->getGpublisher();
				cout << "\nGAME DEVELOPER: " << pGame->getGdeveloper();

				cout << "\nACHIEVMENT TITLE: " << pAchievment->getAtitle();
				cout << "\nACHIEVMENT DESCRIPTION: " << pAchievment->getAdescript();
				cout << "\nACHIEVMENT SCORE VALUE: " << pAchievment->getAscore();
				cout << "\n\n\n";
				system("Pause");
				system("CLS");
			}
		}
	}

	delete pPlatform;
	pPlatform = nullptr;

	delete pGame;
	pGame = nullptr;

	delete pAchievment;
	pAchievment = nullptr;

	/*delete[] platf;
	delete[] games;
	delete[] achiev;*/

	return 0;
}