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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gdk/Device.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ DevicePad;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DevicePad> ()
{
  return gdk_device_pad_get_type ();
}


namespace Gdk
{
class /* interface */ DevicePad : public Device
/* requires Device */
{
private:
  DevicePad () = delete;
  DevicePad (const DevicePad &) = delete;
  DevicePad (DevicePad &&) = delete;

  DevicePad &
  operator = (const DevicePad &) = delete;
  DevicePad &
  operator = (DevicePad &&) = delete;

protected:
  ~DevicePad () = default;

public:
  enum class Feature : std::underlying_type<::GdkDevicePadFeature>::type;

  int
  get_feature_group (DevicePad::Feature feature, int feature_idx) noexcept
  {
    ::GdkDevicePad *_peel_this = reinterpret_cast<::GdkDevicePad *> (this);
    ::GdkDevicePadFeature _peel_feature = static_cast<::GdkDevicePadFeature> (feature);
    return gdk_device_pad_get_feature_group (_peel_this, _peel_feature, feature_idx);
  }

  int
  get_group_n_modes (int group_idx) noexcept
  {
    ::GdkDevicePad *_peel_this = reinterpret_cast<::GdkDevicePad *> (this);
    return gdk_device_pad_get_group_n_modes (_peel_this, group_idx);
  }

  int
  get_n_features (DevicePad::Feature feature) noexcept
  {
    ::GdkDevicePad *_peel_this = reinterpret_cast<::GdkDevicePad *> (this);
    ::GdkDevicePadFeature _peel_feature = static_cast<::GdkDevicePadFeature> (feature);
    return gdk_device_pad_get_n_features (_peel_this, _peel_feature);
  }

  int
  get_n_groups () noexcept
  {
    ::GdkDevicePad *_peel_this = reinterpret_cast<::GdkDevicePad *> (this);
    return gdk_device_pad_get_n_groups (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface DevicePad */
static_assert (sizeof (DevicePad) == sizeof (Device),
               "DevicePad size mismatch");
static_assert (alignof (DevicePad) == alignof (Device),
               "DevicePad align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
