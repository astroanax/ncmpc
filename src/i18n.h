// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright The Music Player Daemon Project

#ifndef I18N_H
#define I18N_H

#include "config.h"

#ifdef ENABLE_NLS

#include <libintl.h> // IWYU pragma: export

#define _(x) gettext(x)

#ifdef gettext_noop
#define N_(x) gettext_noop(x)
#else
#define N_(x) (x)
#endif

#else
#define gettext(x) (x)
#define  _(x) x
#define N_(x) x
#endif

#define YES_TRANSLATION _("y")
#define NO_TRANSLATION _("n")

#endif
