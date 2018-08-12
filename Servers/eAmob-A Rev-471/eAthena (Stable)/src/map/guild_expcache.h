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
* \file src/map/guild_expcache.h                                             *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/


#ifndef _GUILD_EXPCACHE_H_
#define _GUILD_EXPCACHE_H_


unsigned int guild_addexp(int guild_id, int account_id, int char_id, unsigned int exp);
void do_init_guild_expcache(void);
void do_final_guild_expcache(void);


#endif // _GUILD_EXPCACHE_H_
