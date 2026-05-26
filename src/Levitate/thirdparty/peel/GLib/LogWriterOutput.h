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
enum class LogWriterOutput : std::underlying_type<::GLogWriterOutput>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::LogWriterOutput>
{
  typedef GLib::LogWriterOutput UnownedType;

  static GLib::LogWriterOutput
  get (const ::GValue *value)
  {
    return static_cast<GLib::LogWriterOutput> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::LogWriterOutput m)
  {
    g_value_set_enum (value, static_cast<::GLogWriterOutput> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::LogWriterOutput m)
  {
    set (value, m);
  }

  static GLib::LogWriterOutput
  cast_for_create (GLib::LogWriterOutput m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class LogWriterOutput : std::underlying_type<::GLogWriterOutput>::type
{
  HANDLED = G_LOG_WRITER_HANDLED,
  UNHANDLED = G_LOG_WRITER_UNHANDLED,
}; /* enum LogWriterOutput */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
