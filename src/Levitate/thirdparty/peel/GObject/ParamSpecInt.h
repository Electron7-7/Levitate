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
class ParamSpecInt;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecInt> ()
{
  return G_TYPE_PARAM_INT;
}


namespace GObject
{
class ParamSpecInt : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecInt) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecInt () = delete;
  ParamSpecInt (const ParamSpecInt &) = delete;
  ParamSpecInt (ParamSpecInt &&) = delete;
  ParamSpecInt &
  operator = (const ParamSpecInt &) = delete;
  ParamSpecInt &
  operator = (ParamSpecInt &&) = delete;
protected:
  ~ParamSpecInt () = default;
public:
}; /* class ParamSpecInt */

static_assert (sizeof (ParamSpecInt) == sizeof (::GParamSpecInt),
               "ParamSpecInt size mismatch");
static_assert (alignof (ParamSpecInt) == alignof (::GParamSpecInt),
               "ParamSpecInt align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
