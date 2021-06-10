#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_ICONS

#include "raygui.h"

#undef RAYGUI_IMPLEMENTATION            // Avoid including raygui implementation again

// you're welcome

int main()
{
	int screenWidth = 690;
	int screenHeight = 560;

	InitWindow(screenWidth, screenHeight, "Double Linked List Graphics");
	SetExitKey(0);

	bool exitWindow = false;

	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!exitWindow)    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		exitWindow = WindowShouldClose();

		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(WHITE);

		//----------------------------------------------------------------------------------

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}