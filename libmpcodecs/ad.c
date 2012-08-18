/*
 * audio decoder interface
 *
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"

#include "stream/stream.h"
#include "libmpdemux/demuxer.h"
#include "libmpdemux/stheader.h"
#include "ad.h"

/* Missed vorbis, mad, dshow */

extern const ad_functions_t mpcodecs_ad_mpg123;
extern const ad_functions_t mpcodecs_ad_ffmpeg;
extern const ad_functions_t mpcodecs_ad_liba52;
extern const ad_functions_t mpcodecs_ad_hwac3;
extern const ad_functions_t mpcodecs_ad_hwmpa;
extern const ad_functions_t mpcodecs_ad_pcm;
extern const ad_functions_t mpcodecs_ad_dvdpcm;
extern const ad_functions_t mpcodecs_ad_alaw;
extern const ad_functions_t mpcodecs_ad_imaadpcm;
extern const ad_functions_t mpcodecs_ad_faad;
extern const ad_functions_t mpcodecs_ad_libmad;
extern const ad_functions_t mpcodecs_ad_spdif;
extern const ad_functions_t mpcodecs_ad_libdca;

const ad_functions_t * const mpcodecs_ad_drivers[] =
{
#ifdef CONFIG_MPG123
  &mpcodecs_ad_mpg123,
#endif
#ifdef CONFIG_LIBA52
  &mpcodecs_ad_liba52,
#endif
  &mpcodecs_ad_hwac3,
  &mpcodecs_ad_hwmpa,
  &mpcodecs_ad_ffmpeg,
  &mpcodecs_ad_spdif,
  &mpcodecs_ad_pcm,
  &mpcodecs_ad_dvdpcm,
  &mpcodecs_ad_alaw,
  &mpcodecs_ad_imaadpcm,
#ifdef CONFIG_FAAD
  &mpcodecs_ad_faad,
#endif
#ifdef CONFIG_LIBMAD
  &mpcodecs_ad_libmad,
#endif
#ifdef CONFIG_LIBDCA
  &mpcodecs_ad_libdca,
#endif
  NULL
};
