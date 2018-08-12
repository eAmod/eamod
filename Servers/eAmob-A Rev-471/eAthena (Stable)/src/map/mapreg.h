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
* \file src/map/mapreg.h     		                                             *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _MAPREG_H_
#define _MAPREG_H_

void mapreg_reload(void);
void mapreg_final(void);
void mapreg_init(void);
bool mapreg_config_read(const char* w1, const char* w2);

int mapreg_readreg(int uid);
char* mapreg_readregstr(int uid);
bool mapreg_setreg(int uid, int val);
bool mapreg_setregstr(int uid, const char* str);

#endif /* _MAPREG_H_ */
