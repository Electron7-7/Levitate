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
class ParamSpecEnum;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecEnum> ()
{
  return G_TYPE_PARAM_ENUM;
}


namespace GObject
{
class ParamSpecEnum : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecEnum) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecEnum () = delete;
  ParamSpecEnum (const ParamSpecEnum &) = delete;
  ParamSpecEnum (ParamSpecEnum &&) = delete;
  ParamSpecEnum &
  operator = (const ParamSpecEnum &) = delete;
  ParamSpecEnum &
  operator = (ParamSpecEnum &&) = delete;
protected:
  ~ParamSpecEnum () = default;
public:
}; /* class ParamSpecEnum */

static_assert (sizeof (ParamSpecEnum) == sizeof (::GParamSpecEnum),
               "ParamSpecEnum size mismatch");
static_assert (alignof (ParamSpecEnum) == alignof (::GParamSpecEnum),
               "ParamSpecEnum align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
