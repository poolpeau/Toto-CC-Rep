//
//  spiral.cpp
//  spiralrecursion
//
//  Created by TtTtTtTtT on 23/02/16.
//
//

#include "spiral.hpp"

//void Spiral::setup() {

  //  cout<<"spiraling"<< endl;
//};

void Spiral::setup()
{
    posX= 200;
    posY= 100;
    posX2 = 100;
    posY2 = 0;
    radius = 200;
    
   r = ofRandom(0,255);
   g = ofRandom (0,255);
   b = ofRandom (0,255);
 
    ofSetColor(r, g, b);

    
} ;

void Spiral::draw()

{
    ofPushMatrix;
    ofTranslate (ofGetWidth()/2,
                 ofGetHeight()/2);
                 //----
stripePattern (1/tan(ofGetElapsedTimef())*2500);
  
    
    //----
    
   

        
    

} ;

void Spiral::update()
{
    
}
void Spiral::stripePattern (float x)
{
    //ofSetColor(240, 230, 10);
    
    r = ofRandom (0,255);
    g =  100;
    b = ofRandom (180);
    
    ofSetColor(r, g, b);
 
    ofSetLineWidth(6.0);
    
    //ofDrawLine(0,500,0,100);
    for(x=-50; x< ofGetWidth(); x= x+1){
        ofPushMatrix();
        ofTranslate (x*20,0);
        //ofRotate(x/3);
        ofRotate(170.0 * ofGetElapsedTimef() );
        ofDrawLine(0,-280,0,280);
        ofPopMatrix();
        
        
    }

    
    //int i=300;
   // i= i+4;
    
    //ofRotate(i*5);
   // for(int x=0; x< ofGetWidth(); x= x+20){
       // ofDrawLine(x,200,x,500);
    
    
}








