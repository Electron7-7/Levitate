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
#include <peel/Gtk/Editable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
class SearchEntry;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SearchEntry> ()
{
  return gtk_search_entry_get_type ();
}


namespace Gtk
{
class SearchEntry : public Editable
/* non-derivable */
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Editable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SearchEntry () = delete;
  SearchEntry (const SearchEntry &) = delete;
  SearchEntry (SearchEntry &&) = delete;
  SearchEntry &
  operator = (const SearchEntry &) = delete;
  SearchEntry &
  operator = (SearchEntry &&) = delete;
  ~SearchEntry () = delete;
public:

  static peel::FloatPtr<SearchEntry>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_search_entry_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<SearchEntry> (reinterpret_cast<SearchEntry *> (_peel_return));
  }

  InputHints
  get_input_hints () noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkInputHints _peel_return = gtk_search_entry_get_input_hints (_peel_this);
    return static_cast<InputHints> (_peel_return);
  }

  InputPurpose
  get_input_purpose () noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkInputPurpose _peel_return = gtk_search_entry_get_input_purpose (_peel_this);
    return static_cast<InputPurpose> (_peel_return);
  }

  Widget *
  get_key_capture_widget () noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkWidget *_peel_return = gtk_search_entry_get_key_capture_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  const char *
  get_placeholder_text () noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    return gtk_search_entry_get_placeholder_text (_peel_this);
  }

  unsigned
  get_search_delay () noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    return gtk_search_entry_get_search_delay (_peel_this);
  }

  void
  set_input_hints (InputHints hints) noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkInputHints _peel_hints = static_cast<::GtkInputHints> (hints);
    gtk_search_entry_set_input_hints (_peel_this, _peel_hints);
  }

  void
  set_input_purpose (InputPurpose purpose) noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkInputPurpose _peel_purpose = static_cast<::GtkInputPurpose> (purpose);
    gtk_search_entry_set_input_purpose (_peel_this, _peel_purpose);
  }

  void
  set_key_capture_widget (Widget *widget) noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_search_entry_set_key_capture_widget (_peel_this, _peel_widget);
  }

  void
  set_placeholder_text (const char *text) noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    gtk_search_entry_set_placeholder_text (_peel_this, text);
  }

  void
  set_search_delay (unsigned delay) noexcept
  {
    ::GtkSearchEntry *_peel_this = reinterpret_cast<::GtkSearchEntry *> (this);
    gtk_search_entry_set_search_delay (_peel_this, delay);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_next_match (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "next-match", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_next_match (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "next-match", object, handler_method, after);
  }

  void
  emit_next_match () noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_emit_by_name (this, "next-match");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_previous_match (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "previous-match", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_previous_match (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "previous-match", object, handler_method, after);
  }

  void
  emit_previous_match () noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_emit_by_name (this, "previous-match");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_search_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "search-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_search_changed (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "search-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_search_started (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "search-started", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_search_started (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "search-started", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_stop_search (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "stop-search", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_stop_search (HandlerObject *object, void (HandlerObject::*handler_method) (SearchEntry *), bool after = false) noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_connect_by_name (this, "stop-search", object, handler_method, after);
  }

  void
  emit_stop_search () noexcept
  {
    return Signal<SearchEntry, void ()>::_peel_emit_by_name (this, "stop-search");
  }

  static peel::Property<bool>
  prop_activates_default ()
  {
    return peel::Property<bool> { "activates-default" };
  }

  static peel::Property<InputHints>
  prop_input_hints ()
  {
    return peel::Property<InputHints> { "input-hints" };
  }

  static peel::Property<InputPurpose>
  prop_input_purpose ()
  {
    return peel::Property<InputPurpose> { "input-purpose" };
  }

  static peel::Property<Widget>
  prop_key_capture_widget ()
  {
    return peel::Property<Widget> { "key-capture-widget" };
  }

  static peel::Property<const char *>
  prop_placeholder_text ()
  {
    return peel::Property<const char *> { "placeholder-text" };
  }

  static peel::Property<unsigned>
  prop_search_delay ()
  {
    return peel::Property<unsigned> { "search-delay" };
  }
}; /* class SearchEntry */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
