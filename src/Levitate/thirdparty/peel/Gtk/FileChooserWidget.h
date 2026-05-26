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
#include <peel/Gtk/FileChooser.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class FileChooserWidget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooserWidget> ()
{
  return gtk_file_chooser_widget_get_type ();
}


namespace Gtk
{
class FileChooserWidget : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, FileChooser */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileChooserWidget () = delete;
  FileChooserWidget (const FileChooserWidget &) = delete;
  FileChooserWidget (FileChooserWidget &&) = delete;
  FileChooserWidget &
  operator = (const FileChooserWidget &) = delete;
  FileChooserWidget &
  operator = (FileChooserWidget &&) = delete;
  ~FileChooserWidget () = delete;
public:

  static peel::FloatPtr<FileChooserWidget>
  create (FileChooser::Action action) noexcept
  {
    ::GtkFileChooserAction _peel_action = static_cast<::GtkFileChooserAction> (action);
    ::GtkWidget *_peel_return = gtk_file_chooser_widget_new (_peel_action);
    peel_assume (_peel_return);
    return peel::FloatPtr<FileChooserWidget> (reinterpret_cast<FileChooserWidget *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_desktop_folder (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "desktop-folder", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_desktop_folder (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "desktop-folder", object, handler_method, after);
  }

  void
  emit_desktop_folder () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "desktop-folder");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_down_folder (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "down-folder", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_down_folder (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "down-folder", object, handler_method, after);
  }

  void
  emit_down_folder () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "down-folder");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_home_folder (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "home-folder", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_home_folder (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "home-folder", object, handler_method, after);
  }

  void
  emit_home_folder () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "home-folder");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_location_popup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void (const char *)>::_peel_connect_by_name (this, "location-popup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_location_popup (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *, const char *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void (const char *)>::_peel_connect_by_name (this, "location-popup", object, handler_method, after);
  }

  void
  emit_location_popup (const char *path) noexcept
  {
    return Signal<FileChooserWidget, void (const char *)>::_peel_emit_by_name (this, "location-popup", path);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_location_popup_on_paste (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "location-popup-on-paste", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_location_popup_on_paste (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "location-popup-on-paste", object, handler_method, after);
  }

  void
  emit_location_popup_on_paste () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "location-popup-on-paste");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_location_toggle_popup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "location-toggle-popup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_location_toggle_popup (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "location-toggle-popup", object, handler_method, after);
  }

  void
  emit_location_toggle_popup () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "location-toggle-popup");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_places_shortcut (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "places-shortcut", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_places_shortcut (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "places-shortcut", object, handler_method, after);
  }

  void
  emit_places_shortcut () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "places-shortcut");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_quick_bookmark (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void (int)>::_peel_connect_by_name (this, "quick-bookmark", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_quick_bookmark (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *, int), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void (int)>::_peel_connect_by_name (this, "quick-bookmark", object, handler_method, after);
  }

  void
  emit_quick_bookmark (int bookmark_index) noexcept
  {
    return Signal<FileChooserWidget, void (int)>::_peel_emit_by_name (this, "quick-bookmark", bookmark_index);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_recent_shortcut (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "recent-shortcut", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_recent_shortcut (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "recent-shortcut", object, handler_method, after);
  }

  void
  emit_recent_shortcut () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "recent-shortcut");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_search_shortcut (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "search-shortcut", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_search_shortcut (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "search-shortcut", object, handler_method, after);
  }

  void
  emit_search_shortcut () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "search-shortcut");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_show_hidden (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "show-hidden", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_show_hidden (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "show-hidden", object, handler_method, after);
  }

  void
  emit_show_hidden () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "show-hidden");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_up_folder (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "up-folder", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_up_folder (HandlerObject *object, void (HandlerObject::*handler_method) (FileChooserWidget *), bool after = false) noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_connect_by_name (this, "up-folder", object, handler_method, after);
  }

  void
  emit_up_folder () noexcept
  {
    return Signal<FileChooserWidget, void ()>::_peel_emit_by_name (this, "up-folder");
  }

  static peel::Property<bool>
  prop_search_mode ()
  {
    return peel::Property<bool> { "search-mode" };
  }

  static peel::Property<bool>
  prop_show_time ()
  {
    return peel::Property<bool> { "show-time" };
  }

  static peel::Property<const char *>
  prop_subtitle ()
  {
    return peel::Property<const char *> { "subtitle" };
  }
}; /* class FileChooserWidget */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
