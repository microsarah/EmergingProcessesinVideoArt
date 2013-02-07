#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofEnableAlphaBlending();
    player.loadMovie("purdy.MOV");
    player.play();


}

//--------------------------------------------------------------
void testApp::update(){
    
    player.update();

}

//--------------------------------------------------------------
void testApp::draw(){


    player.draw(0,0);
    
//    player.getPixels();
//    
//    unsigned char * pixels = player.getPixels();
//    int widthOfLine = player.width;  // how long is a line of pixels
//    int red     = pixels[(100 * widthOfLine) + 20 * 3    ];
//    int green   = pixels[(100 * widthOfLine) + 20 * 3 + 1];
//    int blue    = pixels[(100 * widthOfLine) + 20 * 3 + 2];
//    
//    
//    ofSetColor(red,green,blue);
//    ofRect(mouseX, 0, 20, player.height);
    
 

    float hue = fmodf(ofGetElapsedTimef()*10,255);
    ofColor color = ofColor::fromHsb(ofMap( mouseX, 0,ofGetHeight(), 0,255 ), ofMap( mouseX, 0,ofGetHeight(), 0,255 ), ofMap( mouseX, 0,ofGetHeight(), 0,255 ));
    
    
    
    ofSetColor( color );
    ofRect( mouseX, 0, 10, player.height );
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == ' '){
        if (player.isPlaying()){
            player.stop();
        }
        else {
            player.play();
        }
        
        player.setLoopState(OF_LOOP_NONE);
        
    }
    
    if (key == 'f'){
        ofToggleFullscreen();
    }

}


//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}