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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gdk
{
enum class VulkanError : std::underlying_type<::GdkVulkanError>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::VulkanError>
{
  typedef Gdk::VulkanError UnownedType;

  static Gdk::VulkanError
  get (const ::GValue *value)
  {
    return static_cast<Gdk::VulkanError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::VulkanError m)
  {
    g_value_set_enum (value, static_cast<::GdkVulkanError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::VulkanError m)
  {
    set (value, m);
  }

  static Gdk::VulkanError
  cast_for_create (Gdk::VulkanError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::VulkanError> ()
{
  return gdk_vulkan_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::VulkanError>
{
  Gdk::VulkanError default_value;

  constexpr PspecTraits (Gdk::VulkanError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_vulkan_error_get_type (),
                              static_cast<::GdkVulkanError> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class VulkanError : std::underlying_type<::GdkVulkanError>::type
{
  UNSUPPORTED = GDK_VULKAN_ERROR_UNSUPPORTED,
  NOT_AVAILABLE = GDK_VULKAN_ERROR_NOT_AVAILABLE,
}; /* enum VulkanError */

peel_no_warn_unused
static GLib::Quark
vulkan_error_quark () noexcept
{
  ::GQuark _peel_return = gdk_vulkan_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
