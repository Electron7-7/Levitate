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
class HeaderBar;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::HeaderBar> ()
{
  return gtk_header_bar_get_type ();
}


namespace Gtk
{
class HeaderBar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  HeaderBar () = delete;
  HeaderBar (const HeaderBar &) = delete;
  HeaderBar (HeaderBar &&) = delete;
  HeaderBar &
  operator = (const HeaderBar &) = delete;
  HeaderBar &
  operator = (HeaderBar &&) = delete;
  ~HeaderBar () = delete;
public:

  static peel::FloatPtr<HeaderBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_header_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<HeaderBar> (reinterpret_cast<HeaderBar *> (_peel_return));
  }

  const char *
  get_decoration_layout () noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    return gtk_header_bar_get_decoration_layout (_peel_this);
  }

  bool
  get_show_title_buttons () noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    gboolean _peel_return = gtk_header_bar_get_show_title_buttons (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_title_widget () noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    ::GtkWidget *_peel_return = gtk_header_bar_get_title_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_use_native_controls () noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    gboolean _peel_return = gtk_header_bar_get_use_native_controls (_peel_this);
    return !!_peel_return;
  }

  void
  pack_end (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_header_bar_pack_end (_peel_this, _peel_child);
  }

  void
  pack_start (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_header_bar_pack_start (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_header_bar_remove (_peel_this, _peel_child);
  }

  void
  set_decoration_layout (const char *layout) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    gtk_header_bar_set_decoration_layout (_peel_this, layout);
  }

  void
  set_show_title_buttons (bool setting) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_header_bar_set_show_title_buttons (_peel_this, _peel_setting);
  }

  void
  set_title_widget (peel::FloatPtr<Widget> title_widget) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    ::GtkWidget *_peel_title_widget = reinterpret_cast<::GtkWidget *> (std::move (title_widget).release_floating_ptr ());
    gtk_header_bar_set_title_widget (_peel_this, _peel_title_widget);
  }

  void
  set_use_native_controls (bool setting) noexcept
  {
    ::GtkHeaderBar *_peel_this = reinterpret_cast<::GtkHeaderBar *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_header_bar_set_use_native_controls (_peel_this, _peel_setting);
  }

  static peel::Property<const char *>
  prop_decoration_layout ()
  {
    return peel::Property<const char *> { "decoration-layout" };
  }

  static peel::Property<bool>
  prop_show_title_buttons ()
  {
    return peel::Property<bool> { "show-title-buttons" };
  }

  static peel::Property<Widget>
  prop_title_widget ()
  {
    return peel::Property<Widget> { "title-widget" };
  }

  static peel::Property<bool>
  prop_use_native_controls ()
  {
    return peel::Property<bool> { "use-native-controls" };
  }
}; /* class HeaderBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
