#pragma once


// Playerの前方宣言
class Player;


/* ICommandクラス */
class ICommand {

public:

	virtual ~ICommand() {};

	virtual void Exec(const Player& player) = 0;
};