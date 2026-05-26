#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct ParamSpecTypeInfo;
} /* namespace GObject */


namespace GObject
{
struct ParamSpecTypeInfo
{
private:
  ParamSpecTypeInfo () = delete;
  ParamSpecTypeInfo (const ParamSpecTypeInfo &) = delete;
  ParamSpecTypeInfo (ParamSpecTypeInfo &&) = delete;
  ~ParamSpecTypeInfo ();

public:
  uint16_t instance_size;
  uint16_t n_preallocs;
private:
  decltype (::GParamSpecTypeInfo::instance_init) instance_init;
public:
  GObject::Type value_type;
private:
  decltype (::GParamSpecTypeInfo::finalize) finalize;
  decltype (::GParamSpecTypeInfo::value_set_default) value_set_default;
  decltype (::GParamSpecTypeInfo::value_validate) value_validate;
  decltype (::GParamSpecTypeInfo::values_cmp) values_cmp;

public:
}; /* record ParamSpecTypeInfo */

static_assert (sizeof (ParamSpecTypeInfo) == sizeof (::GParamSpecTypeInfo),
               "ParamSpecTypeInfo size mismatch");
static_assert (alignof (ParamSpecTypeInfo) == alignof (::GParamSpecTypeInfo),
               "ParamSpecTypeInfo align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
