#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		int positionX = 500;
		int positionY = 500;
        int positionGuardX = 100;
        int positionGuardY = 100;
        bool guardMovment = false;
        int playerColorRed = 0;
        int playerColorGreen = 255;
        int distanceGuard;

};
