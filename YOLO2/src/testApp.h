#pragma once

#include "ofMain.h"

#define bdayVids 12

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();    
    void keyPressed  (int key);
    
    ofVideoPlayer vid[bdayVids];
    int vidNum;
    int day;
    
    ofTrueTypeFont myFont;
    
};
