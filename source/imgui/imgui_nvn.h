#pragma once

#include "imgui.h"
#include "imgui_internal.h"

class NVNcommandBuffer;

typedef void* ImTextureID;

// From User Executable
extern "C" __attribute__((visibility("default"))) void nvnImguiInitialize();
extern "C" __attribute__((visibility("default"))) ImDrawData *nvnImguiCalc();
extern "C" __attribute__((visibility("default"))) ImGuiIO &nvnImguiGetIO();
extern "C" __attribute__((visibility("default"))) void nvnImguiFontGetTexDataAsAlpha8(unsigned char **out_pixels, int *out_width, int *out_height, int *out_bytes_per_pixel = (int *)0);

// From Render Executable
extern "C" void nvnImguiBegin(NVNcommandBuffer *cmdBuf);
extern "C" void nvnImguiRender(ImDrawData *pDrawData);
extern "C" void nvnImguiRenderDrawList(ImDrawList *pDrawList);
extern "C" void nvnImguiEnd();