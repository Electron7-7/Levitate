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
class ParamSpecBoolean;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecBoolean> ()
{
  return G_TYPE_PARAM_BOOLEAN;
}


namespace GObject
{
class ParamSpecBoolean : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecBoolean) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecBoolean () = delete;
  ParamSpecBoolean (const ParamSpecBoolean &) = delete;
  ParamSpecBoolean (ParamSpecBoolean &&) = delete;
  ParamSpecBoolean &
  operator = (const ParamSpecBoolean &) = delete;
  ParamSpecBoolean &
  operator = (ParamSpecBoolean &&) = delete;
protected:
  ~ParamSpecBoolean () = default;
public:
}; /* class ParamSpecBoolean */

static_assert (sizeof (ParamSpecBoolean) == sizeof (::GParamSpecBoolean),
               "ParamSpecBoolean size mismatch");
static_assert (alignof (ParamSpecBoolean) == alignof (::GParamSpecBoolean),
               "ParamSpecBoolean align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
