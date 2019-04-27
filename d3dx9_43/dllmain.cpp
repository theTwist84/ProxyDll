#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NON_CONFORMING_SWPRINTFS

#include "d3dx9_43.hpp"
#include <Console.hpp>
#include <Utils.hpp>

BOOL InitInstance(HINSTANCE hModule)
{
	if (!ProxyManager.Setup(DLL_NAME))
		return false;
	Console::Init(ProxyManager.GetInitString());
	PluginManager.Run(".\\bin\\plugins.ini");

	return true;
}

BOOL ExitInstance()
{
	PluginManager.FreeAllPlugins();
	ProxyManager.Free();
	return true;
}

extern "C" BOOL WINAPI DllMain(HINSTANCE hModule, DWORD Reason, LPVOID Misc)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH: return InitInstance(hModule);
	case DLL_PROCESS_DETACH: return ExitInstance();
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		return true;
	}
}
