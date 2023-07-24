#pragma once
#include "cocos2d.h"

#include "GJGameLevel.h"

class EditLevelLayer : public cocos2d::CCLayer {
public:
 virtual bool init(GJGameLevel*);
 void onCreateParticle(CCObject*);
};
