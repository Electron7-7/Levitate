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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class TextTag;
class TextTagTable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TextTagTable> ()
{
  return gtk_text_tag_table_get_type ();
}


namespace Gtk
{
class TextTagTable : public GObject::Object
/* non-derivable */
/* implements Buildable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TextTagTable () = delete;
  TextTagTable (const TextTagTable &) = delete;
  TextTagTable (TextTagTable &&) = delete;
  TextTagTable &
  operator = (const TextTagTable &) = delete;
  TextTagTable &
  operator = (TextTagTable &&) = delete;
  ~TextTagTable () = delete;
public:

  static peel::RefPtr<TextTagTable>
  create () noexcept
  {
    ::GtkTextTagTable *_peel_return = gtk_text_tag_table_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<TextTagTable>::adopt_ref (reinterpret_cast<TextTagTable *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  add (TextTag *tag) noexcept
  {
    ::GtkTextTagTable *_peel_this = reinterpret_cast<::GtkTextTagTable *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gboolean _peel_return = gtk_text_tag_table_add (_peel_this, _peel_tag);
    return !!_peel_return;
  }

  template<typename TextTagTableForeach>
  void
  foreach (TextTagTableForeach &&func) noexcept
  {
    gpointer _peel_data;
    ::GtkTextTagTable *_peel_this = reinterpret_cast<::GtkTextTagTable *> (this);
    ::GtkTextTagTableForeach _peel_func = peel::internals::CallbackHelper<void, ::GtkTextTag *>::wrap_call_callback (
      static_cast<TextTagTableForeach &&> (func),
      [] (::GtkTextTag *tag, gpointer data) -> void
      {
        TextTagTableForeach &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TextTagTableForeach>::type *> (data);
        TextTag *_peel_tag = reinterpret_cast<TextTag *> (tag);
        _peel_captured_func (_peel_tag);
      },
      &_peel_data, peel::internals::is_const_invocable<TextTagTableForeach, void, TextTag *>::value);
    gtk_text_tag_table_foreach (_peel_this, _peel_func, _peel_data);
  }

  int
  get_size () noexcept
  {
    ::GtkTextTagTable *_peel_this = reinterpret_cast<::GtkTextTagTable *> (this);
    return gtk_text_tag_table_get_size (_peel_this);
  }

  peel_nonnull_args (2)
  TextTag *
  lookup (const char *name) noexcept
  {
    ::GtkTextTagTable *_peel_this = reinterpret_cast<::GtkTextTagTable *> (this);
    ::GtkTextTag *_peel_return = gtk_text_tag_table_lookup (_peel_this, name);
    return reinterpret_cast<TextTag *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove (TextTag *tag) noexcept
  {
    ::GtkTextTagTable *_peel_this = reinterpret_cast<::GtkTextTagTable *> (this);
    ::GtkTextTag *_peel_tag = reinterpret_cast<::GtkTextTag *> (tag);
    gtk_text_tag_table_remove (_peel_this, _peel_tag);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tag_added (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *)>::_peel_connect_by_name (this, "tag-added", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tag_added (HandlerObject *object, void (HandlerObject::*handler_method) (TextTagTable *, TextTag *), bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *)>::_peel_connect_by_name (this, "tag-added", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tag_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *, bool)>::_peel_connect_by_name (this, "tag-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tag_changed (HandlerObject *object, void (HandlerObject::*handler_method) (TextTagTable *, TextTag *, bool), bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *, bool)>::_peel_connect_by_name (this, "tag-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_tag_removed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *)>::_peel_connect_by_name (this, "tag-removed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_tag_removed (HandlerObject *object, void (HandlerObject::*handler_method) (TextTagTable *, TextTag *), bool after = false) noexcept
  {
    return Signal<TextTagTable, void (TextTag *)>::_peel_connect_by_name (this, "tag-removed", object, handler_method, after);
  }
}; /* class TextTagTable */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
