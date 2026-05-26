#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::MemoryFormat>
{
  typedef Gdk::MemoryFormat UnownedType;

  static Gdk::MemoryFormat
  get (const ::GValue *value)
  {
    return static_cast<Gdk::MemoryFormat> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::MemoryFormat m)
  {
    g_value_set_enum (value, static_cast<::GdkMemoryFormat> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::MemoryFormat m)
  {
    set (value, m);
  }

  static Gdk::MemoryFormat
  cast_for_create (Gdk::MemoryFormat m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::MemoryFormat> ()
{
  return gdk_memory_format_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::MemoryFormat>
{
  Gdk::MemoryFormat default_value;

  constexpr PspecTraits (Gdk::MemoryFormat default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_memory_format_get_type (),
                              static_cast<::GdkMemoryFormat> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class MemoryFormat : std::underlying_type<::GdkMemoryFormat>::type
{
  B8G8R8A8_PREMULTIPLIED = GDK_MEMORY_B8G8R8A8_PREMULTIPLIED,
  A8R8G8B8_PREMULTIPLIED = GDK_MEMORY_A8R8G8B8_PREMULTIPLIED,
  R8G8B8A8_PREMULTIPLIED = GDK_MEMORY_R8G8B8A8_PREMULTIPLIED,
  B8G8R8A8 = GDK_MEMORY_B8G8R8A8,
  A8R8G8B8 = GDK_MEMORY_A8R8G8B8,
  R8G8B8A8 = GDK_MEMORY_R8G8B8A8,
  A8B8G8R8 = GDK_MEMORY_A8B8G8R8,
  R8G8B8 = GDK_MEMORY_R8G8B8,
  B8G8R8 = GDK_MEMORY_B8G8R8,
  R16G16B16 = GDK_MEMORY_R16G16B16,
  R16G16B16A16_PREMULTIPLIED = GDK_MEMORY_R16G16B16A16_PREMULTIPLIED,
  R16G16B16A16 = GDK_MEMORY_R16G16B16A16,
  R16G16B16_FLOAT = GDK_MEMORY_R16G16B16_FLOAT,
  R16G16B16A16_FLOAT_PREMULTIPLIED = GDK_MEMORY_R16G16B16A16_FLOAT_PREMULTIPLIED,
  R16G16B16A16_FLOAT = GDK_MEMORY_R16G16B16A16_FLOAT,
  R32G32B32_FLOAT = GDK_MEMORY_R32G32B32_FLOAT,
  R32G32B32A32_FLOAT_PREMULTIPLIED = GDK_MEMORY_R32G32B32A32_FLOAT_PREMULTIPLIED,
  R32G32B32A32_FLOAT = GDK_MEMORY_R32G32B32A32_FLOAT,
  G8A8_PREMULTIPLIED = GDK_MEMORY_G8A8_PREMULTIPLIED,
  G8A8 = GDK_MEMORY_G8A8,
  G8 = GDK_MEMORY_G8,
  G16A16_PREMULTIPLIED = GDK_MEMORY_G16A16_PREMULTIPLIED,
  G16A16 = GDK_MEMORY_G16A16,
  G16 = GDK_MEMORY_G16,
  A8 = GDK_MEMORY_A8,
  A16 = GDK_MEMORY_A16,
  A16_FLOAT = GDK_MEMORY_A16_FLOAT,
  A32_FLOAT = GDK_MEMORY_A32_FLOAT,
  A8B8G8R8_PREMULTIPLIED = GDK_MEMORY_A8B8G8R8_PREMULTIPLIED,
  B8G8R8X8 = GDK_MEMORY_B8G8R8X8,
  X8R8G8B8 = GDK_MEMORY_X8R8G8B8,
  R8G8B8X8 = GDK_MEMORY_R8G8B8X8,
  X8B8G8R8 = GDK_MEMORY_X8B8G8R8,
  G8_B8R8_420 = GDK_MEMORY_G8_B8R8_420,
  G8_R8B8_420 = GDK_MEMORY_G8_R8B8_420,
  G8_B8R8_422 = GDK_MEMORY_G8_B8R8_422,
  G8_R8B8_422 = GDK_MEMORY_G8_R8B8_422,
  G8_B8R8_444 = GDK_MEMORY_G8_B8R8_444,
  G8_R8B8_444 = GDK_MEMORY_G8_R8B8_444,
  G10X6_B10X6R10X6_420 = GDK_MEMORY_G10X6_B10X6R10X6_420,
  G12X4_B12X4R12X4_420 = GDK_MEMORY_G12X4_B12X4R12X4_420,
  G16_B16R16_420 = GDK_MEMORY_G16_B16R16_420,
  G8_B8_R8_410 = GDK_MEMORY_G8_B8_R8_410,
  G8_R8_B8_410 = GDK_MEMORY_G8_R8_B8_410,
  G8_B8_R8_411 = GDK_MEMORY_G8_B8_R8_411,
  G8_R8_B8_411 = GDK_MEMORY_G8_R8_B8_411,
  G8_B8_R8_420 = GDK_MEMORY_G8_B8_R8_420,
  G8_R8_B8_420 = GDK_MEMORY_G8_R8_B8_420,
  G8_B8_R8_422 = GDK_MEMORY_G8_B8_R8_422,
  G8_R8_B8_422 = GDK_MEMORY_G8_R8_B8_422,
  G8_B8_R8_444 = GDK_MEMORY_G8_B8_R8_444,
  G8_R8_B8_444 = GDK_MEMORY_G8_R8_B8_444,
  G8B8G8R8_422 = GDK_MEMORY_G8B8G8R8_422,
  G8R8G8B8_422 = GDK_MEMORY_G8R8G8B8_422,
  R8G8B8G8_422 = GDK_MEMORY_R8G8B8G8_422,
  B8G8R8G8_422 = GDK_MEMORY_B8G8R8G8_422,
  X6G10_X6B10_X6R10_420 = GDK_MEMORY_X6G10_X6B10_X6R10_420,
  X6G10_X6B10_X6R10_422 = GDK_MEMORY_X6G10_X6B10_X6R10_422,
  X6G10_X6B10_X6R10_444 = GDK_MEMORY_X6G10_X6B10_X6R10_444,
  X4G12_X4B12_X4R12_420 = GDK_MEMORY_X4G12_X4B12_X4R12_420,
  X4G12_X4B12_X4R12_422 = GDK_MEMORY_X4G12_X4B12_X4R12_422,
  X4G12_X4B12_X4R12_444 = GDK_MEMORY_X4G12_X4B12_X4R12_444,
  G16_B16_R16_420 = GDK_MEMORY_G16_B16_R16_420,
  G16_B16_R16_422 = GDK_MEMORY_G16_B16_R16_422,
  G16_B16_R16_444 = GDK_MEMORY_G16_B16_R16_444,
  N_FORMATS = GDK_MEMORY_N_FORMATS,
}; /* enum MemoryFormat */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
