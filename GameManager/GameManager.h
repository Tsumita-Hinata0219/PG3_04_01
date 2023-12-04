#pragma once


#include "GameObject/Scene/IScene.h"
#include "GameObject/Scene/SceneState/Game/GameSceneState.h"

#include "Utiliti/InputManager/InputManager.h"

#include <memory>
#include <Novice.h>


/* GameManager */
class GameManager {

public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	GameManager();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameManager();


	/// <summary>
	/// この関数でゲームループを呼び出す
	/// </summary>
	int Run();


private:

	std::unique_ptr<IScene> sceneArr_[3];

	// どのステージを呼び出すかを管理する変数
	int currentSceneNo_; // 今のシーン
	int preSceneNo_;	 // 前のシーン

};