#include "GameSceneState.h"



/// <summary>
/// 初期化処理
/// </summary>
void GameSceneState::Initialize() {

	Player::Initialize();
	InputHandler::Initialize();

}



/// <summary>
/// 更新処理
/// </summary>
void GameSceneState::Update() {

	Player::Update();

	iCommand_ = InputHandler::HandlerInput();
	if (this->iCommand_) {
		iCommand_->Exec(*Player::GetInstance());
	}

}



/// <summary>
/// 描画処理
/// </summary>
void GameSceneState::Draw() {

	Player::Draw();

}


