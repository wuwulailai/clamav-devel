/*
 *  Copyright (C) 2002 - 2006 Tomasz Kojm <tkojm@clamav.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 *
 */

#ifndef __CLAMSCAN_OPT_H
#define __CLAMSCAN_OPT_H

#if HAVE_CONFIG_H
#include "clamav-config.h"
#endif

#include "getopt.h"

const char *clamscan_shortopt = "hvd:wriVl:m";
static struct option clamscan_longopt[] = {
    {"help", 0, 0, 'h'},	    /* clamscan + clamdscan */
    {"quiet", 0, 0, 0},		    /* clamscan + clamdscan */
    {"stdout", 0, 0, 0},	    /* clamscan + clamdscan */
    {"verbose", 0, 0, 'v'},	    /* clamscan + clamdscan */
    {"debug", 0, 0, 0},
    {"version", 0, 0, 'V'},	    /* clamscan + clamdscan */
    {"tempdir", 1, 0, 0},
    {"leave-temps", 0, 0, 0},
    {"config-file", 1, 0, 0},	    /* clamdscan */
    {"database", 1, 0, 'd'},
    {"whole-file", 0, 0, 'w'},	    /* not used */
    {"force", 0, 0, 0},
    {"recursive", 0, 0, 'r'},
    {"bell", 0, 0, 0},
    {"disable-summary", 0, 0, 0},   /* obsolete */
    {"no-summary", 0, 0, 0},
    {"infected", 0, 0, 'i'},
    {"log", 1, 0, 'l'},
    {"log-verbose", 0, 0, 0},	    /* not used */
    {"threads", 1, 0, 0},	    /* not used */
    {"one-virus", 0, 0, 0},	    /* not used */
    {"move", 1, 0, 0},
    {"copy", 1, 0, 0},
    {"remove", 0, 0, 0},
    {"exclude", 1, 0, 0},
    {"exclude-dir", 1, 0, 0},
    {"include", 1, 0, 0},
    {"include-dir", 1, 0, 0},
    {"max-files", 1, 0, 0},
    {"max-space", 1, 0, 0},
    {"max-ratio", 1, 0, 0},
    {"max-recursion", 1, 0, 0},
    {"max-dir-recursion", 1, 0, 0},
    {"max-mail-recursion", 1, 0, 0},
#ifdef HAVE_NCORE
    {"ncore", 0, 0, 0},
#endif
    {"disable-archive", 0, 0, 0},
    {"no-archive", 0, 0, 0},
    {"detect-broken", 0, 0, 0},
    {"block-encrypted", 0, 0, 0},
    {"block-max", 0, 0, 0},
    {"no-pe", 0, 0, 0},
    {"no-elf", 0, 0, 0},
    {"no-ole2", 0, 0, 0},
    {"no-html", 0, 0, 0},
    {"mbox", 0, 0, 'm'},	    /* not used */
    {"no-mail", 0, 0, 0},
    {"mail-follow-urls", 0, 0, 0},
    {"no-phishing", 0, 0, 0},
#ifdef CL_EXPERIMENTAL
    {"no-phishing-scan-urls",0,0,0},
    {"phishing-strict-url-check",0,0,0},
#endif
    {"no-algorithmic", 0, 0, 0},
    {"unzip", 2, 0, 0},
    {"unrar", 2, 0, 0},
    {"unace", 2, 0, 0},		    /* not used */
    {"unarj", 2, 0, 0},		    /* not used */
    {"arj", 2, 0, 0},
    {"zoo", 2, 0, 0},		    /* not used */
    {"unzoo", 2, 0, 0},
    {"lha", 2, 0, 0},
    {"jar", 2, 0, 0},
    {"tar", 2, 0, 0},
    {"tgz", 2, 0, 0},
    {"deb", 2, 0, 0},

    /* developers only */
    {"dev-ac-only", 0, 0, 0},
    {"dev-ac-depth", 1, 0, 0},

    {0, 0, 0, 0}
};

#endif
