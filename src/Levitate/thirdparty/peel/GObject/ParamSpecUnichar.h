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
class ParamSpecUnichar;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecUnichar> ()
{
  return G_TYPE_PARAM_UNICHAR;
}


namespace GObject
{
class ParamSpecUnichar : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecUnichar) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecUnichar () = delete;
  ParamSpecUnichar (const ParamSpecUnichar &) = delete;
  ParamSpecUnichar (ParamSpecUnichar &&) = delete;
  ParamSpecUnichar &
  operator = (const ParamSpecUnichar &) = delete;
  ParamSpecUnichar &
  operator = (ParamSpecUnichar &&) = delete;
protected:
  ~ParamSpecUnichar () = default;
public:
}; /* class ParamSpecUnichar */

static_assert (sizeof (ParamSpecUnichar) == sizeof (::GParamSpecUnichar),
               "ParamSpecUnichar size mismatch");
static_assert (alignof (ParamSpecUnichar) == alignof (::GParamSpecUnichar),
               "ParamSpecUnichar align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
