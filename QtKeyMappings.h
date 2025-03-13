#pragma once
#include "imgui.h"

ImGuiKey QtKeyToImGuiKey(unsigned int wParam)
{
    switch (wParam)
    {
        case Qt::Key_Tab: return ImGuiKey_Tab;
        case Qt::Key_Left: return ImGuiKey_LeftArrow;
        case Qt::Key_Right: return ImGuiKey_RightArrow;
        case Qt::Key_Up: return ImGuiKey_UpArrow;
        case Qt::Key_Down: return ImGuiKey_DownArrow;
        case Qt::Key_PageUp: return ImGuiKey_PageUp;
        case Qt::Key_PageDown: return ImGuiKey_PageDown;
        case Qt::Key_Home: return ImGuiKey_Home;
        case Qt::Key_End: return ImGuiKey_End;
        case Qt::Key_Insert: return ImGuiKey_Insert;
        case Qt::Key_Delete: return ImGuiKey_Delete;
        case Qt::Key_Backspace: return ImGuiKey_Backspace;
        case Qt::Key_Space: return ImGuiKey_Space;
        case Qt::Key_Enter: return ImGuiKey_Enter;
        case Qt::Key_Return: return ImGuiKey_Enter;
        case Qt::Key_Escape: return ImGuiKey_Escape;
        case Qt::Key_Apostrophe: return ImGuiKey_Apostrophe;
        case Qt::Key_Comma: return ImGuiKey_Comma;
        case Qt::Key_Minus: return ImGuiKey_Minus;
        case Qt::Key_Period: return ImGuiKey_Period;
        case Qt::Key_Slash: return ImGuiKey_Slash;
        case Qt::Key_Semicolon: return ImGuiKey_Semicolon;
        case Qt::Key_Equal: return ImGuiKey_Equal;
        case Qt::Key_BracketLeft: return ImGuiKey_LeftBracket;
        case Qt::Key_Backslash: return ImGuiKey_Backslash;
        case Qt::Key_BracketRight: return ImGuiKey_RightBracket;
        case Qt::Key_AsciiTilde: return ImGuiKey_GraveAccent;
        case Qt::Key_CapsLock: return ImGuiKey_CapsLock;
        case Qt::Key_ScrollLock: return ImGuiKey_ScrollLock;
        case Qt::Key_NumLock: return ImGuiKey_NumLock;
        //case VK_SNAPSHOT: return ImGuiKey_PrintScreen;
        case Qt::Key_Pause: return ImGuiKey_Pause;
        //case VK_NUMPAD0: return ImGuiKey_Keypad0;
        //case VK_NUMPAD1: return ImGuiKey_Keypad1;
        //case VK_NUMPAD2: return ImGuiKey_Keypad2;
        //case VK_NUMPAD3: return ImGuiKey_Keypad3;
        //case VK_NUMPAD4: return ImGuiKey_Keypad4;
        //case VK_NUMPAD5: return ImGuiKey_Keypad5;
        //case VK_NUMPAD6: return ImGuiKey_Keypad6;
        //case VK_NUMPAD7: return ImGuiKey_Keypad7;
        //case VK_NUMPAD8: return ImGuiKey_Keypad8;
        //case VK_NUMPAD9: return ImGuiKey_Keypad9;
        //case VK_DECIMAL: return ImGuiKey_KeypadDecimal;
        //case VK_DIVIDE: return ImGuiKey_KeypadDivide;
        //case VK_MULTIPLY: return ImGuiKey_KeypadMultiply;
        //case VK_SUBTRACT: return ImGuiKey_KeypadSubtract;
        //case VK_ADD: return ImGuiKey_KeypadAdd;
        //case IM_VK_KEYPAD_ENTER: return ImGuiKey_KeypadEnter;
        case Qt::Key_Shift: return ImGuiKey_ModShift;
        case Qt::Key_Control: return ImGuiKey_ModCtrl;
        case Qt::Key_Alt: return ImGuiKey_ModAlt;
        case Qt::Key_Meta: return ImGuiKey_ModSuper;
        //case VK_RSHIFT: return ImGuiKey_RightShift;
        //case VK_RCONTROL: return ImGuiKey_RightCtrl;
        //case VK_RMENU: return ImGuiKey_RightAlt;
        //case VK_RWIN: return ImGuiKey_RightSuper;
        //case VK_APPS: return ImGuiKey_Menu;
        case Qt::Key_0: return ImGuiKey_0;
        case Qt::Key_1: return ImGuiKey_1;
        case Qt::Key_2: return ImGuiKey_2;
        case Qt::Key_3: return ImGuiKey_3;
        case Qt::Key_4: return ImGuiKey_4;
        case Qt::Key_5: return ImGuiKey_5;
        case Qt::Key_6: return ImGuiKey_6;
        case Qt::Key_7: return ImGuiKey_7;
        case Qt::Key_8: return ImGuiKey_8;
        case Qt::Key_9: return ImGuiKey_9;
        case Qt::Key_A: return ImGuiKey_A;
        case Qt::Key_B: return ImGuiKey_B;
        case Qt::Key_C: return ImGuiKey_C;
        case Qt::Key_D: return ImGuiKey_D;
        case Qt::Key_E: return ImGuiKey_E;
        case Qt::Key_F: return ImGuiKey_F;
        case Qt::Key_G: return ImGuiKey_G;
        case Qt::Key_H: return ImGuiKey_H;
        case Qt::Key_I: return ImGuiKey_I;
        case Qt::Key_J: return ImGuiKey_J;
        case Qt::Key_K: return ImGuiKey_K;
        case Qt::Key_L: return ImGuiKey_L;
        case Qt::Key_M: return ImGuiKey_M;
        case Qt::Key_N: return ImGuiKey_N;
        case Qt::Key_O: return ImGuiKey_O;
        case Qt::Key_P: return ImGuiKey_P;
        case Qt::Key_Q: return ImGuiKey_Q;
        case Qt::Key_R: return ImGuiKey_R;
        case Qt::Key_S: return ImGuiKey_S;
        case Qt::Key_T: return ImGuiKey_T;
        case Qt::Key_U: return ImGuiKey_U;
        case Qt::Key_V: return ImGuiKey_V;
        case Qt::Key_W: return ImGuiKey_W;
        case Qt::Key_X: return ImGuiKey_X;
        case Qt::Key_Y: return ImGuiKey_Y;
        case Qt::Key_Z: return ImGuiKey_Z;
        case Qt::Key_F1: return ImGuiKey_F1;
        case Qt::Key_F2: return ImGuiKey_F2;
        case Qt::Key_F3: return ImGuiKey_F3;
        case Qt::Key_F4: return ImGuiKey_F4;
        case Qt::Key_F5: return ImGuiKey_F5;
        case Qt::Key_F6: return ImGuiKey_F6;
        case Qt::Key_F7: return ImGuiKey_F7;
        case Qt::Key_F8: return ImGuiKey_F8;
        case Qt::Key_F9: return ImGuiKey_F9;
        case Qt::Key_F10: return ImGuiKey_F10;
        case Qt::Key_F11: return ImGuiKey_F11;
        case Qt::Key_F12: return ImGuiKey_F12;
        //case VK_CONTROL: return ImGuiKey_ModCtrl;
        //case VK_SHIFT: return ImGuiKey_ModShift;
        //case VK_MENU: return ImGuiKey_ModAlt;
        default: return ImGuiKey_None;
    }
}
