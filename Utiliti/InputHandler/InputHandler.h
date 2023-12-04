#pragma once

#include "Utiliti/ICommand/ICommand.h"
#include "Utiliti/ICommand/MoveLeftCom/MoveLeftCom.h"
#include "Utiliti/ICommand/MoveRightCom/MoveRightCom.h"

#include <Novice.h>



class InputHandler {

public:

	static InputHandler* GetInstance();

	static ICommand* HandlerInput();
	
	static void Initialize();

	static void AddingMoveLeftComToPressKeysA();
	static void AddingMoveLeftComToPressKeysD();


private:

	// キー
	ICommand* presskeysD_;
	ICommand* presskeysA_;
};
