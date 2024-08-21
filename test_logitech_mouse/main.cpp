#include <Windows.h>
#include <iostream>
#include "../logitech_mouse/logitech_mouse.h"


int main()
{
	logi_mouse_open();

	logi_mouse_down(kMOUSE_KEY_LEFT);
	logi_mouse_move_rel(0, 127);
	logi_mouse_up();
	logi_mouse_close();



  return 0;
}