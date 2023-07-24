// TODO //
#include "include.h"

bool (*EditLevelLayer_init)(EditLevelLayer*, GJGameLevel*);
bool EditLevelLayer_initH(EditLevelLayer* self, GJGameLevel* lvl) {
 if(!EditLevelLayer_init(self, lvl)) return false;
 
 auto buttons = (CCMenuItemSpriteExtra*)(self->getChildren()->objectAtIndex(7));
 
 auto editBtn = (CCMenuItemSpriteExtra*)(buttons->getChildren()->objectAtIndex(0));
 editBtn->removeFromParent();
 
 auto editBtn2 = CCMenu::create();
 buttons->addChild(editBtn2);
 
 auto editSpr = CCSprite::createWithSpriteFrameName("GJ_editBtn_001.png"); 
 auto editSpr2 = CCMenuItemSpriteExtra::create(editSpr, editSpr, self,
 menu_selector(EditLevelLayer::onCreateParticle));
 editBtn2->addChild(editSpr2);
 editBtn2->setPosition(editBtn->getPosition());
  
 return true;
}

__attribute__((constructor))
void lib_gdkit() {

 hook("_ZN14EditLevelLayer4initEP11GJGameLevel", EditLevelLayer_initH, EditLevelLayer_init);
  
 gdkit::loadHook(true);
}