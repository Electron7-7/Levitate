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
#include <peel/Gdk/Surface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class Gravity : std::underlying_type<::GdkGravity>::type;
class /* interface */ Popup;
class /* record */ PopupLayout;
class Surface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Popup> ()
{
  return gdk_popup_get_type ();
}


namespace Gdk
{
class /* interface */ Popup : public Surface
/* requires Surface */
{
private:
  Popup () = delete;
  Popup (const Popup &) = delete;
  Popup (Popup &&) = delete;

  Popup &
  operator = (const Popup &) = delete;
  Popup &
  operator = (Popup &&) = delete;

protected:
  ~Popup () = default;

public:

  bool
  get_autohide () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    gboolean _peel_return = gdk_popup_get_autohide (_peel_this);
    return !!_peel_return;
  }

  Surface *
  get_parent () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    ::GdkSurface *_peel_return = gdk_popup_get_parent (_peel_this);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  int
  get_position_x () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    return gdk_popup_get_position_x (_peel_this);
  }

  int
  get_position_y () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    return gdk_popup_get_position_y (_peel_this);
  }

  Gravity
  get_rect_anchor () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    ::GdkGravity _peel_return = gdk_popup_get_rect_anchor (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  Gravity
  get_surface_anchor () noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    ::GdkGravity _peel_return = gdk_popup_get_surface_anchor (_peel_this);
    return static_cast<Gravity> (_peel_return);
  }

  peel_arg_in (4) peel_nonnull_args (4)
  bool
  present (int width, int height, PopupLayout *layout) noexcept
  {
    ::GdkPopup *_peel_this = reinterpret_cast<::GdkPopup *> (this);
    ::GdkPopupLayout *_peel_layout = reinterpret_cast<::GdkPopupLayout *> (layout);
    gboolean _peel_return = gdk_popup_present (_peel_this, width, height, _peel_layout);
    return !!_peel_return;
  }

  static peel::Property<bool>
  prop_autohide ()
  {
    return peel::Property<bool> { "autohide" };
  }

  static peel::Property<Surface>
  prop_parent ()
  {
    return peel::Property<Surface> { "parent" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface Popup */
static_assert (sizeof (Popup) == sizeof (Surface),
               "Popup size mismatch");
static_assert (alignof (Popup) == alignof (Surface),
               "Popup align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
