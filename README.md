# ofxAdjustH

[adjust.h](https://github.com/bi3mer/adjust.h) for openFrameworks

You can interactively change values (hot reload) **without recompiling files** on realtime.

Please see https://www.youtube.com/watch?v=9eIXOygjPvw about adjust.h (introduction movie by colan biemer)

## Features

- added `ADJUST_SET_` macros for more oF friendly

## Example

see [./example/src/ofApp.cpp](./example/src/ofApp.cpp]) for detail.

```cpp
#include "ofxAdjustH.h"

float x, y, w, h;

//--------------------------------------------------------------
void ofApp::setup(){
    ofxAdjustH::setup();

    ADJUST_SET_FLOAT(x, 100); // modify this line, save file and press R on your running app!
	ADJUST_SET_FLOAT(y, 100); // modify this line, save file and press R on your running app!
    ADJUST_SET_FLOAT(w, 200); // modify this line, save file and press R on your running app!
	ADJUST_SET_FLOAT(h, 200); // modify this line, save file and press R on your running app!
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawEllipse(x, y, w, h);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'r'){
        ofxAdjustH::refresh();
        ofLog() << "refreshed";
    }
}
```

## License


- [adjust.h](https://github.com/bi3mer/adjust.h) : [MIT License, Copyright (c) 2025 Colan Biemer](https://github.com/bi3mer/adjust.h/blob/main/LICENSE) 
