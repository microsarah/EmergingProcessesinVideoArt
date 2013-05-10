#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    vid[0].loadMovie("01_january.mov");     // 5:10
    vid[1].loadMovie("02_february.mov");    // 4:50
    vid[2].loadMovie("03_march.mov");       // 5:10
    vid[3].loadMovie("04_april.mov");       // 5:00
    vid[4].loadMovie("05_may.mov");         // 5:10
    vid[5].loadMovie("06_june.mov");        // 5:00
    vid[6].loadMovie("07_july.mov");        // 5:10
    vid[7].loadMovie("08_august.mov");      // 5:10
    vid[8].loadMovie("09_september.mov");   // 5:00
    vid[9].loadMovie("10_october.mov");    // 5:10
    vid[10].loadMovie("11_november.mov");   // 5:00
    vid[11].loadMovie("12_december.mov");   // 5:10
    
    vid[0].play();
    
    //
    
    
    myFont.loadFont("CAMCORDER_MS_OL2.otf", 12);
    myFont.setLetterSpacing(1.15);
    
    day = (ofGetFrameNum()/300);
}



//--------------------------------------------------------------
void testApp::update(){
    for (int i = 0; i < bdayVids; i++){
        vid[i].update();
    }
    
    // run through all videos if they reach the end w/o interaction fr keys
    if (!vid[vidNum].isPlaying()){
        vidNum = vidNum++;
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    // draw videos 1 at a time based on keyPress & maintain aspect ratio w/window resize
    
    ofRectangle videoRectangle = ofRectangle(0,0, vid[vidNum].getWidth(),vid[vidNum].getHeight());
    ofRectangle screenRectangle = ofRectangle(0,0,ofGetWidth(), ofGetHeight());
    videoRectangle.scaleTo(screenRectangle, OF_ASPECT_RATIO_KEEP);
    vid[vidNum].draw(videoRectangle);
    
    
    //ofSetColor(255);
    
    char date[1024];
    sprintf(date, "%02d/%02d/%02d", vidNum + 1, day + 1, ofGetYear());
    myFont.drawString("YOLO", 60, 60);
    myFont.drawString(date, 120, 60);
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    
    vid[vidNum].stop();
    
    if (key == 'p'){
        vid[vidNum].setPaused(true); // pause using p
        
    } else if (key == 'l'){
        vid[vidNum].setPaused(false); // play using l
    }
    
    // -------------------------------------------------------------
    
    if (key == 'q'){            // q = jan
        vid[vidNum].stop();
        day = 0;
        vidNum = 0;
        vid[vidNum].play();
        
        
    } else if (key == 'w'){     // w = feb
        day = 0;
        vid[vidNum].stop();
        vidNum = 1;
        vid[vidNum].play();
        
    } else if (key == 'e'){     // e = mar
        day = 0;
        vid[vidNum].stop();
        vidNum = 2;
        vid[vidNum].play();
        
    } else if (key == 'r'){     // r = apr
        day = 0;
        vid[vidNum].stop();
        vidNum = 3;
        vid[vidNum].play();
        
    } else if (key == 'a'){     // a = may
        day = 0;
        vid[vidNum].stop();
        vidNum = 4;
        vid[vidNum].play();
        
    } else if (key == 's'){     // s = jun
        day = 0;
        vid[vidNum].stop();
        vidNum = 5;
        vid[vidNum].play();
        
    } else if (key == 'd'){     // d = jul
        day = 0;
        vid[vidNum].stop();
        vidNum = 6;
        vid[vidNum].play();
        
    } else if (key == 'f'){     // f = aug
        day = 0;
        vid[vidNum].stop();
        vidNum = 7;
        vid[vidNum].play();
    
    } else if (key == 'z'){     // z = sep
        day = 0;
        vid[vidNum].stop();
        vidNum = 8;
        vid[vidNum].play();
        
    } else if (key == 'x'){     // x = oct
        day = 0;
        vid[vidNum].stop();
        vidNum = 9;
        vid[vidNum].play();
        
    } else if (key == 'c'){     // c = nov
        day = 0;
        vid[vidNum].stop();
        vidNum = 10;
        vid[vidNum].play();
        
    } else if (key == 'v'){     // v = dec
        day = 0;
        vid[vidNum].stop();
        vidNum = 11;
        vid[vidNum].play();
        
    }
    
    
    // move day counter forward 
    if (key == OF_KEY_RIGHT){
        if(day < 30){
            day++;
        } else if (day > 29){
            day = 0;
            //vidNum++;
        }
        
        // limit feb day counter to 29
        if (vidNum == 1){
            if (day < 28){
                day++;
            } else if (day > 28){
                day = 0;
            }
        }

        // limit april, june, september & november day counter to 30
        if (vidNum == 3){
            if (day < 29){
                day++;
            } else if (day > 29){
                day = 0;
            }
        }

        if (vidNum == 5){
            if (day < 29){
                day++;
            } else if (day > 29){
                day = 0;
            }
        }
        
        if (vidNum == 8){
            if (day < 29){
                day++;
            } else if (day > 29){
                day = 0;
            }
        }
                
        if (vidNum == 10){
            if (day < 29){
                day++;
            } else if (day > 29){
                day = 0;
            }
        }

    // move days forward in video
        vid[vidNum].setFrame((day)*300);
        vid[vidNum].play();
    }
    
    
    // -------------------------------- move days in reverse (not working)
    if (key == OF_KEY_LEFT){
        if(day < 30){
            day--;
        } else if (day > 29){
            day == 30;
            //vidNum++;
        }
    }
}
