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
#include <peel/Gtk/Native.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ Root;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Root> ()
{
  return gtk_root_get_type ();
}


namespace Gtk
{
class /* interface */ Root : public Native
/* requires Native, Widget */
{
private:
  Root () = delete;
  Root (const Root &) = delete;
  Root (Root &&) = delete;

  Root &
  operator = (const Root &) = delete;
  Root &
  operator = (Root &&) = delete;

protected:
  ~Root () = default;

public:

  peel_returns_nonnull
  Gdk::Display *
  get_display () noexcept
  {
    ::GtkRoot *_peel_this = reinterpret_cast<::GtkRoot *> (this);
    ::GdkDisplay *_peel_return = gtk_root_get_display (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::Display *> (_peel_return);
  }

  Widget *
  get_focus () noexcept
  {
    ::GtkRoot *_peel_this = reinterpret_cast<::GtkRoot *> (this);
    ::GtkWidget *_peel_return = gtk_root_get_focus (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_focus (Widget *focus) noexcept
  {
    ::GtkRoot *_peel_this = reinterpret_cast<::GtkRoot *> (this);
    ::GtkWidget *_peel_focus = reinterpret_cast<::GtkWidget *> (focus);
    gtk_root_set_focus (_peel_this, _peel_focus);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface Root */
static_assert (sizeof (Root) == sizeof (Native),
               "Root size mismatch");
static_assert (alignof (Root) == alignof (Native),
               "Root align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
