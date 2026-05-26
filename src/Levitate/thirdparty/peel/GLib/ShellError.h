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
enum class ShellError : std::underlying_type<::GShellError>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::ShellError>
{
  typedef GLib::ShellError UnownedType;

  static GLib::ShellError
  get (const ::GValue *value)
  {
    return static_cast<GLib::ShellError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::ShellError m)
  {
    g_value_set_enum (value, static_cast<::GShellError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::ShellError m)
  {
    set (value, m);
  }

  static GLib::ShellError
  cast_for_create (GLib::ShellError m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class ShellError : std::underlying_type<::GShellError>::type
{
  BAD_QUOTING = G_SHELL_ERROR_BAD_QUOTING,
  EMPTY_STRING = G_SHELL_ERROR_EMPTY_STRING,
  FAILED = G_SHELL_ERROR_FAILED,
}; /* enum ShellError */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
