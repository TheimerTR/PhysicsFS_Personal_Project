#ifndef __ASSETSMANAGER_H__
#define __ASSETSMANAGER_H__

#include "Module.h"

#include "PhysFS/include/physfs.h"
#include "SDL/include/SDL.h"

#pragma comment( lib, "../Game/Source/External/PhysFS/libx86/physfs.lib" )

class AssetsManager : public Module
{
public:

	// Constructor
	AssetsManager();

	// Destructor
	~AssetsManager();

	// Called before render is available
	bool Awake(pugi::xml_node&);

	// Called before quitting
	bool CleanUp();

	// Return the bytes of a PhysFS filehandle
	uint LoadData(const char* path, char** buffer) const;

	// Allows you to use pointers to memory instead of files or things such as images or samples
	SDL_RWops* Load(const char* path) const;

};

#endif // __ASSETSMANAGER_H__
