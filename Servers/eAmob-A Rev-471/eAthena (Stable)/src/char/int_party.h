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
* \file src/char/int_party.h                                                 *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _INT_PARTY_H_
#define _INT_PARTY_H_

struct party;
struct mmo_charstatus;

int inter_party_init(void);
void inter_party_final(void);
int inter_party_save(void);
int inter_party_parse_frommap(int fd);
int inter_party_leave(int party_id,int account_id, int char_id);
bool inter_party_update(struct mmo_charstatus* cd);

extern char party_txt[1024];

//For the TXT->SQL converter
int inter_party_fromstr(char *str, struct party *p);

#endif /* _INT_PARTY_H_ */
