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
class ParamSpecUChar;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecUChar> ()
{
  return G_TYPE_PARAM_UCHAR;
}


namespace GObject
{
class ParamSpecUChar : public ParamSpec
{
private:
  unsigned char _placeholder[sizeof (::GParamSpecUChar) - sizeof (ParamSpec)] peel_no_warn_unused;
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecUChar () = delete;
  ParamSpecUChar (const ParamSpecUChar &) = delete;
  ParamSpecUChar (ParamSpecUChar &&) = delete;
  ParamSpecUChar &
  operator = (const ParamSpecUChar &) = delete;
  ParamSpecUChar &
  operator = (ParamSpecUChar &&) = delete;
protected:
  ~ParamSpecUChar () = default;
public:
}; /* class ParamSpecUChar */

static_assert (sizeof (ParamSpecUChar) == sizeof (::GParamSpecUChar),
               "ParamSpecUChar size mismatch");
static_assert (alignof (ParamSpecUChar) == alignof (::GParamSpecUChar),
               "ParamSpecUChar align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
