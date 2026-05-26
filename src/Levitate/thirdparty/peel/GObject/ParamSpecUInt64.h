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
#include <peel/GObject/ParamSpec.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class ParamSpecUInt64;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecUInt64> ()
{
  return G_TYPE_PARAM_UINT64;
}


namespace GObject
{
class ParamSpecUInt64 : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecUInt64) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecUInt64 () = delete;
  ParamSpecUInt64 (const ParamSpecUInt64 &) = delete;
  ParamSpecUInt64 (ParamSpecUInt64 &&) = delete;
  ParamSpecUInt64 &
  operator = (const ParamSpecUInt64 &) = delete;
  ParamSpecUInt64 &
  operator = (ParamSpecUInt64 &&) = delete;
protected:
  ~ParamSpecUInt64 () = default;
public:
}; /* class ParamSpecUInt64 */

static_assert (sizeof (ParamSpecUInt64) == sizeof (::GParamSpecUInt64),
               "ParamSpecUInt64 size mismatch");
static_assert (alignof (ParamSpecUInt64) == alignof (::GParamSpecUInt64),
               "ParamSpecUInt64 align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
