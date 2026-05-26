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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Spinner;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Spinner> ()
{
  return gtk_spinner_get_type ();
}


namespace Gtk
{
class Spinner : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Spinner () = delete;
  Spinner (const Spinner &) = delete;
  Spinner (Spinner &&) = delete;
  Spinner &
  operator = (const Spinner &) = delete;
  Spinner &
  operator = (Spinner &&) = delete;
  ~Spinner () = delete;
public:

  static peel::FloatPtr<Spinner>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_spinner_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Spinner> (reinterpret_cast<Spinner *> (_peel_return));
  }

  bool
  get_spinning () noexcept
  {
    ::GtkSpinner *_peel_this = reinterpret_cast<::GtkSpinner *> (this);
    gboolean _peel_return = gtk_spinner_get_spinning (_peel_this);
    return !!_peel_return;
  }

  void
  set_spinning (bool spinning) noexcept
  {
    ::GtkSpinner *_peel_this = reinterpret_cast<::GtkSpinner *> (this);
    gboolean _peel_spinning = static_cast<gboolean> (spinning);
    gtk_spinner_set_spinning (_peel_this, _peel_spinning);
  }

  void
  start () noexcept
  {
    ::GtkSpinner *_peel_this = reinterpret_cast<::GtkSpinner *> (this);
    gtk_spinner_start (_peel_this);
  }

  void
  stop () noexcept
  {
    ::GtkSpinner *_peel_this = reinterpret_cast<::GtkSpinner *> (this);
    gtk_spinner_stop (_peel_this);
  }

  static peel::Property<bool>
  prop_spinning ()
  {
    return peel::Property<bool> { "spinning" };
  }
}; /* class Spinner */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
