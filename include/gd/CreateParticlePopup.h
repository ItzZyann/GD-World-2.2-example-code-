#pragma once
#include "cocos2d.h"

#include "FLAlertLayer.h"

class GameObject : public cocos2d::CCObject {
public:
 // TODO: 2.2 world headers
 // I dont have the correct header of this class
};

class ParticleGameObject : public GameObject {
public:
 static ParticleGameObject* create();
};

class CreateParticlePopup : public FLAlertLayer {
public:
 static CreateParticlePopup* create(ParticleGameObject*, cocos2d::CCArray*);
};
