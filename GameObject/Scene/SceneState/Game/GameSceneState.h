#pragma once

#include "GameObject/Scene/IScene.h"
#include "Utiliti/InputManager/InputManager.h"

#include "GameObject/Player/Player.h"
#include "Utiliti/ICommand/ICommand.h"
#include "Utiliti/InputHandler/InputHandler.h"


/* GameScene */
class GameSceneState : public IScene {

public:

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize() override;

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update() override;

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw() override;


private:

	ICommand* iCommand_ = nullptr;
};