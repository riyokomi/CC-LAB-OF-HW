
#ifndef _OF_APP
#define _OF_APP

#include "ofMain.h"

struct Ball {
    int x;
    int y;
    int vx;
    int vy;
    int radius;
    int red,green,blue;
};

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    
    Ball balls[10];
    
    ofSoundPlayer sounds[4];
    
};

#endif
