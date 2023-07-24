#pragma once
#include "cocos2d.h"

class FLAlertLayerProtocol;
class FLAlertLayer : cocos2d::CCLayerColor {
public:
 static FLAlertLayer* create( FLAlertLayerProtocol* protocol, const char* title, std::string caption, const char* button_title, const char* button2_title );
 static FLAlertLayer* create( FLAlertLayerProtocol* protocol, const char* title, std::string caption, const char* b1_title, const char* b2_title, float x_size, bool add_border, float y_size );
 
 void show(void);
};
