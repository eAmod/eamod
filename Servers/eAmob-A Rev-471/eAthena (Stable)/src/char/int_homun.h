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
* \file src/char/int_homun.h                                                 *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _INT_HOMUN_H_
#define _INT_HOMUN_H_

int inter_homun_init(void);
void inter_homun_final(void);
int inter_homun_save(void);
int inter_homun_delete(int homun_id);
int inter_homun_parse_frommap(int fd);

extern char homun_txt[1024];

#endif /* _INT_HOMUN_H_ */
