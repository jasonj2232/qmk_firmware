// Copyright 2023 Jason Devadoss (@jasonj2232)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Audio Features

#define AUDIO_PIN B7
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY

#define SPEAKER_SHUTDOWN F1

// Haptic Features

#define DRV2605L_FB_ERM_LRA 0
#define DRV2605L_FB_BRAKEFACTOR 3 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define DRV2605L_FB_LOOPGAIN 1 /* For  Low:0, Medium:1, High:2, Very High:3 */

#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_PEAK 5

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
