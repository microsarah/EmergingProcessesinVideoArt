

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
    ofBackground(0);
    video.loadMovie("purdy720.MOV");
    video.play();
}


//--------------------------------------------------------------
void testApp::update(){
    video.update();
    
}

//--------------------------------------------------------------
void testApp::draw(){
    video.draw(0,0);
    
    int step = 10;
    //int step = ofMap(mouseX, 0, ofGetWidth(), 1, 200, true);
//    int scale = ofMap(mouseY, 0, ofGetHeight(), 1, 7, true);
//    
//    ofPushStyle();
//    for(int y = 0; y < video.getHeight(); y+=step){
//        for(int x = 0; x < video.getWidth(); x+=step){
//            ofColor sample = video.getPixelsRef().getColor(x,y);
//            ofSetColor(sample);        
//            ofRect(x+ 10, y +10, step, step);
//        }
//    }
//    ofPopStyle();
    
    
    if (mouseY > 80) {
       if (mouseY < 360){
           if (mouseX > 580){
               if (mouseX < 800){
    
                   ofPushStyle();
                    for(int y = 80; y < 360; y+=step){
                        for(int x = 580; x < 800; x+=step){
                            ofColor sample = video.getPixelsRef().getColor(x,y);
                            ofSetColor(sample);
                            ofRect(x, y, step, step);
                        }
                    }
                    ofPopStyle();
               }
           }
       }
    }
    

    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
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