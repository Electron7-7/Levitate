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
enum class DateDMY : std::underlying_type<::GDateDMY>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::DateDMY>
{
  typedef GLib::DateDMY UnownedType;

  static GLib::DateDMY
  get (const ::GValue *value)
  {
    return static_cast<GLib::DateDMY> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::DateDMY m)
  {
    g_value_set_enum (value, static_cast<::GDateDMY> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::DateDMY m)
  {
    set (value, m);
  }

  static GLib::DateDMY
  cast_for_create (GLib::DateDMY m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class DateDMY : std::underlying_type<::GDateDMY>::type
{
  DAY = G_DATE_DAY,
  MONTH = G_DATE_MONTH,
  YEAR = G_DATE_YEAR,
}; /* enum DateDMY */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
