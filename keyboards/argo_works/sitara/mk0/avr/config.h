// Copyright 2023 Jason Devadoss (@jasonj2232)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Audio Features

#define AUDIO_PIN B7
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY

#define SPEAKER_SHUTDOWN F1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
