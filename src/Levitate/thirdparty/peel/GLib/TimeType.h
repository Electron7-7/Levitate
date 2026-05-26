#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class TimeType : std::underlying_type<::GTimeType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TimeType>
{
  typedef GLib::TimeType UnownedType;

  static GLib::TimeType
  get (const ::GValue *value)
  {
    return static_cast<GLib::TimeType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TimeType m)
  {
    g_value_set_enum (value, static_cast<::GTimeType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TimeType m)
  {
    set (value, m);
  }

  static GLib::TimeType
  cast_for_create (GLib::TimeType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TimeType : std::underlying_type<::GTimeType>::type
{
  STANDARD = G_TIME_TYPE_STANDARD,
  DAYLIGHT = G_TIME_TYPE_DAYLIGHT,
  UNIVERSAL = G_TIME_TYPE_UNIVERSAL,
}; /* enum TimeType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
