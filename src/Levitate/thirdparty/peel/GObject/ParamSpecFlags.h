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
class ParamSpecFlags;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecFlags> ()
{
  return G_TYPE_PARAM_FLAGS;
}


namespace GObject
{
class ParamSpecFlags : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecFlags) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecFlags () = delete;
  ParamSpecFlags (const ParamSpecFlags &) = delete;
  ParamSpecFlags (ParamSpecFlags &&) = delete;
  ParamSpecFlags &
  operator = (const ParamSpecFlags &) = delete;
  ParamSpecFlags &
  operator = (ParamSpecFlags &&) = delete;
protected:
  ~ParamSpecFlags () = default;
public:
}; /* class ParamSpecFlags */

static_assert (sizeof (ParamSpecFlags) == sizeof (::GParamSpecFlags),
               "ParamSpecFlags size mismatch");
static_assert (alignof (ParamSpecFlags) == alignof (::GParamSpecFlags),
               "ParamSpecFlags align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
