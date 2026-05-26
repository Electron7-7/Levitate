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
enum class DateWeekday : std::underlying_type<::GDateWeekday>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::DateWeekday>
{
  typedef GLib::DateWeekday UnownedType;

  static GLib::DateWeekday
  get (const ::GValue *value)
  {
    return static_cast<GLib::DateWeekday> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::DateWeekday m)
  {
    g_value_set_enum (value, static_cast<::GDateWeekday> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::DateWeekday m)
  {
    set (value, m);
  }

  static GLib::DateWeekday
  cast_for_create (GLib::DateWeekday m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class DateWeekday : std::underlying_type<::GDateWeekday>::type
{
  BAD_WEEKDAY = G_DATE_BAD_WEEKDAY,
  MONDAY = G_DATE_MONDAY,
  TUESDAY = G_DATE_TUESDAY,
  WEDNESDAY = G_DATE_WEDNESDAY,
  THURSDAY = G_DATE_THURSDAY,
  FRIDAY = G_DATE_FRIDAY,
  SATURDAY = G_DATE_SATURDAY,
  SUNDAY = G_DATE_SUNDAY,
}; /* enum DateWeekday */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
