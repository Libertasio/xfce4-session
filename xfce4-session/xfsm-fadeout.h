/* $Id$ */
/*-
 * Copyright (c) 2004 Benedikt Meurer <benny@xfce.org>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *                                                                              
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *                                                                              
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Parts of this file where taken from gnome-session/logout.c, which
 * was written by Owen Taylor <otaylor@redhat.com>.
 */

#ifndef __XFSM_FADEOUT_H__
#define __XFSM_FADEOUT_H__

#include <xfce4-session/xfsm-splash-theme.h>

typedef struct _XfsmFadeout XfsmFadeout;

XfsmFadeout *xfsm_fadeout_new (GdkDisplay            *display,
                               const XfsmSplashTheme *theme);

void xfsm_fadeout_destroy (XfsmFadeout *fadeout);

#endif /* !__XFSM_FADEOUT_H__ */
