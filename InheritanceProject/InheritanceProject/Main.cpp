#include "Character.h"
#include "Archer.h"
#include "Warrior.h"
#include <iostream>
using namespace std;

void DisplayCharacterInfo(Character theCharacter);
void Attack(Character theCharacter);
int main() 
{
	auto art = Character("Art", 100);
	DisplayCharacterInfo(art);
	
	system("pause");

	auto drake = Warrior("Drake", 150, "longsword");
	DisplayCharacterInfo(drake);

	system("pause");

	auto zelda = Archer("legolas", 100, "cool even bow");
	DisplayCharacterInfo(zelda);

	system("pause");

	system("cls");
	Attack(art);
	Attack(drake);
	Attack(zelda);

	system("pause");
	return 0;

}

void DisplayCharacterInfo(Character theCharacter)
{
	cout << theCharacter.getName() << " has " << theCharacter.getHealth() << " life." << endl;
}

void Attack(Character theCharacter)
{
	cout << theCharacter.Attack();
}