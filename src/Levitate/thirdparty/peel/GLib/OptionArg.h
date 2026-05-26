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
enum class OptionArg : std::underlying_type<::GOptionArg>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::OptionArg>
{
  typedef GLib::OptionArg UnownedType;

  static GLib::OptionArg
  get (const ::GValue *value)
  {
    return static_cast<GLib::OptionArg> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::OptionArg m)
  {
    g_value_set_enum (value, static_cast<::GOptionArg> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::OptionArg m)
  {
    set (value, m);
  }

  static GLib::OptionArg
  cast_for_create (GLib::OptionArg m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class OptionArg : std::underlying_type<::GOptionArg>::type
{
  NONE = G_OPTION_ARG_NONE,
  STRING = G_OPTION_ARG_STRING,
  INT = G_OPTION_ARG_INT,
  CALLBACK_ = G_OPTION_ARG_CALLBACK,
  FILENAME = G_OPTION_ARG_FILENAME,
  STRING_ARRAY = G_OPTION_ARG_STRING_ARRAY,
  FILENAME_ARRAY = G_OPTION_ARG_FILENAME_ARRAY,
  DOUBLE = G_OPTION_ARG_DOUBLE,
  INT64 = G_OPTION_ARG_INT64,
}; /* enum OptionArg */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
