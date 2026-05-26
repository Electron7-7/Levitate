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
class ParamSpecDouble;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecDouble> ()
{
  return G_TYPE_PARAM_DOUBLE;
}


namespace GObject
{
class ParamSpecDouble : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecDouble) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecDouble () = delete;
  ParamSpecDouble (const ParamSpecDouble &) = delete;
  ParamSpecDouble (ParamSpecDouble &&) = delete;
  ParamSpecDouble &
  operator = (const ParamSpecDouble &) = delete;
  ParamSpecDouble &
  operator = (ParamSpecDouble &&) = delete;
protected:
  ~ParamSpecDouble () = default;
public:
}; /* class ParamSpecDouble */

static_assert (sizeof (ParamSpecDouble) == sizeof (::GParamSpecDouble),
               "ParamSpecDouble size mismatch");
static_assert (alignof (ParamSpecDouble) == alignof (::GParamSpecDouble),
               "ParamSpecDouble align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
