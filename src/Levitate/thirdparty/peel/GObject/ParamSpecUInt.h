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
class ParamSpecUInt;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecUInt> ()
{
  return G_TYPE_PARAM_UINT;
}


namespace GObject
{
class ParamSpecUInt : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecUInt) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecUInt () = delete;
  ParamSpecUInt (const ParamSpecUInt &) = delete;
  ParamSpecUInt (ParamSpecUInt &&) = delete;
  ParamSpecUInt &
  operator = (const ParamSpecUInt &) = delete;
  ParamSpecUInt &
  operator = (ParamSpecUInt &&) = delete;
protected:
  ~ParamSpecUInt () = default;
public:
}; /* class ParamSpecUInt */

static_assert (sizeof (ParamSpecUInt) == sizeof (::GParamSpecUInt),
               "ParamSpecUInt size mismatch");
static_assert (alignof (ParamSpecUInt) == alignof (::GParamSpecUInt),
               "ParamSpecUInt align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
