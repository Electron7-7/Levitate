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
enum class DateMonth : std::underlying_type<::GDateMonth>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::DateMonth>
{
  typedef GLib::DateMonth UnownedType;

  static GLib::DateMonth
  get (const ::GValue *value)
  {
    return static_cast<GLib::DateMonth> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::DateMonth m)
  {
    g_value_set_enum (value, static_cast<::GDateMonth> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::DateMonth m)
  {
    set (value, m);
  }

  static GLib::DateMonth
  cast_for_create (GLib::DateMonth m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class DateMonth : std::underlying_type<::GDateMonth>::type
{
  BAD_MONTH = G_DATE_BAD_MONTH,
  JANUARY = G_DATE_JANUARY,
  FEBRUARY = G_DATE_FEBRUARY,
  MARCH = G_DATE_MARCH,
  APRIL = G_DATE_APRIL,
  MAY = G_DATE_MAY,
  JUNE = G_DATE_JUNE,
  JULY = G_DATE_JULY,
  AUGUST = G_DATE_AUGUST,
  SEPTEMBER = G_DATE_SEPTEMBER,
  OCTOBER = G_DATE_OCTOBER,
  NOVEMBER = G_DATE_NOVEMBER,
  DECEMBER = G_DATE_DECEMBER,
}; /* enum DateMonth */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
