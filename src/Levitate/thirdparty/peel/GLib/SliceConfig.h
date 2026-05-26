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
enum class SliceConfig : std::underlying_type<::GSliceConfig>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::SliceConfig>
{
  typedef GLib::SliceConfig UnownedType;

  static GLib::SliceConfig
  get (const ::GValue *value)
  {
    return static_cast<GLib::SliceConfig> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::SliceConfig m)
  {
    g_value_set_enum (value, static_cast<::GSliceConfig> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::SliceConfig m)
  {
    set (value, m);
  }

  static GLib::SliceConfig
  cast_for_create (GLib::SliceConfig m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class SliceConfig : std::underlying_type<::GSliceConfig>::type
{
  ALWAYS_MALLOC = G_SLICE_CONFIG_ALWAYS_MALLOC,
  BYPASS_MAGAZINES = G_SLICE_CONFIG_BYPASS_MAGAZINES,
  WORKING_SET_MSECS = G_SLICE_CONFIG_WORKING_SET_MSECS,
  COLOR_INCREMENT = G_SLICE_CONFIG_COLOR_INCREMENT,
  CHUNK_SIZES = G_SLICE_CONFIG_CHUNK_SIZES,
  CONTENTION_COUNTER = G_SLICE_CONFIG_CONTENTION_COUNTER,
}; /* enum SliceConfig */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
