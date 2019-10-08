/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ACTIONMAP_H
#define ACTIONMAP_H

#include "keyboard.h"
#include "report.h"
#include "keycode.h"
#include "action_code.h"
#include "action.h"


/* Modified key */
#define AC_c(kc)                ACTION_MODS_KEY(MOD_LCTL, KC_##kc)
#define AC_s(kc)                ACTION_MODS_KEY(MOD_LSFT, KC_##kc)
#define AC_a(kc)                ACTION_MODS_KEY(MOD_LALT, KC_##kc)
#define AC_g(kc)                ACTION_MODS_KEY(MOD_LGUI, KC_##kc)

/* Normal key */
#define AC_NO			ACTION_KEY(KC_NO)
#define AC_TRANSPARENT          ACTION_KEY(KC_TRANSPARENT)
#define AC_ROLL_OVER		ACTION_KEY(KC_ROLL_OVER)
#define AC_POST_FAIL		ACTION_KEY(KC_POST_FAIL)
#define AC_UNDEFINED		ACTION_KEY(KC_UNDEFINED)
#define AC_A		        ACTION_KEY(KC_A)
#define AC_B		        ACTION_KEY(KC_B)
#define AC_C		        ACTION_KEY(KC_C)
#define AC_D		        ACTION_KEY(KC_D)
#define AC_E		        ACTION_KEY(KC_E)
#define AC_F		        ACTION_KEY(KC_F)
#define AC_G		        ACTION_KEY(KC_G)
#define AC_H		        ACTION_KEY(KC_H)
#define AC_I		        ACTION_KEY(KC_I)
#define AC_J		        ACTION_KEY(KC_J)
#define AC_K		        ACTION_KEY(KC_K)
#define AC_L		        ACTION_KEY(KC_L)
#define AC_M		        ACTION_KEY(KC_M)
#define AC_N		        ACTION_KEY(KC_N)
#define AC_O		        ACTION_KEY(KC_O)
#define AC_P		        ACTION_KEY(KC_P)
#define AC_Q		        ACTION_KEY(KC_Q)
#define AC_R		        ACTION_KEY(KC_R)
#define AC_S		        ACTION_KEY(KC_S)
#define AC_T		        ACTION_KEY(KC_T)
#define AC_U		        ACTION_KEY(KC_U)
#define AC_V		        ACTION_KEY(KC_V)
#define AC_W		        ACTION_KEY(KC_W)
#define AC_X		        ACTION_KEY(KC_X)
#define AC_Y		        ACTION_KEY(KC_Y)
#define AC_Z		        ACTION_KEY(KC_Z)
#define AC_1		        ACTION_KEY(KC_1)
#define AC_2		        ACTION_KEY(KC_2)
#define AC_3		        ACTION_KEY(KC_3)
#define AC_4		        ACTION_KEY(KC_4)
#define AC_5		        ACTION_KEY(KC_5)
#define AC_6		        ACTION_KEY(KC_6)
#define AC_7		        ACTION_KEY(KC_7)
#define AC_8		        ACTION_KEY(KC_8)
#define AC_9		        ACTION_KEY(KC_9)
#define AC_0		        ACTION_KEY(KC_0)
#define AC_ENTER		ACTION_KEY(KC_ENTER)
#define AC_ESCAPE		ACTION_KEY(KC_ESCAPE)
#define AC_BSPACE		ACTION_KEY(KC_BSPACE)
#define AC_TAB			ACTION_KEY(KC_TAB)
#define AC_SPACE		ACTION_KEY(KC_SPACE)
#define AC_MINUS		ACTION_KEY(KC_MINUS)
#define AC_EQUAL		ACTION_KEY(KC_EQUAL)
#define AC_LBRACKET		ACTION_KEY(KC_LBRACKET)
#define AC_RBRACKET		ACTION_KEY(KC_RBRACKET)
#define AC_BSLASH		ACTION_KEY(KC_BSLASH)
#define AC_NONUS_HASH		ACTION_KEY(KC_NONUS_HASH)
#define AC_SCOLON		ACTION_KEY(KC_SCOLON)
#define AC_QUOTE		ACTION_KEY(KC_QUOTE)
#define AC_GRAVE		ACTION_KEY(KC_GRAVE)
#define AC_COMMA		ACTION_KEY(KC_COMMA)
#define AC_DOT			ACTION_KEY(KC_DOT)
#define AC_SLASH		ACTION_KEY(KC_SLASH)
#define AC_CAPSLOCK		ACTION_KEY(KC_CAPSLOCK)
#define AC_F1			ACTION_KEY(KC_F1)
#define AC_F2			ACTION_KEY(KC_F2)
#define AC_F3			ACTION_KEY(KC_F3)
#define AC_F4			ACTION_KEY(KC_F4)
#define AC_F5			ACTION_KEY(KC_F5)
#define AC_F6			ACTION_KEY(KC_F6)
#define AC_F7			ACTION_KEY(KC_F7)
#define AC_F8			ACTION_KEY(KC_F8)
#define AC_F9			ACTION_KEY(KC_F9)
#define AC_F10			ACTION_KEY(KC_F10)
#define AC_F11			ACTION_KEY(KC_F11)
#define AC_F12			ACTION_KEY(KC_F12)
#define AC_PSCREEN		ACTION_KEY(KC_PSCREEN)
#define AC_SCROLLLOCK		ACTION_KEY(KC_SCROLLLOCK)
#define AC_PAUSE		ACTION_KEY(KC_PAUSE)
#define AC_INSERT		ACTION_KEY(KC_INSERT)
#define AC_HOME			ACTION_KEY(KC_HOME)
#define AC_PGUP			ACTION_KEY(KC_PGUP)
#define AC_DELETE		ACTION_KEY(KC_DELETE)
#define AC_END			ACTION_KEY(KC_END)
#define AC_PGDOWN		ACTION_KEY(KC_PGDOWN)
#define AC_RIGHT		ACTION_KEY(KC_RIGHT)
#define AC_LEFT			ACTION_KEY(KC_LEFT)
#define AC_DOWN			ACTION_KEY(KC_DOWN)
#define AC_UP			ACTION_KEY(KC_UP)
#define AC_NUMLOCK		ACTION_KEY(KC_NUMLOCK)
#define AC_KP_SLASH		ACTION_KEY(KC_KP_SLASH)
#define AC_KP_ASTERISK		ACTION_KEY(KC_KP_ASTERISK)
#define AC_KP_MINUS		ACTION_KEY(KC_KP_MINUS)
#define AC_KP_PLUS		ACTION_KEY(KC_KP_PLUS)
#define AC_KP_ENTER		ACTION_KEY(KC_KP_ENTER)
#define AC_KP_1			ACTION_KEY(KC_KP_1)
#define AC_KP_2			ACTION_KEY(KC_KP_2)
#define AC_KP_3			ACTION_KEY(KC_KP_3)
#define AC_KP_4			ACTION_KEY(KC_KP_4)
#define AC_KP_5			ACTION_KEY(KC_KP_5)
#define AC_KP_6			ACTION_KEY(KC_KP_6)
#define AC_KP_7			ACTION_KEY(KC_KP_7)
#define AC_KP_8			ACTION_KEY(KC_KP_8)
#define AC_KP_9			ACTION_KEY(KC_KP_9)
#define AC_KP_0			ACTION_KEY(KC_KP_0)
#define AC_KP_DOT		ACTION_KEY(KC_KP_DOT)
#define AC_NONUS_BSLASH		ACTION_KEY(KC_NONUS_BSLASH)
#define AC_APPLICATION		ACTION_KEY(KC_APPLICATION)
#define AC_POWER		ACTION_KEY(KC_POWER)
#define AC_KP_EQUAL		ACTION_KEY(KC_KP_EQUAL)
#define AC_F13			ACTION_KEY(KC_F13)
#define AC_F14			ACTION_KEY(KC_F14)
#define AC_F15			ACTION_KEY(KC_F15)
#define AC_F16			ACTION_KEY(KC_F16)
#define AC_F17			ACTION_KEY(KC_F17)
#define AC_F18			ACTION_KEY(KC_F18)
#define AC_F19			ACTION_KEY(KC_F19)
#define AC_F20			ACTION_KEY(KC_F20)
#define AC_F21			ACTION_KEY(KC_F21)
#define AC_F22			ACTION_KEY(KC_F22)
#define AC_F23			ACTION_KEY(KC_F23)
#define AC_F24			ACTION_KEY(KC_F24)
#define AC_EXECUTE		ACTION_KEY(KC_EXECUTE)
#define AC_HELP			ACTION_KEY(KC_HELP)
#define AC_MENU			ACTION_KEY(KC_MENU)
#define AC_SELECT		ACTION_KEY(KC_SELECT)
#define AC_STOP			ACTION_KEY(KC_STOP)
#define AC_AGAIN		ACTION_KEY(KC_AGAIN)
#define AC_UNDO			ACTION_KEY(KC_UNDO)
#define AC_CUT			ACTION_KEY(KC_CUT)
#define AC_COPY			ACTION_KEY(KC_COPY)
#define AC_PASTE		ACTION_KEY(KC_PASTE)
#define AC_FIND			ACTION_KEY(KC_FIND)
#define AC__MUTE		ACTION_KEY(KC__MUTE)
#define AC__VOLUP		ACTION_KEY(KC__VOLUP)
#define AC__VOLDOWN		ACTION_KEY(KC__VOLDOWN)
#define AC_LOCKING_CAPS		ACTION_KEY(KC_LOCKING_CAPS)
#define AC_LOCKING_NUM		ACTION_KEY(KC_LOCKING_NUM)
#define AC_LOCKING_SCROLL	ACTION_KEY(KC_LOCKING_SCROLL)
#define AC_KP_COMMA		ACTION_KEY(KC_KP_COMMA)
#define AC_KP_EQUAL_AS400	ACTION_KEY(KC_KP_EQUAL_AS400)
#define AC_INT1			ACTION_KEY(KC_INT1)
#define AC_INT2			ACTION_KEY(KC_INT2)
#define AC_INT3			ACTION_KEY(KC_INT3)
#define AC_INT4			ACTION_KEY(KC_INT4)
#define AC_INT5			ACTION_KEY(KC_INT5)
#define AC_INT6			ACTION_KEY(KC_INT6)
#define AC_INT7			ACTION_KEY(KC_INT7)
#define AC_INT8			ACTION_KEY(KC_INT8)
#define AC_INT9			ACTION_KEY(KC_INT9)
#define AC_LANG1		ACTION_KEY(KC_LANG1)
#define AC_LANG2		ACTION_KEY(KC_LANG2)
#define AC_LANG3		ACTION_KEY(KC_LANG3)
#define AC_LANG4		ACTION_KEY(KC_LANG4)
#define AC_LANG5		ACTION_KEY(KC_LANG5)
#define AC_LANG6		ACTION_KEY(KC_LANG6)
#define AC_LANG7		ACTION_KEY(KC_LANG7)
#define AC_LANG8		ACTION_KEY(KC_LANG8)
#define AC_LANG9		ACTION_KEY(KC_LANG9)
#define AC_ALT_ERASE		ACTION_KEY(KC_ALT_ERASE)
#define AC_SYSREQ		ACTION_KEY(KC_SYSREQ)
#define AC_CANCEL		ACTION_KEY(KC_CANCEL)
#define AC_CLEAR		ACTION_KEY(KC_CLEAR)
#define AC_PRIOR		ACTION_KEY(KC_PRIOR)
#define AC_RETURN		ACTION_KEY(KC_RETURN)
#define AC_SEPARATOR		ACTION_KEY(KC_SEPARATOR)
#define AC_OUT			ACTION_KEY(KC_OUT)
#define AC_OPER			ACTION_KEY(KC_OPER)
#define AC_CLEAR_AGAIN		ACTION_KEY(KC_CLEAR_AGAIN)
#define AC_CRSEL		ACTION_KEY(KC_CRSEL)
#define AC_EXSEL		ACTION_KEY(KC_EXSEL)
#define AC_KP_00		ACTION_KEY(KC_KP_00)
#define AC_KP_000		ACTION_KEY(KC_KP_000)
#define AC_THOUSANDS_SEPARATOR	ACTION_KEY(KC_THOUSANDS_SEPARATOR)
#define AC_DECIMAL_SEPARATOR	ACTION_KEY(KC_DECIMAL_SEPARATOR)
#define AC_CURRENCY_UNIT	ACTION_KEY(KC_CURRENCY_UNIT)
#define AC_CURRENCY_SUB_UNIT	ACTION_KEY(KC_CURRENCY_SUB_UNIT)
#define AC_KP_LPAREN		ACTION_KEY(KC_KP_LPAREN)
#define AC_KP_RPAREN		ACTION_KEY(KC_KP_RPAREN)
#define AC_KP_LCBRACKET		ACTION_KEY(KC_KP_LCBRACKET)
#define AC_KP_RCBRACKET		ACTION_KEY(KC_KP_RCBRACKET)
#define AC_KP_TAB		ACTION_KEY(KC_KP_TAB)
#define AC_KP_BSPACE		ACTION_KEY(KC_KP_BSPACE)
#define AC_KP_A			ACTION_KEY(KC_KP_A)
#define AC_KP_B			ACTION_KEY(KC_KP_B)
#define AC_KP_C			ACTION_KEY(KC_KP_C)
#define AC_KP_D			ACTION_KEY(KC_KP_D)
#define AC_KP_E			ACTION_KEY(KC_KP_E)
#define AC_KP_F			ACTION_KEY(KC_KP_F)
#define AC_KP_XOR		ACTION_KEY(KC_KP_XOR)
#define AC_KP_HAT		ACTION_KEY(KC_KP_HAT)
#define AC_KP_PERC		ACTION_KEY(KC_KP_PERC)
#define AC_KP_LT		ACTION_KEY(KC_KP_LT)
#define AC_KP_GT		ACTION_KEY(KC_KP_GT)
#define AC_KP_AND		ACTION_KEY(KC_KP_AND)
#define AC_KP_LAZYAND		ACTION_KEY(KC_KP_LAZYAND)
#define AC_KP_OR		ACTION_KEY(KC_KP_OR)
#define AC_KP_LAZYOR		ACTION_KEY(KC_KP_LAZYOR)
#define AC_KP_COLON		ACTION_KEY(KC_KP_COLON)
#define AC_KP_HASH		ACTION_KEY(KC_KP_HASH)
#define AC_KP_SPACE		ACTION_KEY(KC_KP_SPACE)
#define AC_KP_ATMARK		ACTION_KEY(KC_KP_ATMARK)
#define AC_KP_EXCLAMATION	ACTION_KEY(KC_KP_EXCLAMATION)
#define AC_KP_MEM_STORE		ACTION_KEY(KC_KP_MEM_STORE)
#define AC_KP_MEM_RECALL	ACTION_KEY(KC_KP_MEM_RECALL)
#define AC_KP_MEM_CLEAR		ACTION_KEY(KC_KP_MEM_CLEAR)
#define AC_KP_MEM_ADD		ACTION_KEY(KC_KP_MEM_ADD)
#define AC_KP_MEM_SUB		ACTION_KEY(KC_KP_MEM_SUB)
#define AC_KP_MEM_MUL		ACTION_KEY(KC_KP_MEM_MUL)
#define AC_KP_MEM_DIV		ACTION_KEY(KC_KP_MEM_DIV)
#define AC_KP_PLUS_MINUS	ACTION_KEY(KC_KP_PLUS_MINUS)
#define AC_KP_CLEAR		ACTION_KEY(KC_KP_CLEAR)
#define AC_KP_CLEAR_ENTRY	ACTION_KEY(KC_KP_CLEAR_ENTRY)
#define AC_KP_BINARY		ACTION_KEY(KC_KP_BINARY)
#define AC_KP_OCTAL		ACTION_KEY(KC_KP_OCTAL)
#define AC_KP_DECIMAL		ACTION_KEY(KC_KP_DECIMAL)
#define AC_KP_HEXADECIMAL	ACTION_KEY(KC_KP_HEXADECIMAL)

