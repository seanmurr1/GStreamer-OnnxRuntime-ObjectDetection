/*
 * GStreamer
 * Copyright (C) 2006 Stefan Kost <ensonic@users.sf.net>
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

#ifndef __GST_ORT_ELEMENT_H__
#define __GST_ORT_ELEMENT_H__

#include <gst/gst.h>

// Optimization level for ORT inferencing.
typedef enum {
  GST_ORT_OPTIMIZATION_LEVEL_DISABLE_ALL,
  GST_ORT_OPTIMIZATION_LEVEL_ENABLE_BASIC,
  GST_ORT_OPTIMIZATION_LEVEL_ENABLE_EXTENDED,
  GST_ORT_OPTIMIZATION_LEVEL_ENABLE_ALL
} GstOrtOptimizationLevel;

// Supported ORT execution providers.
typedef enum {
  GST_ORT_EXECUTION_PROVIDER_CPU,
  GST_ORT_EXECUTION_PROVIDER_CUDA
} GstOrtExecutionProvider;

// Supported object detection models.
typedef enum {
  GST_ORT_DETECTION_MODEL_YOLOV4
} GstOrtDetectionModel;

G_BEGIN_DECLS

GType gst_ort_optimization_level_get_type (void);
#define GST_TYPE_ORT_OPTIMIZATION_LEVEL (gst_ort_optimization_level_get_type ())

GType gst_ort_execution_provider_get_type (void);
#define GST_TYPE_ORT_EXECUTION_PROVIDER (gst_ort_execution_provider_get_type ())

GType gst_ort_detection_model_get_type (void);
#define GST_TYPE_ORT_DETECTION_MODEL (gst_ort_detection_model_get_type ())

G_END_DECLS

#endif