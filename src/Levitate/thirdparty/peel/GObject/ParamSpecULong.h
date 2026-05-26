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
class ParamSpecULong;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecULong> ()
{
  return G_TYPE_PARAM_ULONG;
}


namespace GObject
{
class ParamSpecULong : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecULong) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecULong () = delete;
  ParamSpecULong (const ParamSpecULong &) = delete;
  ParamSpecULong (ParamSpecULong &&) = delete;
  ParamSpecULong &
  operator = (const ParamSpecULong &) = delete;
  ParamSpecULong &
  operator = (ParamSpecULong &&) = delete;
protected:
  ~ParamSpecULong () = default;
public:
}; /* class ParamSpecULong */

static_assert (sizeof (ParamSpecULong) == sizeof (::GParamSpecULong),
               "ParamSpecULong size mismatch");
static_assert (alignof (ParamSpecULong) == alignof (::GParamSpecULong),
               "ParamSpecULong align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
