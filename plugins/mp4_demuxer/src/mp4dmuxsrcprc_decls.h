/**
 * Copyright (C) 2011-2017 Aratelia Limited - Juan A. Rubio
 *
 * This file is part of Tizonia
 *
 * Tizonia is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Tizonia is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tizonia.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * @file   mp4dmuxsrcprc_decls.h
 * @author Juan A. Rubio <juan.rubio@aratelia.com>
 *
 * @brief  Tizonia - MP4 Demuxer processor declarations
 *
 *
 */

#ifndef MP4DMUXSRCPRC_DECLS_H
#define MP4DMUXSRCPRC_DECLS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include <OMX_Core.h>

#include <tizprc_decls.h>

#include <tizplatform.h>

typedef struct mp4dmuxsrc_prc mp4dmuxsrc_prc_t;
struct mp4dmuxsrc_prc
{
  /* Object */
  const tiz_prc_t _;
  OMX_BUFFERHEADERTYPE * p_outhdr_;
  OMX_PARAM_CONTENTURITYPE * p_uri_;
  tiz_urltrans_t * p_trans_;
  bool eos_;
  bool port_disabled_;
  bool uri_changed_;
  bool auto_detect_on_;
  OMX_S32 audio_coding_type_;
  int bitrate_;
  int cache_bytes_;
};

typedef struct mp4dmuxsrc_prc_class mp4dmuxsrc_prc_class_t;
struct mp4dmuxsrc_prc_class
{
  /* Class */
  const tiz_prc_class_t _;
  /* NOTE: Class methods might be added in the future */
};

#ifdef __cplusplus
}
#endif

#endif /* MP4DMUXSRCPRC_DECLS_H */
