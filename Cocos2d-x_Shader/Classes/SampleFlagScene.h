#ifndef __SAMPLE_FLAG_SCENE_H__
#define __SAMPLE_FLAG_SCENE_H__

#include "SampleBaseScene.h"

class SampleFlagScene : public SampleBaseScene
{
public:
    CREATE_SCENE_FUNC(SampleFlagScene);
    CREATE_FUNC(SampleFlagScene);
    bool init() override;
    
private:
    void backCallback(cocos2d::Ref* pSender) override;
    void nextCallback(cocos2d::Ref* pSender) override;
};

#endif // __SAMPLE2_SCENE_H__
