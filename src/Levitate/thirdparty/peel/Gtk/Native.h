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
#include <gtk/gtk.h>
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Surface;
} /* namespace Gdk */

namespace Gsk
{
class Renderer;
} /* namespace Gsk */

namespace Gtk
{
class /* interface */ Native;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Native> ()
{
  return gtk_native_get_type ();
}


namespace Gtk
{
class /* interface */ Native : public Widget
/* requires Widget */
{
private:
  Native () = delete;
  Native (const Native &) = delete;
  Native (Native &&) = delete;

  Native &
  operator = (const Native &) = delete;
  Native &
  operator = (Native &&) = delete;

protected:
  ~Native () = default;

public:

  peel_nonnull_args (1)
  static Native *
  get_for_surface (Gdk::Surface *surface) noexcept
  {
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GtkNative *_peel_return = gtk_native_get_for_surface (_peel_surface);
    return reinterpret_cast<Native *> (_peel_return);
  }

  Gsk::Renderer *
  get_renderer () noexcept
  {
    ::GtkNative *_peel_this = reinterpret_cast<::GtkNative *> (this);
    ::GskRenderer *_peel_return = gtk_native_get_renderer (_peel_this);
    return reinterpret_cast<Gsk::Renderer *> (_peel_return);
  }

  Gdk::Surface *
  get_surface () noexcept
  {
    ::GtkNative *_peel_this = reinterpret_cast<::GtkNative *> (this);
    ::GdkSurface *_peel_return = gtk_native_get_surface (_peel_this);
    return reinterpret_cast<Gdk::Surface *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_surface_transform (double *x, double *y) noexcept
  {
    ::GtkNative *_peel_this = reinterpret_cast<::GtkNative *> (this);
    gtk_native_get_surface_transform (_peel_this, x, y);
  }

  void
  realize () noexcept
  {
    ::GtkNative *_peel_this = reinterpret_cast<::GtkNative *> (this);
    gtk_native_realize (_peel_this);
  }

  void
  unrealize () noexcept
  {
    ::GtkNative *_peel_this = reinterpret_cast<::GtkNative *> (this);
    gtk_native_unrealize (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface Native */
static_assert (sizeof (Native) == sizeof (Widget),
               "Native size mismatch");
static_assert (alignof (Native) == alignof (Widget),
               "Native align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
