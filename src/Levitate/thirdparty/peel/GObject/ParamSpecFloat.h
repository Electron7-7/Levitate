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
class ParamSpecFloat;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecFloat> ()
{
  return G_TYPE_PARAM_FLOAT;
}


namespace GObject
{
class ParamSpecFloat : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecFloat) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecFloat () = delete;
  ParamSpecFloat (const ParamSpecFloat &) = delete;
  ParamSpecFloat (ParamSpecFloat &&) = delete;
  ParamSpecFloat &
  operator = (const ParamSpecFloat &) = delete;
  ParamSpecFloat &
  operator = (ParamSpecFloat &&) = delete;
protected:
  ~ParamSpecFloat () = default;
public:
}; /* class ParamSpecFloat */

static_assert (sizeof (ParamSpecFloat) == sizeof (::GParamSpecFloat),
               "ParamSpecFloat size mismatch");
static_assert (alignof (ParamSpecFloat) == alignof (::GParamSpecFloat),
               "ParamSpecFloat align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
