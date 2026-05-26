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
class ParamSpecBoxed;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecBoxed> ()
{
  return G_TYPE_PARAM_BOXED;
}


namespace GObject
{
class ParamSpecBoxed : public ParamSpec
{
private:
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecBoxed () = delete;
  ParamSpecBoxed (const ParamSpecBoxed &) = delete;
  ParamSpecBoxed (ParamSpecBoxed &&) = delete;
  ParamSpecBoxed &
  operator = (const ParamSpecBoxed &) = delete;
  ParamSpecBoxed &
  operator = (ParamSpecBoxed &&) = delete;
protected:
  ~ParamSpecBoxed () = default;
public:
}; /* class ParamSpecBoxed */

static_assert (sizeof (ParamSpecBoxed) == sizeof (::GParamSpecBoxed),
               "ParamSpecBoxed size mismatch");
static_assert (alignof (ParamSpecBoxed) == alignof (::GParamSpecBoxed),
               "ParamSpecBoxed align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
