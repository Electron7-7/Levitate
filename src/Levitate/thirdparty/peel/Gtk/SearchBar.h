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
class /* interface */ Editable;
class SearchBar;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SearchBar> ()
{
  return gtk_search_bar_get_type ();
}


namespace Gtk
{
class SearchBar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SearchBar () = delete;
  SearchBar (const SearchBar &) = delete;
  SearchBar (SearchBar &&) = delete;
  SearchBar &
  operator = (const SearchBar &) = delete;
  SearchBar &
  operator = (SearchBar &&) = delete;
  ~SearchBar () = delete;
public:

  static peel::FloatPtr<SearchBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_search_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<SearchBar> (reinterpret_cast<SearchBar *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  connect_entry (Editable *entry) noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    ::GtkEditable *_peel_entry = reinterpret_cast<::GtkEditable *> (entry);
    gtk_search_bar_connect_entry (_peel_this, _peel_entry);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    ::GtkWidget *_peel_return = gtk_search_bar_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Widget *
  get_key_capture_widget () noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    ::GtkWidget *_peel_return = gtk_search_bar_get_key_capture_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_search_mode () noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    gboolean _peel_return = gtk_search_bar_get_search_mode (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_close_button () noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    gboolean _peel_return = gtk_search_bar_get_show_close_button (_peel_this);
    return !!_peel_return;
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_search_bar_set_child (_peel_this, _peel_child);
  }

  void
  set_key_capture_widget (Widget *widget) noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_search_bar_set_key_capture_widget (_peel_this, _peel_widget);
  }

  void
  set_search_mode (bool search_mode) noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    gboolean _peel_search_mode = static_cast<gboolean> (search_mode);
    gtk_search_bar_set_search_mode (_peel_this, _peel_search_mode);
  }

  void
  set_show_close_button (bool visible) noexcept
  {
    ::GtkSearchBar *_peel_this = reinterpret_cast<::GtkSearchBar *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_search_bar_set_show_close_button (_peel_this, _peel_visible);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<Widget>
  prop_key_capture_widget ()
  {
    return peel::Property<Widget> { "key-capture-widget" };
  }

  static peel::Property<bool>
  prop_search_mode_enabled ()
  {
    return peel::Property<bool> { "search-mode-enabled" };
  }

  static peel::Property<bool>
  prop_show_close_button ()
  {
    return peel::Property<bool> { "show-close-button" };
  }
}; /* class SearchBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
