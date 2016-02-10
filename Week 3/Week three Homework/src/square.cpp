//
//  square.cpp
//  Week three Homework
//
//  Created by TtTtTtTtT on 09/02/16.
//
//

#include "square.hpp"

void Square::cube() {

    cout<<"cubing" << endl;
    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofSetColor(r, g, b);
    
    ofDrawRectangle(ofGetMouseX()/2, ofGetMouseY()/2,300,400);

}

void Square::cuby()  {
    
    cout<<"cubying" << endl;

    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofNoFill();
    
    ofDrawSphere(ofGetMouseX()/1, ofGetMouseY()/1,120,100);


}

void Square::rotate() {

    cout<<"roating" << endl;
    

    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofSetColor(r, g, b);

    
    
    
    ofDrawTriangle(300,300,200,100,110,90);
  
   
    
}
