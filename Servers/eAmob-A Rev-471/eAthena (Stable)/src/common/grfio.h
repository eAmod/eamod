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
* \file src/common/grfio.h                                                   *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author eAthena Dev Teams                                                  *
* \date ?                                                                    *
*****************************************************************************/

#ifndef	_GRFIO_H_
#define	_GRFIO_H_

void grfio_init(const char* fname);
void grfio_final(void);
void* grfio_reads(const char* fname, int* size);
char* grfio_find_file(const char* fname);
#define grfio_read(fn) grfio_reads(fn, NULL)

unsigned long grfio_crc32(const unsigned char *buf, unsigned int len);
int decode_zip(void* dest, unsigned long* destLen, const void* source, unsigned long sourceLen);
int encode_zip(void* dest, unsigned long* destLen, const void* source, unsigned long sourceLen);

#endif /* _GRFIO_H_ */
