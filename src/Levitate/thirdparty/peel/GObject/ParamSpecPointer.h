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
class ParamSpecPointer;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpecPointer> ()
{
  return G_TYPE_PARAM_POINTER;
}


namespace GObject
{
class ParamSpecPointer : public ParamSpec
{
private:
  using ParamSpec::internal;
  using ParamSpec::is_valid_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpecPointer () = delete;
  ParamSpecPointer (const ParamSpecPointer &) = delete;
  ParamSpecPointer (ParamSpecPointer &&) = delete;
  ParamSpecPointer &
  operator = (const ParamSpecPointer &) = delete;
  ParamSpecPointer &
  operator = (ParamSpecPointer &&) = delete;
protected:
  ~ParamSpecPointer () = default;
public:
}; /* class ParamSpecPointer */

static_assert (sizeof (ParamSpecPointer) == sizeof (::GParamSpecPointer),
               "ParamSpecPointer size mismatch");
static_assert (alignof (ParamSpecPointer) == alignof (::GParamSpecPointer),
               "ParamSpecPointer align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
