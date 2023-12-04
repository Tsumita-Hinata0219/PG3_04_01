#include "InputHandler.h"



InputHandler* InputHandler::GetInstance() {
	static InputHandler instance;
	return &instance;
}



void InputHandler::Initialize() {

	InputHandler::AddingMoveLeftComToPressKeysA();
	InputHandler::AddingMoveLeftComToPressKeysD();
}



ICommand* InputHandler::HandlerInput() {

	if (Novice::CheckHitKey(DIK_A)) {
		return InputHandler::GetInstance()->presskeysA_;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		return InputHandler::GetInstance()->presskeysD_;
	}

	return nullptr;
}



void InputHandler::AddingMoveLeftComToPressKeysA() {

	ICommand* command = new MoveLeftCom();
	InputHandler::GetInstance()->presskeysA_ = command;
}



void InputHandler::AddingMoveLeftComToPressKeysD() {

	ICommand* command = new MoveRightCom();
	InputHandler::GetInstance()->presskeysD_ = command;
}