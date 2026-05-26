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
class ParamSpecGType;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecGType> ()
{
  return G_TYPE_PARAM_GTYPE;
}


namespace GObject
{
class ParamSpecGType : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecGType) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecGType () = delete;
  ParamSpecGType (const ParamSpecGType &) = delete;
  ParamSpecGType (ParamSpecGType &&) = delete;
  ParamSpecGType &
  operator = (const ParamSpecGType &) = delete;
  ParamSpecGType &
  operator = (ParamSpecGType &&) = delete;
protected:
  ~ParamSpecGType () = default;
public:
}; /* class ParamSpecGType */

static_assert (sizeof (ParamSpecGType) == sizeof (::GParamSpecGType),
               "ParamSpecGType size mismatch");
static_assert (alignof (ParamSpecGType) == alignof (::GParamSpecGType),
               "ParamSpecGType align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
