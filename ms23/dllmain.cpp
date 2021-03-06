#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NON_CONFORMING_SWPRINTFS
#include <Console.hpp>
#include "main.hpp"

extern "C" BOOL WINAPI DllMain(HINSTANCE hModule, DWORD Reason, LPVOID Misc)
{
	DisableThreadLibraryCalls(hModule);
	Console::Resize(995, 520, -(1920 - (1280 / 4)), -200);

	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
		for (auto thread : gThreads)
			CreateThread(NULL, NULL, thread, NULL, 0, NULL);
		return true;
	case DLL_PROCESS_DETACH: return FreeLibrary(hModule);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		return true;
	}
}