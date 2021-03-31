//
//  gfxdevice.hpp
//  LearnDirect3D11
//
//  Created by macwink on 2021/3/31.
//  Copyright © 2021 StoneUS. All rights reserved.
//

#ifndef _GFXDEVICE_H_
#define _GFXDEVICE_H_

#include <windows.h>

const bool FULL_SCREEN = false;

class GfxDevice
{
private:
    /* data */
    
private:
    bool OnRender();

public:
    GfxDevice(/* args */);
    GfxDevice(const GfxDevice&);
    ~GfxDevice();

public:
    bool Awake(int, int, HWND);
	void OnDestroy();
	bool Update();
};

#endif
