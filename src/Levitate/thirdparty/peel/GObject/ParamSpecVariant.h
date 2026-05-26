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
class ParamSpecVariant;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecVariant> ()
{
  return G_TYPE_PARAM_VARIANT;
}


namespace GObject
{
class ParamSpecVariant : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecVariant) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecVariant () = delete;
  ParamSpecVariant (const ParamSpecVariant &) = delete;
  ParamSpecVariant (ParamSpecVariant &&) = delete;
  ParamSpecVariant &
  operator = (const ParamSpecVariant &) = delete;
  ParamSpecVariant &
  operator = (ParamSpecVariant &&) = delete;
protected:
  ~ParamSpecVariant () = default;
public:
}; /* class ParamSpecVariant */

static_assert (sizeof (ParamSpecVariant) == sizeof (::GParamSpecVariant),
               "ParamSpecVariant size mismatch");
static_assert (alignof (ParamSpecVariant) == alignof (::GParamSpecVariant),
               "ParamSpecVariant align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
