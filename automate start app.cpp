#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#define SCROLL -1500
using namespace std;

int main()
{
    //1. after rebooting, move cursor to 央视影音
    POINT p;
    GetCursorPos(&p);

    //2. open 央视影音
    SetCursorPos(50,50);//change this
    //double click
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    //3. wait for 10 seconds
    Sleep(10000);

    //4. move to 看电视 and click
    SetCursorPos(309,246);//(5,4)
    Sleep(2000);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(2000);

    //5. scroll to bottom and click cctv13
    SetCursorPos(960,540);
    mouse_event(MOUSEEVENTF_WHEEL, 0, 0, SCROLL, 0);
    SetCursorPos(1176,740);//(19,12)
    Sleep(2000);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    //6. wait for 5 seconds
    Sleep(5000);

    // //7. full screen
    SetCursorPos(960,540);//(中心)
    Sleep(1000);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    SetCursorPos(1920,540);

    return 0;
}
