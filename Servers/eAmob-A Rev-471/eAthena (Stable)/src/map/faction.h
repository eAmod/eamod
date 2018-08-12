/****************************************************************************!
*                            _                                               *
*                           / \                         _                    *
*                   ___    / _ \   _ __ ___   ____  ___| |                   *
*                  / _ \  / /_\ \ | '_ ` _ \./  _ \/  _  |                   *
*                 |  __/ /  ___  \| | | | | |  (_) ) (_) |                   *
*                  \___|/__/   \__\_| |_| |_|\____/\_____/                   *
*                                                                            *
*                               eAmod Script                                 *
*                                                                            *
* \file src/map/faction.h  		                                     *
*                                                                            *
* This file is NOT public - you are not allowed to distribute it.            *
* eAmod is a non Free, extended version of eAthena Ragnarok Private Server.  *
* Authorized Server List :                                                   *
* http://dev.terra-gaming.com/index.php?/topic/72-authorized-eamod-servers/  *
* \author eAmod Project (Andres Garbanzo / Zephyrus)                         *
* \date 2008 - 2011                                                          *
*****************************************************************************/

#ifndef _FACTION_H_
#define _FACTION_H_

#include "../common/mmo.h"

struct block_list;

#define FACTION_MAX 10
#define FACTION_NAME_LENGTH 48
#define LANG_MAX 16
#define LANG_MAX_WORDS 16
#define LANG_MAX_CHARS 17

struct faction_data {
	int faction_id;
	char name[FACTION_NAME_LENGTH];

	int lang_id;
	int alliance_flag;

	int def_ele, ele_lv, size, race;
	unsigned long font_color;
	struct script_code *script;
};

struct lang_data {
	int lang_id;
	char name[NAME_LENGTH];
	char* words[LANG_MAX_CHARS][LANG_MAX_WORDS];
	unsigned short count_words[LANG_MAX_CHARS];
	int max_len;
};

struct faction_data* faction_search(int faction_id);
int faction_get_id(struct block_list* bl);
int faction_get_alliance(struct block_list* bl);

extern const int lang_pow[LANG_MAX];
struct lang_data* lang_search(int lang_id);
char* lang_convert(char* dst, const char* message, size_t size, int lang_id);

void do_init_faction(void);
void do_final_faction(void);

#endif /* _FACTION_H_ */