/* Modifiers */
#define AC_LCTRL		ACTION_KEY(KC_LCTRL)
#define AC_LSHIFT		ACTION_KEY(KC_LSHIFT)
#define AC_LALT			ACTION_KEY(KC_LALT)
#define AC_LGUI			ACTION_KEY(KC_LGUI)
#define AC_RCTRL		ACTION_KEY(KC_RCTRL)
#define AC_RSHIFT		ACTION_KEY(KC_RSHIFT)
#define AC_RALT			ACTION_KEY(KC_RALT)
#define AC_RGUI			ACTION_KEY(KC_RGUI)

/*
 * TMK extensions
 */
/* Sytem Control */
#define AC_SYSTEM_POWER		ACTION_USAGE_SYSTEM(SYSTEM_POWER_DOWN)
#define AC_SYSTEM_SLEEP		ACTION_USAGE_SYSTEM(SYSTEM_SLEEP)
#define AC_SYSTEM_WAKE		ACTION_USAGE_SYSTEM(SYSTEM_WAKE_UP)
/* Consumer Page */
#define AC_AUDIO_MUTE		ACTION_USAGE_CONSUMER(AUDIO_MUTE)
#define AC_AUDIO_VOL_UP		ACTION_USAGE_CONSUMER(AUDIO_VOL_UP)
#define AC_AUDIO_VOL_DOWN	ACTION_USAGE_CONSUMER(AUDIO_VOL_DOWN)
#define AC_MEDIA_NEXT_TRACK	ACTION_USAGE_CONSUMER(TRANSPORT_NEXT_TRACK)
#define AC_MEDIA_PREV_TRACK	ACTION_USAGE_CONSUMER(TRANSPORT_PREV_TRACK)
#define AC_MEDIA_FAST_FORWARD	ACTION_USAGE_CONSUMER(TRANSPORT_FAST_FORWARD)
#define AC_MEDIA_REWIND		ACTION_USAGE_CONSUMER(TRANSPORT_REWIND)
#define AC_MEDIA_STOP		ACTION_USAGE_CONSUMER(TRANSPORT_STOP)
#define AC_MEDIA_PLAY_PAUSE	ACTION_USAGE_CONSUMER(TRANSPORT_PLAY_PAUSE)
#define AC_MEDIA_EJECT		ACTION_USAGE_CONSUMER(TRANSPORT_STOP_EJECT)
#define AC_MEDIA_SELECT		ACTION_USAGE_CONSUMER(APPLAUNCH_CC_CONFIG)
#define AC_MAIL			ACTION_USAGE_CONSUMER(APPLAUNCH_EMAIL)
#define AC_CALCULATOR		ACTION_USAGE_CONSUMER(APPLAUNCH_CALCULATOR)
#define AC_MY_COMPUTER		ACTION_USAGE_CONSUMER(APPLAUNCH_LOCAL_BROWSER)
#define AC_WWW_SEARCH		ACTION_USAGE_CONSUMER(APPCONTROL_SEARCH)
#define AC_WWW_HOME		ACTION_USAGE_CONSUMER(APPCONTROL_HOME)
#define AC_WWW_BACK		ACTION_USAGE_CONSUMER(APPCONTROL_BACK)
#define AC_WWW_FORWARD		ACTION_USAGE_CONSUMER(APPCONTROL_FORWARD)
#define AC_WWW_STOP		ACTION_USAGE_CONSUMER(APPCONTROL_STOP)
#define AC_WWW_REFRESH		ACTION_USAGE_CONSUMER(APPCONTROL_REFRESH)
#define AC_WWW_FAVORITES	ACTION_USAGE_CONSUMER(APPCONTROL_BOOKMARKS)

