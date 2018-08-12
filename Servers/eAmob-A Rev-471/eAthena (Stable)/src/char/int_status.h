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
* \file src/char/int_status.h                                                *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _INT_STATUS_H_
#define _INT_STATUS_H_

struct status_change_data;

struct scdata {
	int account_id, char_id;
	int count;
	struct status_change_data* data;
};

extern char scdata_txt[1024];

struct scdata* status_search_scdata(int aid, int cid);
void status_delete_scdata(int aid, int cid);
void inter_status_save(void);
void status_init(void);
void status_final(void);

#endif /* _INT_STATUS_H_ */
