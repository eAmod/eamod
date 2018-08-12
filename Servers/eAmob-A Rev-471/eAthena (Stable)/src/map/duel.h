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
* \file src/map/duel.h		                                             *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _DUEL_H_
#define _DUEL_H_

struct duel {
	int members_count;
	int invites_count;
	int max_players_limit;
};

#define MAX_DUEL 1024
extern struct duel duel_list[MAX_DUEL];
extern int duel_count;

//Duel functions // [LuzZza]
int duel_create(struct map_session_data* sd, const unsigned int maxpl);
int duel_invite(const unsigned int did, struct map_session_data* sd, struct map_session_data* target_sd);
int duel_accept(const unsigned int did, struct map_session_data* sd);
int duel_reject(const unsigned int did, struct map_session_data* sd);
int duel_leave(const unsigned int did, struct map_session_data* sd);
int duel_showinfo(const unsigned int did, struct map_session_data* sd);
int duel_checktime(struct map_session_data* sd);

int do_init_duel(void);
void do_final_duel(void);

#endif /* _DUEL_H_ */
