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
class ActionBar;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ActionBar> ()
{
  return gtk_action_bar_get_type ();
}


namespace Gtk
{
class ActionBar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ActionBar () = delete;
  ActionBar (const ActionBar &) = delete;
  ActionBar (ActionBar &&) = delete;
  ActionBar &
  operator = (const ActionBar &) = delete;
  ActionBar &
  operator = (ActionBar &&) = delete;
  ~ActionBar () = delete;
public:

  static peel::FloatPtr<ActionBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_action_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ActionBar> (reinterpret_cast<ActionBar *> (_peel_return));
  }

  Widget *
  get_center_widget () noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    ::GtkWidget *_peel_return = gtk_action_bar_get_center_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_revealed () noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    gboolean _peel_return = gtk_action_bar_get_revealed (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  pack_end (Widget *child) noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_action_bar_pack_end (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  pack_start (Widget *child) noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_action_bar_pack_start (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_action_bar_remove (_peel_this, _peel_child);
  }

  void
  set_center_widget (Widget *center_widget) noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    ::GtkWidget *_peel_center_widget = reinterpret_cast<::GtkWidget *> (center_widget);
    gtk_action_bar_set_center_widget (_peel_this, _peel_center_widget);
  }

  void
  set_revealed (bool revealed) noexcept
  {
    ::GtkActionBar *_peel_this = reinterpret_cast<::GtkActionBar *> (this);
    gboolean _peel_revealed = static_cast<gboolean> (revealed);
    gtk_action_bar_set_revealed (_peel_this, _peel_revealed);
  }

  static peel::Property<bool>
  prop_revealed ()
  {
    return peel::Property<bool> { "revealed" };
  }
}; /* class ActionBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
