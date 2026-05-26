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
class ParamSpecOverride;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecOverride> ()
{
  return G_TYPE_PARAM_OVERRIDE;
}


namespace GObject
{
class ParamSpecOverride : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecOverride) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecOverride () = delete;
  ParamSpecOverride (const ParamSpecOverride &) = delete;
  ParamSpecOverride (ParamSpecOverride &&) = delete;
  ParamSpecOverride &
  operator = (const ParamSpecOverride &) = delete;
  ParamSpecOverride &
  operator = (ParamSpecOverride &&) = delete;
protected:
  ~ParamSpecOverride () = default;
public:
}; /* class ParamSpecOverride */

static_assert (sizeof (ParamSpecOverride) == sizeof (::GParamSpecOverride),
               "ParamSpecOverride size mismatch");
static_assert (alignof (ParamSpecOverride) == alignof (::GParamSpecOverride),
               "ParamSpecOverride align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
