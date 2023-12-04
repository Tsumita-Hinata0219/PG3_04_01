#include "IScene.h"


int IScene::sceneNo_ = GAME;

IScene::~IScene() {}

int IScene::GetSceneNo() { return sceneNo_; }
