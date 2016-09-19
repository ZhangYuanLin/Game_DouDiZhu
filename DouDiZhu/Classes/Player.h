#ifndef __PLAYER__H__
#define __PLAYER_H__

#include "cocos2d.h"
#include "Poker.h"

using namespace cocos2d;

class Player : public Node{
public:
	Player();
	~Player();
	CREATE_FUNC(Player);
	virtual bool init();
	void updatePokerPos();
	void addPoker(Poker* poker);
	void removePoker(Poker* poker);
private:
	CC_SYNTHESIZE(bool, isLandlord, Landlord);		/* 是否是地主 */
	CC_SYNTHESIZE(bool, isCall, Call);		/* 是否已经叫地主 */
	CC_SYNTHESIZE(int, callPoint, CallPoint);	/* 叫地主的分数 */
	CC_SYNTHESIZE(Vector<Poker*>, poker, Poker);		/* 手里有的扑克牌 */
	CC_SYNTHESIZE(PlayerType, playerType, PlayerType);		/* 玩家类型 */
	CC_SYNTHESIZE(bool, isOutPoker, IsOutPoker);	/* 是否出牌 */
private:
	float displayLeftStartX;	/* 卡牌左边显示的起始点X坐标值 */
	float displayMiddleX;		/* 屏幕中间点的X坐标值 */
};

#endif