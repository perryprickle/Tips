#include<iostream>
using namespace std;
class Bugwarrior
{
	public:
		virtual void attack()=0;
		virtual void defend()=0;
};
class knightwarrior:public Bugwarrior
{
	public:
		void attack()
		{
			
			cout<<"\ncommand to lunch attack on bugwarriors with sword!!:";
			
		}
		void defend()
		{
			cout<<"\ncommand to defend  the bugwarriors with powerfull shield!!:";
			
		}
};
class wizardwarrior:public Bugwarrior
{
	public:
		void attack()
		{
			cout<<"\ncommand to cast a spell on bugwarriors!!:";
			
		}
		void defend()
		{
			cout<<"\ncommand to protect the wizard community with spell layers!!:";
		
			
		}
};
main()
{
    knightwarrior knight;
    wizardwarrior wizard;
    
    cout << "\nKnight Warrior Zone:";
    knight.attack();
    knight.defend();

    cout << "\nWizard Warrior Zone:";
    wizard.attack();
    wizard.defend();

    return 0;
	
}

