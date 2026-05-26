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
enum class OptionError : std::underlying_type<::GOptionError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::OptionError>
{
  typedef GLib::OptionError UnownedType;

  static GLib::OptionError
  get (const ::GValue *value)
  {
    return static_cast<GLib::OptionError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::OptionError m)
  {
    g_value_set_enum (value, static_cast<::GOptionError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::OptionError m)
  {
    set (value, m);
  }

  static GLib::OptionError
  cast_for_create (GLib::OptionError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class OptionError : std::underlying_type<::GOptionError>::type
{
  UNKNOWN_OPTION = G_OPTION_ERROR_UNKNOWN_OPTION,
  BAD_VALUE = G_OPTION_ERROR_BAD_VALUE,
  FAILED = G_OPTION_ERROR_FAILED,
}; /* enum OptionError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
