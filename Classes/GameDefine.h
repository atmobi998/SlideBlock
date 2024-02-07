//
//  GameDefine.h
//  SlideBlock
//
//  Created by Harry Nguyen on 11/29/16.
//
//

#ifndef GameDefine_h
#define GameDefine_h

/// Global define
#define INVALID_MATRIX_VALUE -1
#define TOTAL_PAGE_LEVEL 5
#define TOTAL_ROW 4
#define TOTAL_COLUM 5

#define MAX_COLUMN_ROW_GAME_BOARD  6
#define WIDTH_HEIGHT_OBJECT_PIXEL 80

#define TIME_RUN_WIN_ANIMATION 0.1

#define CURRENT_MODE_GAME "CurrentModeGame"
#define EASY_LEVEL 1
#define MEDIUM_LEVEL 2
#define HARD_LEVEL 3
#define EXPERT_LEVEL 4

#define USER_HIGHT_LEVEL_EASY "EasyLevel"
#define USER_HIGHT_LEVEL_MEDIUM "MediumLevel"
#define USER_HIGHT_LEVEL_HARD "HardLevel"
#define USER_HIGHT_LEVEL_EXPERT "ExpertLevel"

/// Home scene
#define DIRECTOR_TO_HOME_SCENE 1001
#define DIRECTOR_TO_MODE_SCENE 1002


/// ModeGame scene
#define TAG_BTN_BACK_MODE_GAME 2001
#define TAG_BTN_EASY_MODE_GAME 2002
#define TAG_BTN_MEDIUM_MODE_GAME 2003
#define TAG_BTN_HARD_MODE_GAME 2004
#define TAG_BTN_EXPERT_MODE_GAME 2005

/// Level scene
#define TAG_BTN_BACK_LEVEL_SCENE 3001
#define TAG_BTN_PREVIOUS_PAGE 3002
#define TAG_BTN_NEXT_PAGE 3003
#define COLOR4V Color4B(6,75,38,0)
#define BUFFER 40


/// Help scene
#define TAG_BTN_BACK 5001
#define TAG_BTN_NEXT 5002
#define TAG_BTN_PREVIOUS 5003

/// Game scene
#define TAG_BTN_PAUSE_GAME_SCENE 6001
#define TAG_BTN_REPLAY_GAME_SCENE 6002
#define TAG_BTN_BACK_GAME_SCENE 6003
#define TAG_BTN_NEXT_LEVEL_GAME_SCENE 6004
#define TAG_BTN_PREVIOUS_LEVEL_GAME_SCENE 6005

#define TAG_POPUP_RESUME 6006
#define TAG_POPUP_REPLAY 6007
#define TAG_POPUP_BACK_TO_PREVIOUS 6008
#define TAG_POPUP_PAUSE 6009

typedef enum
{
  VERTICAL = 0,
  HORIZONTAL = 1
}OBJECT_DIRECTION;

typedef enum
{
  NORMARL_OBJECT = 0,
  WIN_OBJECT = 1,
}OBJECTTYPE;

typedef enum
{
  INVISIBLE = 0,
  VISIBLE = 1
}MATRIX_VALUE;

typedef enum {
  RUNNING = 0,
  PAUSE,
  WIN,
}GAME_STATUS;

typedef enum
{
  TAG_BTN_PLAY = 1102,
  TAG_BTN_PUZZLE = 1103,
  TAG_BTN_MORE = 1104,
  TAG_BTN_HELP = 1105,
} TAG_BTN_HOME;

/// Admod
#define OPEN_GAME_SCREEN_KEY "OPEN_GAME_SCREEN_KEY"
#define OPEN_GAME_SCREEN_FREQUENCY 18

#endif /* GameDefine_h */