/* Mousekey */
#define AC_MS_UP		ACTION_MOUSEKEY(KC_MS_UP)
#define AC_MS_DOWN		ACTION_MOUSEKEY(KC_MS_DOWN)
#define AC_MS_LEFT		ACTION_MOUSEKEY(KC_MS_LEFT)
#define AC_MS_RIGHT		ACTION_MOUSEKEY(KC_MS_RIGHT)
#define AC_MS_BTN1		ACTION_MOUSEKEY(KC_MS_BTN1)
#define AC_MS_BTN2		ACTION_MOUSEKEY(KC_MS_BTN2)
#define AC_MS_BTN3		ACTION_MOUSEKEY(KC_MS_BTN3)
#define AC_MS_BTN4		ACTION_MOUSEKEY(KC_MS_BTN4)
#define AC_MS_BTN5		ACTION_MOUSEKEY(KC_MS_BTN5)
#define AC_MS_WH_UP		ACTION_MOUSEKEY(KC_MS_WH_UP)
#define AC_MS_WH_DOWN		ACTION_MOUSEKEY(KC_MS_WH_DOWN)
#define AC_MS_WH_LEFT		ACTION_MOUSEKEY(KC_MS_WH_LEFT)
#define AC_MS_WH_RIGHT		ACTION_MOUSEKEY(KC_MS_WH_RIGHT)
#define AC_MS_ACCEL0		ACTION_MOUSEKEY(KC_MS_ACCEL0)
#define AC_MS_ACCEL1		ACTION_MOUSEKEY(KC_MS_ACCEL1)
#define AC_MS_ACCEL2		ACTION_MOUSEKEY(KC_MS_ACCEL2)

