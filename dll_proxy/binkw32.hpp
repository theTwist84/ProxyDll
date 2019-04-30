#pragma once

auto DLL_NAME = "BINKW32";

#pragma comment(linker, "/export:BinkLogoAddress=BINKW32_org.BinkLogoAddress")
#pragma comment(linker, "/export:BinkUseTelemetry=BINKW32_org.BinkUseTelemetry")
#pragma comment(linker, "/export:BinkUseTmLite=BINKW32_org.BinkUseTmLite")
#pragma comment(linker, "/export:BinkControlPlatformFeatures=BINKW32_org.BinkControlPlatformFeatures")
#pragma comment(linker, "/export:BinkBufferSetDirectDraw=BINKW32_org.BinkBufferSetDirectDraw")
#pragma comment(linker, "/export:BinkIsSoftwareCursor=BINKW32_org.BinkIsSoftwareCursor")
#pragma comment(linker, "/export:BinkCheckCursor=BINKW32_org.BinkCheckCursor")
#pragma comment(linker, "/export:BinkRestoreCursor=BINKW32_org.BinkRestoreCursor")
#pragma comment(linker, "/export:BinkBufferSetResolution=BINKW32_org.BinkBufferSetResolution")
#pragma comment(linker, "/export:BinkBufferCheckWinPos=BINKW32_org.BinkBufferCheckWinPos")
#pragma comment(linker, "/export:BinkBufferSetOffset=BINKW32_org.BinkBufferSetOffset")
#pragma comment(linker, "/export:BinkBufferOpen=BINKW32_org.BinkBufferOpen")
#pragma comment(linker, "/export:BinkBufferClose=BINKW32_org.BinkBufferClose")
#pragma comment(linker, "/export:BinkBufferLock=BINKW32_org.BinkBufferLock")
#pragma comment(linker, "/export:BinkBufferUnlock=BINKW32_org.BinkBufferUnlock")
#pragma comment(linker, "/export:BinkBufferBlit=BINKW32_org.BinkBufferBlit")
#pragma comment(linker, "/export:BinkBufferSetScale=BINKW32_org.BinkBufferSetScale")
#pragma comment(linker, "/export:BinkBufferSetHWND=BINKW32_org.BinkBufferSetHWND")
#pragma comment(linker, "/export:BinkBufferGetDescription=BINKW32_org.BinkBufferGetDescription")
#pragma comment(linker, "/export:BinkBufferGetError=BINKW32_org.BinkBufferGetError")
#pragma comment(linker, "/export:BinkBufferClear=BINKW32_org.BinkBufferClear")
#pragma comment(linker, "/export:BinkDDSurfaceType=BINKW32_org.BinkDDSurfaceType")
#pragma comment(linker, "/export:BinkDX8SurfaceType=BINKW32_org.BinkDX8SurfaceType")
#pragma comment(linker, "/export:BinkDX9SurfaceType=BINKW32_org.BinkDX9SurfaceType")
#pragma comment(linker, "/export:BinkSetError=BINKW32_org.BinkSetError")
#pragma comment(linker, "/export:BinkGetError=BINKW32_org.BinkGetError")
#pragma comment(linker, "/export:BinkSetSoundSystem=BINKW32_org.BinkSetSoundSystem")
#pragma comment(linker, "/export:BinkSetFrameRate=BINKW32_org.BinkSetFrameRate")
#pragma comment(linker, "/export:BinkSetFileOffset=BINKW32_org.BinkSetFileOffset")
#pragma comment(linker, "/export:BinkSetIOSize=BINKW32_org.BinkSetIOSize")
#pragma comment(linker, "/export:BinkSetIO=BINKW32_org.BinkSetIO")
#pragma comment(linker, "/export:BinkSetSimulate=BINKW32_org.BinkSetSimulate")
#pragma comment(linker, "/export:BinkSetSoundTrack=BINKW32_org.BinkSetSoundTrack")
#pragma comment(linker, "/export:BinkGetFrameBuffersInfo=BINKW32_org.BinkGetFrameBuffersInfo")
#pragma comment(linker, "/export:BinkRegisterFrameBuffers=BINKW32_org.BinkRegisterFrameBuffers")
#pragma comment(linker, "/export:BinkOpen=BINKW32_org.BinkOpen")
#pragma comment(linker, "/export:BinkOpenWithOptions=BINKW32_org.BinkOpenWithOptions")
#pragma comment(linker, "/export:BinkCopyToBuffer=BINKW32_org.BinkCopyToBuffer")
#pragma comment(linker, "/export:BinkCopyToBufferRect=BINKW32_org.BinkCopyToBufferRect")
#pragma comment(linker, "/export:BinkDoFramePlane=BINKW32_org.BinkDoFramePlane")
#pragma comment(linker, "/export:BinkDoFrame=BINKW32_org.BinkDoFrame")
#pragma comment(linker, "/export:BinkShouldSkip=BINKW32_org.BinkShouldSkip")
#pragma comment(linker, "/export:BinkNextFrame=BINKW32_org.BinkNextFrame")
#pragma comment(linker, "/export:BinkGetKeyFrame=BINKW32_org.BinkGetKeyFrame")
#pragma comment(linker, "/export:BinkGoto=BINKW32_org.BinkGoto")
#pragma comment(linker, "/export:BinkFreeGlobals=BINKW32_org.BinkFreeGlobals")
#pragma comment(linker, "/export:BinkClose=BINKW32_org.BinkClose")
#pragma comment(linker, "/export:BinkGetPlatformInfo=BINKW32_org.BinkGetPlatformInfo")
#pragma comment(linker, "/export:BinkWait=BINKW32_org.BinkWait")
#pragma comment(linker, "/export:BinkPause=BINKW32_org.BinkPause")
#pragma comment(linker, "/export:BinkGetSummary=BINKW32_org.BinkGetSummary")
#pragma comment(linker, "/export:BinkGetRealtime=BINKW32_org.BinkGetRealtime")
#pragma comment(linker, "/export:BinkGetRects=BINKW32_org.BinkGetRects")
#pragma comment(linker, "/export:BinkService=BINKW32_org.BinkService")
#pragma comment(linker, "/export:BinkSetVolume=BINKW32_org.BinkSetVolume")
#pragma comment(linker, "/export:BinkSetSpeakerVolumes=BINKW32_org.BinkSetSpeakerVolumes")
#pragma comment(linker, "/export:BinkSetPan=BINKW32_org.BinkSetPan")
#pragma comment(linker, "/export:BinkGetTrackType=BINKW32_org.BinkGetTrackType")
#pragma comment(linker, "/export:BinkGetTrackMaxSize=BINKW32_org.BinkGetTrackMaxSize")
#pragma comment(linker, "/export:BinkGetTrackID=BINKW32_org.BinkGetTrackID")
#pragma comment(linker, "/export:BinkOpenTrack=BINKW32_org.BinkOpenTrack")
#pragma comment(linker, "/export:BinkCloseTrack=BINKW32_org.BinkCloseTrack")
#pragma comment(linker, "/export:BinkGetTrackData=BINKW32_org.BinkGetTrackData")
#pragma comment(linker, "/export:BinkSetVideoOnOff=BINKW32_org.BinkSetVideoOnOff")
#pragma comment(linker, "/export:BinkSetSoundOnOff=BINKW32_org.BinkSetSoundOnOff")
#pragma comment(linker, "/export:BinkSetMemory=BINKW32_org.BinkSetMemory")
#pragma comment(linker, "/export:BinkSetWillLoop=BINKW32_org.BinkSetWillLoop")
#pragma comment(linker, "/export:BinkControlBackgroundIO=BINKW32_org.BinkControlBackgroundIO")
#pragma comment(linker, "/export:BinkOpenWaveOut=BINKW32_org.BinkOpenWaveOut")
#pragma comment(linker, "/export:BinkOpenDirectSound=BINKW32_org.BinkOpenDirectSound")
#pragma comment(linker, "/export:BinkOpenMiles=BINKW32_org.BinkOpenMiles")
#pragma comment(linker, "/export:RADTimerRead=BINKW32_org.RADTimerRead")
#pragma comment(linker, "/export:BinkStartAsyncThread=BINKW32_org.BinkStartAsyncThread")
#pragma comment(linker, "/export:BinkRequestStopAsyncThread=BINKW32_org.BinkRequestStopAsyncThread")
#pragma comment(linker, "/export:BinkWaitStopAsyncThread=BINKW32_org.BinkWaitStopAsyncThread")
#pragma comment(linker, "/export:BinkDoFrameAsync=BINKW32_org.BinkDoFrameAsync")
#pragma comment(linker, "/export:BinkDoFrameAsyncWait=BINKW32_org.BinkDoFrameAsyncWait")
#pragma comment(linker, "/export:BinkOpenXAudio2=BINKW32_org.BinkOpenXAudio2")
#pragma comment(linker, "/export:BinkGetPalette=BINKW32_org.BinkGetPalette")

#pragma endregion