#include "Player.h"



/// <summary>
/// Playerのインスタンスの取得
/// </summary>
Player* Player::GetInstance() {
	static Player instance;
	return &instance;
}



/// <summary>
/// 初期化処理
/// </summary>
void Player::Initialize() {

	Player::GetInstance()->position_ = { 250.0f, 400.0f };
	Player::GetInstance()->velocity_ = { 9.0f, 9.0f };
	Player::GetInstance()->size_ = 20.0f;
}



/// <summary>
/// 更新処理
/// </summary>
void Player::Update() {


}



/// <summary>
/// 描画処理
/// </summary>
void Player::Draw() {

	Vector2 pos = Player::GetInstance()->position_;
	float size = Player::GetInstance()->size_;

	// プレイヤーの描画
	Novice::DrawEllipse(
		int(pos.x), int(pos.y),
		int(size), int(size),
		0.0f, 0xffffffff, kFillModeSolid);

}



/// <summary>
/// 左右移動処理
/// </summary>
void Player::MoveLeft() {

	Player::GetInstance()->position_.x -= Player::GetInstance()->velocity_.x;

}
void Player::MoveRight() {

	Player::GetInstance()->position_.x += Player::GetInstance()->velocity_.x;

}