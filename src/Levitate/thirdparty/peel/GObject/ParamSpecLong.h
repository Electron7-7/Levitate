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
class ParamSpecLong;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecLong> ()
{
  return G_TYPE_PARAM_LONG;
}


namespace GObject
{
class ParamSpecLong : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecLong) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecLong () = delete;
  ParamSpecLong (const ParamSpecLong &) = delete;
  ParamSpecLong (ParamSpecLong &&) = delete;
  ParamSpecLong &
  operator = (const ParamSpecLong &) = delete;
  ParamSpecLong &
  operator = (ParamSpecLong &&) = delete;
protected:
  ~ParamSpecLong () = default;
public:
}; /* class ParamSpecLong */

static_assert (sizeof (ParamSpecLong) == sizeof (::GParamSpecLong),
               "ParamSpecLong size mismatch");
static_assert (alignof (ParamSpecLong) == alignof (::GParamSpecLong),
               "ParamSpecLong align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
