#include<windows.h>

bool running=true;

LRESULT CALLBACK window_callback(HWND unnamedParam1,UINT unnamedParam2,WPARAM unnamedParam3,LPARAM unnamedParam4
)
{
	LRESULT result = 0;
	switch (unnamedParam2) {
	case WM_CLOSE:
	case WM_DESTROY:{
			running = false;
		}break;
	default:
		result=DefWindowProc(unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	}
	return result;
	
}


int  WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{
	WNDCLASS window_class = {};
	window_class.style = CS_HREDRAW | CS_VREDRAW;
	window_class.lpszClassName = L"Game Window Class";
	window_class.lpfnWndProc = window_callback;

	RegisterClass(&window_class);

	HWND window=CreateWindow(window_class.lpszClassName,L"My First Game!!",WS_OVERLAPPEDWINDOW|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,1280,720,0,0,hInstance,0);

	while (running) {
		//INPUT
		MSG message;
		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {
			TranslateMessage(&message);
			DispatchMessage(&message);
		}


	}
}

