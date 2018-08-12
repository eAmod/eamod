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
* \file src/common/md5calc.h                                                 *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author ?                                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef _MD5CALC_H_
#define _MD5CALC_H_

void MD5_String(const char * string, char * output);
void MD5_Binary(const char * string, unsigned char * output);
void MD5_Salt(unsigned int len, char * output);

#endif /* _MD5CALC_H_ */
