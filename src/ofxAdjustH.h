#pragma once

#include <memory>

#include "adjust.h"

class ofxAdjustH {
public:
    class Singleton {
    public:
        Singleton(Singleton const&)        = delete;
        void operator=(Singleton const&)  = delete;

        Singleton(){
            adjust_init();
        }

        ~Singleton(){
            adjust_cleanup();
        }

        void refresh(){
            adjust_update();
        }

        void init(){
            // do nothing
        }

        static Singleton& get(){
            static Singleton s;
            return s;
        }
    };

    static void setup(){
        Singleton::get().init();
    }

    static void refresh(){
        Singleton::get().refresh();
    }

protected:
};