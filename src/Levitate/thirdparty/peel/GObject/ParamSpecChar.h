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
class ParamSpecChar;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecChar> ()
{
  return G_TYPE_PARAM_CHAR;
}


namespace GObject
{
class ParamSpecChar : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecChar) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecChar () = delete;
  ParamSpecChar (const ParamSpecChar &) = delete;
  ParamSpecChar (ParamSpecChar &&) = delete;
  ParamSpecChar &
  operator = (const ParamSpecChar &) = delete;
  ParamSpecChar &
  operator = (ParamSpecChar &&) = delete;
protected:
  ~ParamSpecChar () = default;
public:
}; /* class ParamSpecChar */

static_assert (sizeof (ParamSpecChar) == sizeof (::GParamSpecChar),
               "ParamSpecChar size mismatch");
static_assert (alignof (ParamSpecChar) == alignof (::GParamSpecChar),
               "ParamSpecChar align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
