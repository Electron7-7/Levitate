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
class ParamSpecInt64;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecInt64> ()
{
  return G_TYPE_PARAM_INT64;
}


namespace GObject
{
class ParamSpecInt64 : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecInt64) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecInt64 () = delete;
  ParamSpecInt64 (const ParamSpecInt64 &) = delete;
  ParamSpecInt64 (ParamSpecInt64 &&) = delete;
  ParamSpecInt64 &
  operator = (const ParamSpecInt64 &) = delete;
  ParamSpecInt64 &
  operator = (ParamSpecInt64 &&) = delete;
protected:
  ~ParamSpecInt64 () = default;
public:
}; /* class ParamSpecInt64 */

static_assert (sizeof (ParamSpecInt64) == sizeof (::GParamSpecInt64),
               "ParamSpecInt64 size mismatch");
static_assert (alignof (ParamSpecInt64) == alignof (::GParamSpecInt64),
               "ParamSpecInt64 align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
