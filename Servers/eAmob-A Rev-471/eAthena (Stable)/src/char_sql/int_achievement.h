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
* \file src/char_sql/int_achievement.h                                       *
*                                                                            *
* This file is NOT public - you are not allowed to distribute it.            *
* eAmod is a non Free, extended version of eAthena Ragnarok Private Server.  *
* Authorized Server List :                                                   *
* http://dev.terra-gaming.com/index.php?/topic/72-authorized-eamod-servers/  *
* \author eAmod Project (Andres Garbanzo / Zephyrus)                         *
* \date 2008 - 2011                                                          *
*****************************************************************************/

#ifndef _INT_ACHIEVEMENT_SQL_H_
#define _INT_ACHIEVEMENT_SQL_H_

int inter_achievement_parse_frommap(int fd);

int inter_achievement_sql_init(void);
void inter_achievement_sql_final(void);

#endif /* _INT_ACHIEVEMENT_SQL_H_ */
