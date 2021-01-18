#pragma once
#include"ClassGameStructure.h"
#include<string>

//Create a class called Character which inherits from the GameStructure class.
class ClassCharacter :
	public ClassGameStructure
{
public:
	//Create a public property in the Character class and call it Name
	std::string Name;
	//Create a Talk method this method signature: voidTalk(string stuffToSay)
	void Talk(std::string stuffToSay);

private:
	//Create one private property called Health in the Character superclass.
	int health;

};

