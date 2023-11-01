// Copyright 2023 Jason Devadoss (@jasonj2232)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Audio Configuration

#define AUDIO_PIN B7
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY

#define SPEAKER_SHUTDOWN F1

// Haptic Configuration

#define DRV2605L_FB_ERM_LRA 0
#define DRV2605L_FB_BRAKEFACTOR 3 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define DRV2605L_FB_LOOPGAIN 1 /* For  Low:0, Medium:1, High:2, Very High:3 */

#define DRV2605L_RATED_VOLTAGE 3
#define DRV2605L_V_PEAK 4

// RGB Configuration

#define RGBLIGHT_LIMIT_VAL 60
#define RGBLIGHT_LED_MAP { 1, 2, 3, 5, 7, 9, 11, 16, 17, 19, 21, 23, 24, 25, 4, 6, 8, 12, 15, 18, 20, 22, 14, 13, 10 }

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
