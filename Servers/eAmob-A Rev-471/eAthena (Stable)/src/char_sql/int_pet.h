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
* \file src/char_sql/int_pet.h                                               *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _INT_PET_SQL_H_
#define _INT_PET_SQL_H_

struct s_pet;

int inter_pet_init(void);
void inter_pet_sql_final(void);
int inter_pet_save(void);
int inter_pet_delete(int pet_id);

int inter_pet_parse_frommap(int fd);
int inter_pet_sql_init(void);
//extern char pet_txt[256];

//Exported for use in the TXT-SQL converter.
int inter_pet_tosql(int pet_id, struct s_pet *p);

#endif /* _INT_PET_SQL_H_ */
