#ifndef CONSTANTS_CPP
#define CONSTANTS_CPP

#include <string>
#include "SDL.h"
#include "SDL_ttf.h"
using namespace std;

//Screen attributes
const int SCREEN_WIDTH = 1366;
const int SCREEN_HEIGHT = 768;
const int SCREEN_BPP = 32;
const int FRAMES_PER_SECOND = 100;
const string ICON_FILE = "icon2.bmp";

//HUD attributes
const int HUD_HEIGHT = 160;
const SDL_Color FONT_COLOR_WHITE = { 255,255,255 };
const int FONT_HUD_1_SIZE = 24;
const char FONT_HUD_1_FILENAME[] = "font_HUD_1.ttf";

//const int NUM_ADVANCED_SETTINGS = 1;//no longer needed. Was using to loop through advanced settings, which are now stored in a vector (can do .size())
const int HEALTHBAR_WIDTH = 402;
const int HEALTHBAR_HEIGHT = 48;
const int HEALTHBAR_OFFSET_X = 90;
const int HEALTHBAR_OFFSET_Y = 0;
const int HEALTHBAR_MESSAGE_OFFSET_X = -49;
const int HEALTHBAR_MESSAGE_OFFSET_Y = -64;
const int HEALTHBAR_ENTITY_OFFSET_X = 8;
const int HEALTHBAR_ENTITY_OFFSET_Y = -15;
const int HEALTHBAR_ENTITY_WIDTH = 48;
const int HEALTHBAR_ENTITY_HEIGHT = 7;

//UI attributes
const int UI_CLIP_COUNT = 2;
enum { UI_CLIP_TITLE, UI_CLIP_HEADER };

//the gray border for the healthbar.. will actually be a gray SDLrect behind it
const int HEALTHBAR_BORDER_ENTITY_OFFSET_X = 6;
const int HEALTHBAR_BORDER_ENTITY_OFFSET_Y = -17;
const int HEALTHBAR_BORDER_ENTITY_WIDTH = 52;
const int HEALTHBAR_BORDER_ENTITY_HEIGHT = 11;

//Gamestate attributes
const int FONT_GAMESTATE_1_SIZE = 72;
const int FONT_GAMESTATE_2_SIZE = 18;
const int FONT_GAMESTATE_3_SIZE = 24;
const int FONT_GAMESTATE_1_SIZE_SMALL = 48; //for monitors < 1920x1080
const int FONT_GAMESTATE_2_SIZE_SMALL = 12; //for monitors < 1920x1080
const int FONT_GAMESTATE_3_SIZE_SMALL = 18; //for monitors < 1920x1080
const char FONT_GAMESTATE_1_FILENAME[] = "font_Gamestate_1.ttf";
const char FONT_GAMESTATE_2_FILENAME[] = "font_Gamestate_1.ttf";
const char FONT_GAMESTATE_3_FILENAME[] = "font_Gamestate_1.ttf";

//terrain file attributes
const int TERRAIN_FILE_W = 512;
const int TERRAIN_FILE_H = 1024;
const int TERRAIN_CLIP_W = 32;
const int TERRAIN_CLIP_H = 32;
const int TERRAIN_CLIP_COUNT = 512;

//animation file attributes
const int ANIMATION_FILE_W = 1000;
const int ANIMATION_FILE_H = 900;
const int ANIMATION_CLIP_W = 100;
const int ANIMATION_CLIP_H = 100;
const int ANIMATION_MAX_STATE = 4;
const int ANIMATION_DEGRADATIONRATE_AOE = 4;
const int ANIMATION_DEGRADATIONRATE_GRAVE = 200;
enum { ANIMATION_AOE };
enum { ANIMATION_TYPE_NONE, ANIMATION_TYPE_STATIC, ANIMATION_TYPE_ENTITY };
const int ANIMATION_NUM_AOE = 0;
const int ANIMATION_NUM_MAGICMISSILE = 1;
const int ANIMATION_NUM_GRAVE = 10;


//entity file attributes
const int ENTITY_FILE_W = 768;
const int ENTITY_FILE_H = 512;
const int ENTITY_CLIP_W = 64;
const int ENTITY_CLIP_H = 64;

// constants for function parameters
enum { CODE_TERRAIN, CODE_PLAYER, CODE_HUD, CODE_ENTITY, CODE_UI, CODE_ANIMATIONS };

enum { TEXTURE_FRONT, TEXTURE_BACK, TEXTURE_LEFT, TEXTURE_RIGHT };

//constants for physics
const double FRICTION = 3;
const double STATIC_FRICTION = 2;
const double WALKING_FORCE = 4;

//constants for entities
const double MASS_PLAYER = 1;
const double MASS_NPC = 1;
const double BASE_POSX = 17; //for the player
const double BASE_POSY = 41; //for the player
const double BASE_W = 30; //for the player
const double BASE_H = 23; //For the player

//constants for status
const float REGEN_LIFE_PERFRAME = .01;
const float REGEN_MANA_PERFRAME = .2;

//constants for keyboard shortcuts
const int KEY_BUFFER_SIZE = 6;
enum { KEY_LEFT, KEY_RIGHT, KEY_UP, KEY_DOWN, KEY_SPACE, KEY_ESC };

//constants for gamestates
enum { STATES_GAMEPLAY, STATES_DEATH_MENU, STATES_START_MENU, STATES_PAUSE_MENU, STATES_OPTIONS_MENU, STATES_CREDITS_MENU };

#endif