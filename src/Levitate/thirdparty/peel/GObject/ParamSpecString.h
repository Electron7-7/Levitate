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
class ParamSpecString;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecString> ()
{
  return G_TYPE_PARAM_STRING;
}


namespace GObject
{
class ParamSpecString : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecString) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecString () = delete;
  ParamSpecString (const ParamSpecString &) = delete;
  ParamSpecString (ParamSpecString &&) = delete;
  ParamSpecString &
  operator = (const ParamSpecString &) = delete;
  ParamSpecString &
  operator = (ParamSpecString &&) = delete;
protected:
  ~ParamSpecString () = default;
public:
}; /* class ParamSpecString */

static_assert (sizeof (ParamSpecString) == sizeof (::GParamSpecString),
               "ParamSpecString size mismatch");
static_assert (alignof (ParamSpecString) == alignof (::GParamSpecString),
               "ParamSpecString align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