/* Command */
#define AC_BOOTLOADER		ACTION_COMMAND(COMMAND_BOOTLOADER, 0)


/*
 * Short names
 */
#define AC_LCTL			ACTION_KEY(KC_LCTRL)
#define AC_RCTL			ACTION_KEY(KC_RCTRL)
#define AC_LSFT			ACTION_KEY(KC_LSHIFT)
#define AC_RSFT			ACTION_KEY(KC_RSHIFT)
#define AC_ESC 			ACTION_KEY(KC_ESCAPE)
#define AC_BSPC			ACTION_KEY(KC_BSPACE)
#define AC_ENT 			ACTION_KEY(KC_ENTER)
#define AC_DEL 			ACTION_KEY(KC_DELETE)
#define AC_INS 			ACTION_KEY(KC_INSERT)
#define AC_CAPS			ACTION_KEY(KC_CAPSLOCK)
#define AC_CLCK			ACTION_KEY(KC_CAPSLOCK)
#define AC_RGHT			ACTION_KEY(KC_RIGHT)
#define AC_PGDN			ACTION_KEY(KC_PGDOWN)
#define AC_PSCR			ACTION_KEY(KC_PSCREEN)
#define AC_SLCK			ACTION_KEY(KC_SCROLLLOCK)
#define AC_PAUS			ACTION_KEY(KC_PAUSE)
#define AC_BRK 			ACTION_KEY(KC_PAUSE)
#define AC_NLCK			ACTION_KEY(KC_NUMLOCK)
#define AC_SPC 			ACTION_KEY(KC_SPACE)
#define AC_MINS			ACTION_KEY(KC_MINUS)
#define AC_EQL 			ACTION_KEY(KC_EQUAL)
#define AC_GRV 			ACTION_KEY(KC_GRAVE)
#define AC_RBRC			ACTION_KEY(KC_RBRACKET)
#define AC_LBRC			ACTION_KEY(KC_LBRACKET)
#define AC_COMM			ACTION_KEY(KC_COMMA)
#define AC_BSLS			ACTION_KEY(KC_BSLASH)
#define AC_SLSH			ACTION_KEY(KC_SLASH)
#define AC_SCLN			ACTION_KEY(KC_SCOLON)
#define AC_QUOT			ACTION_KEY(KC_QUOTE)
#define AC_APP 			ACTION_KEY(KC_APPLICATION)
#define AC_NUHS			ACTION_KEY(KC_NONUS_HASH)
#define AC_NUBS			ACTION_KEY(KC_NONUS_BSLASH)
#define AC_LCAP			ACTION_KEY(KC_LOCKING_CAPS)
#define AC_LNUM			ACTION_KEY(KC_LOCKING_NUM)
#define AC_LSCR			ACTION_KEY(KC_LOCKING_SCROLL)
#define AC_ERAS			ACTION_KEY(KC_ALT_ERASE,)
#define AC_CLR 			ACTION_KEY(KC_CLEAR)
/* Japanese specific */
#define AC_ZKHK			ACTION_KEY(KC_GRAVE)
#define AC_RO  			ACTION_KEY(KC_INT1)
#define AC_KANA			ACTION_KEY(KC_INT2)
#define AC_JYEN			ACTION_KEY(KC_INT3)
#define AC_HENK			ACTION_KEY(KC_INT4)
#define AC_MHEN			ACTION_KEY(KC_INT5)
/* Keypad */
#define AC_P1  			ACTION_KEY(KC_KP_1)
#define AC_P2  			ACTION_KEY(KC_KP_2)
#define AC_P3  			ACTION_KEY(KC_KP_3)
#define AC_P4  			ACTION_KEY(KC_KP_4)
#define AC_P5  			ACTION_KEY(KC_KP_5)
#define AC_P6  			ACTION_KEY(KC_KP_6)
#define AC_P7  			ACTION_KEY(KC_KP_7)
#define AC_P8  			ACTION_KEY(KC_KP_8)
#define AC_P9  			ACTION_KEY(KC_KP_9)
#define AC_P0  			ACTION_KEY(KC_KP_0)
#define AC_PDOT			ACTION_KEY(KC_KP_DOT)
#define AC_PCMM			ACTION_KEY(KC_KP_COMMA)
#define AC_PSLS			ACTION_KEY(KC_KP_SLASH)
#define AC_PAST			ACTION_KEY(KC_KP_ASTERISK)
#define AC_PMNS			ACTION_KEY(KC_KP_MINUS)
#define AC_PPLS			ACTION_KEY(KC_KP_PLUS)
#define AC_PEQL			ACTION_KEY(KC_KP_EQUAL)
#define AC_PENT			ACTION_KEY(KC_KP_ENTER)
/* Mousekey */
#define AC_MS_U			ACTION_MOUSEKEY(KC_MS_UP)
#define AC_MS_D			ACTION_MOUSEKEY(KC_MS_DOWN)
#define AC_MS_L			ACTION_MOUSEKEY(KC_MS_LEFT)
#define AC_MS_R			ACTION_MOUSEKEY(KC_MS_RIGHT)
#define AC_BTN1			ACTION_MOUSEKEY(KC_MS_BTN1)
#define AC_BTN2			ACTION_MOUSEKEY(KC_MS_BTN2)
#define AC_BTN3			ACTION_MOUSEKEY(KC_MS_BTN3)
#define AC_BTN4			ACTION_MOUSEKEY(KC_MS_BTN4)
#define AC_BTN5			ACTION_MOUSEKEY(KC_MS_BTN5)
#define AC_WH_U			ACTION_MOUSEKEY(KC_MS_WH_UP)
#define AC_WH_D			ACTION_MOUSEKEY(KC_MS_WH_DOWN)
#define AC_WH_L			ACTION_MOUSEKEY(KC_MS_WH_LEFT)
#define AC_WH_R			ACTION_MOUSEKEY(KC_MS_WH_RIGHT)
#define AC_ACL0			ACTION_MOUSEKEY(KC_MS_ACCEL0)
#define AC_ACL1			ACTION_MOUSEKEY(KC_MS_ACCEL1)
#define AC_ACL2			ACTION_MOUSEKEY(KC_MS_ACCEL2)
/* Sytem Control */
#define AC_PWR 			ACTION_USAGE_SYSTEM(SYSTEM_POWER_DOWN)
#define AC_SLEP			ACTION_USAGE_SYSTEM(SYSTEM_SLEEP)
#define AC_WAKE			ACTION_USAGE_SYSTEM(SYSTEM_WAKE_UP)
/* Consumer Page */
#define AC_MUTE			ACTION_USAGE_CONSUMER(AUDIO_MUTE)
#define AC_VOLU			ACTION_USAGE_CONSUMER(AUDIO_VOL_UP)
#define AC_VOLD			ACTION_USAGE_CONSUMER(AUDIO_VOL_DOWN)
#define AC_MNXT			ACTION_USAGE_CONSUMER(TRANSPORT_NEXT_TRACK)
#define AC_MPRV			ACTION_USAGE_CONSUMER(TRANSPORT_PREV_TRACK)
#define AC_MFFD			ACTION_USAGE_CONSUMER(TRANSPORT_FAST_FORWARD)
#define AC_MRWD			ACTION_USAGE_CONSUMER(TRANSPORT_REWIND)
#define AC_MSTP			ACTION_USAGE_CONSUMER(TRANSPORT_STOP)
#define AC_MPLY			ACTION_USAGE_CONSUMER(TRANSPORT_PLAY_PAUSE)
#define AC_EJCT			ACTION_USAGE_CONSUMER(TRANSPORT_STOP_EJECT)
#define AC_MSEL			ACTION_USAGE_CONSUMER(APPLAUNCH_CC_CONFIG)
#define AC_MAIL			ACTION_USAGE_CONSUMER(APPLAUNCH_EMAIL)
#define AC_CALC			ACTION_USAGE_CONSUMER(APPLAUNCH_CALCULATOR)
#define AC_MYCM			ACTION_USAGE_CONSUMER(APPLAUNCH_LOCAL_BROWSER)
#define AC_WSCH			ACTION_USAGE_CONSUMER(APPCONTROL_SEARCH)
#define AC_WHOM			ACTION_USAGE_CONSUMER(APPCONTROL_HOME)
#define AC_WBAK			ACTION_USAGE_CONSUMER(APPCONTROL_BACK)
#define AC_WFWD			ACTION_USAGE_CONSUMER(APPCONTROL_FORWARD)
#define AC_WSTP			ACTION_USAGE_CONSUMER(APPCONTROL_STOP)
#define AC_WREF			ACTION_USAGE_CONSUMER(APPCONTROL_REFRESH)
#define AC_WFAV			ACTION_USAGE_CONSUMER(APPCONTROL_BOOKMARKS)
/* Transparent */
#define AC_TRNS			ACTION_KEY(KC_TRANSPARENT)

/* Command */
#define AC_BTLD			AC_BOOTLOADER

#endif
