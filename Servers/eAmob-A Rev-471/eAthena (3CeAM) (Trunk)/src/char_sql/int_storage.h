/****************************************************************************!
*                            _                                               *
*                           / \                         _                    *
*                   ___    / _ \   _ __ ___   ____  ___| |                   *
*                  / _ \  / /_\ \ | '_ ` _ \./  _ \/  _  |                   *
*                 |  __/ /  ___  \| | | | | |  (_) ) (_) |                   *
*                  \___|/__/   \__\_| |_| |_|\____/\_____/                   *
*                                                                            *
*                            eAmod Source File                               *
*                                                                            *
******************************************************************************
* src/char_sql/int_storage.h                                                 *
******************************************************************************
* Copyright (c) eAmod Dev Team                                               *
* Copyright (c) rAthena Dev Team                                             *
* Copyright (c) brAthena Dev Team                                            *
* Copyright (c) Hercules Dev Team                                            *
* Copyright (c) 3CeAM Dev Team                                               *
* Copyright (c) Athena Dev Teams                                             *
*                                                                            *
* Licensed under GNU GPL                                                     *
* For more information read the LICENSE file in the root of the emulator     *
*****************************************************************************/

#ifndef _INT_STORAGE_SQL_H_
#define _INT_STORAGE_SQL_H_

struct storage_data;
struct ext_storage_data;
struct guild_storage;

int inter_storage_sql_init(void);
void inter_storage_sql_final(void);
int inter_storage_delete(int account_id);
int inter_rentstorage_delete(int account_id); // [ZephStorage]
int inter_guild_storage_delete(int guild_id);

int inter_storage_parse_frommap(int fd);

//Exported for use in the TXT-SQL converter.
int storage_fromsql(int account_id, struct storage_data* p);
int ext_storage_fromsql(int account_id, struct extra_storage_data *p);
int guild_storage_tosql(int guild_id, struct guild_storage *p);

#endif /* _INT_STORAGE_SQL_H_ */
