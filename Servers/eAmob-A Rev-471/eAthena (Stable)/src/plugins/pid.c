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
* \file src/plugins/pid.c	                                             *
*                                                                            *
* Primary Description.                                                       *
* More elaborate description of the file.                                    *
* \author ?		                                                     *
* \date ?                                                                    *
*****************************************************************************/
#include <stdio.h>
#include <string.h>

#if !defined _WIN32 || defined MINGW
	#include <unistd.h> // getpid(), unlink()
#else
	#include <windows.h>
	#define getpid GetCurrentProcessId
#endif

#include "../common/plugin.h"

PLUGIN_INFO = {
	"ProcessId",
	PLUGIN_ALL,
	"1.0",
	PLUGIN_VERSION,
	"Logs the process ID"
};

PLUGIN_EVENTS_TABLE = {
	{ "pid_create", "Plugin_Init" },
	{ "pid_delete", "Plugin_Final" },
	{ NULL, NULL }
};

char pid_file[256];
char *server_name;

void pid_create ()
{
	FILE *fp;
	int len;
	
	IMPORT_SYMBOL(server_name, 1);
	len = strlen(server_name);
	strcpy(pid_file, server_name);
	if(len > 4 && pid_file[len - 4] == '.') {
		pid_file[len - 4] = 0;
	}
	strcat(pid_file, ".pid");
	fp = fopen(pid_file, "w");
	if (fp) {
		fprintf(fp, "%d", getpid());
		fclose(fp);
	}
}

void pid_delete ()
{
	unlink(pid_file);
}
