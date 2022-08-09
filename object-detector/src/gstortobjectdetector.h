/* 
 * GStreamer
 * Copyright (C) 2006 Stefan Kost <ensonic@users.sf.net>
 * Copyright (C) 2020 Niels De Graef <niels.degraef@gmail.com>
 * Copyright (C) 2022  <<user@hostname.org>>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
 
#ifndef __GST_ORTOBJECTDETECTOR_H__
#define __GST_ORTOBJECTDETECTOR_H__

#include <gst/gst.h>
#include <gst/base/gstbasetransform.h>

#include "gstortelement.h"

G_BEGIN_DECLS

#define GST_TYPE_ORTOBJECTDETECTOR (gst_ortobjectdetector_get_type())
G_DECLARE_FINAL_TYPE (Gstortobjectdetector, gst_ortobjectdetector,
    GST, ORTOBJECTDETECTOR, GstBaseTransform)

struct _Gstortobjectdetector {
  GstBaseTransform element;

  gchar *model_file;
  gchar *label_file;
  gpointer ort_client;

  gfloat score_threshold;
  gfloat nms_threshold;

  gint device_id;
  GstOrtOptimizationLevel optimization_level;
  GstOrtExecutionProvider execution_provider;
  GstOrtDetectionModel detection_model;
};

G_END_DECLS

#endif /* __GST_ORTOBJECTDETECTOR_H__ */
