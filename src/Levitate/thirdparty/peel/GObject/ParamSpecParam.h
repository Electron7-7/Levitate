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
class ParamSpecParam;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecParam> ()
{
  return G_TYPE_PARAM_PARAM;
}


namespace GObject
{
class ParamSpecParam : public ParamSpec
{
private:
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecParam () = delete;
  ParamSpecParam (const ParamSpecParam &) = delete;
  ParamSpecParam (ParamSpecParam &&) = delete;
  ParamSpecParam &
  operator = (const ParamSpecParam &) = delete;
  ParamSpecParam &
  operator = (ParamSpecParam &&) = delete;
protected:
  ~ParamSpecParam () = default;
public:
}; /* class ParamSpecParam */

static_assert (sizeof (ParamSpecParam) == sizeof (::GParamSpecParam),
               "ParamSpecParam size mismatch");
static_assert (alignof (ParamSpecParam) == alignof (::GParamSpecParam),
               "ParamSpecParam align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
