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
class ParamSpecObject;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecObject> ()
{
  return G_TYPE_PARAM_OBJECT;
}


namespace GObject
{
class ParamSpecObject : public ParamSpec
{
private:
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecObject () = delete;
  ParamSpecObject (const ParamSpecObject &) = delete;
  ParamSpecObject (ParamSpecObject &&) = delete;
  ParamSpecObject &
  operator = (const ParamSpecObject &) = delete;
  ParamSpecObject &
  operator = (ParamSpecObject &&) = delete;
protected:
  ~ParamSpecObject () = default;
public:
}; /* class ParamSpecObject */

static_assert (sizeof (ParamSpecObject) == sizeof (::GParamSpecObject),
               "ParamSpecObject size mismatch");
static_assert (alignof (ParamSpecObject) == alignof (::GParamSpecObject),
               "ParamSpecObject align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
