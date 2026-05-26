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
class Adjustment;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
class Scrollbar;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Scrollbar> ()
{
  return gtk_scrollbar_get_type ();
}


namespace Gtk
{
class Scrollbar : public Widget
/* non-derivable */
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Scrollbar () = delete;
  Scrollbar (const Scrollbar &) = delete;
  Scrollbar (Scrollbar &&) = delete;
  Scrollbar &
  operator = (const Scrollbar &) = delete;
  Scrollbar &
  operator = (Scrollbar &&) = delete;
  ~Scrollbar () = delete;
public:

  static peel::FloatPtr<Scrollbar>
  create (Orientation orientation, Adjustment *adjustment) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    ::GtkWidget *_peel_return = gtk_scrollbar_new (_peel_orientation, _peel_adjustment);
    peel_assume (_peel_return);
    return peel::FloatPtr<Scrollbar> (reinterpret_cast<Scrollbar *> (_peel_return));
  }

  peel_returns_nonnull
  Adjustment *
  get_adjustment () noexcept
  {
    ::GtkScrollbar *_peel_this = reinterpret_cast<::GtkScrollbar *> (this);
    ::GtkAdjustment *_peel_return = gtk_scrollbar_get_adjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  void
  set_adjustment (peel::FloatPtr<Adjustment> adjustment) noexcept
  {
    ::GtkScrollbar *_peel_this = reinterpret_cast<::GtkScrollbar *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (std::move (adjustment).release_floating_ptr ());
    gtk_scrollbar_set_adjustment (_peel_this, _peel_adjustment);
  }

  static peel::Property<Adjustment>
  prop_adjustment ()
  {
    return peel::Property<Adjustment> { "adjustment" };
  }
}; /* class Scrollbar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Adjustment.h>
