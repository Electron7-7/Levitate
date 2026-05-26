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
#include <peel/Gtk/CellLayout.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellArea;
class EntryCompletion;
struct TreeIter;
class /* interface */ TreeModel;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EntryCompletion> ()
{
  return gtk_entry_completion_get_type ();
}


namespace Gtk
{
class EntryCompletion : public CellLayout
/* non-derivable */
/* extends GObject::Object */
/* implements Buildable, CellLayout */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EntryCompletion () = delete;
  EntryCompletion (const EntryCompletion &) = delete;
  EntryCompletion (EntryCompletion &&) = delete;
  EntryCompletion &
  operator = (const EntryCompletion &) = delete;
  EntryCompletion &
  operator = (EntryCompletion &&) = delete;
  ~EntryCompletion () = delete;
public:

  static peel::RefPtr<EntryCompletion>
  create () noexcept
  {
    ::GtkEntryCompletion *_peel_return = gtk_entry_completion_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<EntryCompletion>::adopt_ref (reinterpret_cast<EntryCompletion *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<EntryCompletion>
  create_with_area (CellArea *area) noexcept
  {
    ::GtkCellArea *_peel_area = reinterpret_cast<::GtkCellArea *> (area);
    ::GtkEntryCompletion *_peel_return = gtk_entry_completion_new_with_area (_peel_area);
    peel_assume (_peel_return);
    return peel::RefPtr<EntryCompletion>::adopt_ref (reinterpret_cast<EntryCompletion *> (_peel_return));
  }

  void
  complete () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gtk_entry_completion_complete (_peel_this);
  }

  peel_nonnull_args (2)
  peel::String
  compute_prefix (const char *key) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    char *_peel_return = gtk_entry_completion_compute_prefix (_peel_this, key);
    return peel::String::adopt_string (_peel_return);
  }

  const char *
  get_completion_prefix () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    return gtk_entry_completion_get_completion_prefix (_peel_this);
  }

  peel_returns_nonnull
  Widget *
  get_entry () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    ::GtkWidget *_peel_return = gtk_entry_completion_get_entry (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_inline_completion () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_return = gtk_entry_completion_get_inline_completion (_peel_this);
    return !!_peel_return;
  }

  bool
  get_inline_selection () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_return = gtk_entry_completion_get_inline_selection (_peel_this);
    return !!_peel_return;
  }

  int
  get_minimum_key_length () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    return gtk_entry_completion_get_minimum_key_length (_peel_this);
  }

  TreeModel *
  get_model () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    ::GtkTreeModel *_peel_return = gtk_entry_completion_get_model (_peel_this);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  bool
  get_popup_completion () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_return = gtk_entry_completion_get_popup_completion (_peel_this);
    return !!_peel_return;
  }

  bool
  get_popup_set_width () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_return = gtk_entry_completion_get_popup_set_width (_peel_this);
    return !!_peel_return;
  }

  bool
  get_popup_single_match () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_return = gtk_entry_completion_get_popup_single_match (_peel_this);
    return !!_peel_return;
  }

  int
  get_text_column () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    return gtk_entry_completion_get_text_column (_peel_this);
  }

  void
  insert_prefix () noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gtk_entry_completion_insert_prefix (_peel_this);
  }

  void
  set_inline_completion (bool inline_completion) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_inline_completion = static_cast<gboolean> (inline_completion);
    gtk_entry_completion_set_inline_completion (_peel_this, _peel_inline_completion);
  }

  void
  set_inline_selection (bool inline_selection) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_inline_selection = static_cast<gboolean> (inline_selection);
    gtk_entry_completion_set_inline_selection (_peel_this, _peel_inline_selection);
  }

  template<typename EntryCompletionMatchFunc>
  void
  set_match_func (EntryCompletionMatchFunc &&func) noexcept
  {
    gpointer _peel_func_data;
    ::GDestroyNotify _peel_func_notify;
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    ::GtkEntryCompletionMatchFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkEntryCompletion *, const char *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<EntryCompletionMatchFunc &&> (func),
      [] (::GtkEntryCompletion *completion, const char *key, ::GtkTreeIter *iter, gpointer user_data) -> gboolean
      {
        EntryCompletionMatchFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<EntryCompletionMatchFunc>::type *> (user_data);
        EntryCompletion *_peel_completion = reinterpret_cast<EntryCompletion *> (completion);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = _peel_captured_func (_peel_completion, key, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_func_data, &_peel_func_notify, peel::internals::is_const_invocable<EntryCompletionMatchFunc, void, EntryCompletion *, const char *, TreeIter *>::value);
    gtk_entry_completion_set_match_func (_peel_this, _peel_func, _peel_func_data, _peel_func_notify);
  }

  void
  set_minimum_key_length (int length) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gtk_entry_completion_set_minimum_key_length (_peel_this, length);
  }

  void
  set_model (TreeModel *model) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    gtk_entry_completion_set_model (_peel_this, _peel_model);
  }

  void
  set_popup_completion (bool popup_completion) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_popup_completion = static_cast<gboolean> (popup_completion);
    gtk_entry_completion_set_popup_completion (_peel_this, _peel_popup_completion);
  }

  void
  set_popup_set_width (bool popup_set_width) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_popup_set_width = static_cast<gboolean> (popup_set_width);
    gtk_entry_completion_set_popup_set_width (_peel_this, _peel_popup_set_width);
  }

  void
  set_popup_single_match (bool popup_single_match) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gboolean _peel_popup_single_match = static_cast<gboolean> (popup_single_match);
    gtk_entry_completion_set_popup_single_match (_peel_this, _peel_popup_single_match);
  }

  void
  set_text_column (int column) noexcept
  {
    ::GtkEntryCompletion *_peel_this = reinterpret_cast<::GtkEntryCompletion *> (this);
    gtk_entry_completion_set_text_column (_peel_this, column);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cursor_on_match (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (TreeModel *, const TreeIter *)>::_peel_connect_by_name (this, "cursor-on-match", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cursor_on_match (HandlerObject *object, bool (HandlerObject::*handler_method) (EntryCompletion *, TreeModel *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (TreeModel *, const TreeIter *)>::_peel_connect_by_name (this, "cursor-on-match", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_prefix (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (const char *)>::_peel_connect_by_name (this, "insert-prefix", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_prefix (HandlerObject *object, bool (HandlerObject::*handler_method) (EntryCompletion *, const char *), bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (const char *)>::_peel_connect_by_name (this, "insert-prefix", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_match_selected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (TreeModel *, const TreeIter *)>::_peel_connect_by_name (this, "match-selected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_match_selected (HandlerObject *object, bool (HandlerObject::*handler_method) (EntryCompletion *, TreeModel *, const TreeIter *), bool after = false) noexcept
  {
    return Signal<EntryCompletion, bool (TreeModel *, const TreeIter *)>::_peel_connect_by_name (this, "match-selected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_no_matches (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EntryCompletion, void ()>::_peel_connect_by_name (this, "no-matches", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_no_matches (HandlerObject *object, void (HandlerObject::*handler_method) (EntryCompletion *), bool after = false) noexcept
  {
    return Signal<EntryCompletion, void ()>::_peel_connect_by_name (this, "no-matches", object, handler_method, after);
  }

  static peel::Property<CellArea>
  prop_cell_area ()
  {
    return peel::Property<CellArea> { "cell-area" };
  }

  static peel::Property<bool>
  prop_inline_completion ()
  {
    return peel::Property<bool> { "inline-completion" };
  }

  static peel::Property<bool>
  prop_inline_selection ()
  {
    return peel::Property<bool> { "inline-selection" };
  }

  static peel::Property<int>
  prop_minimum_key_length ()
  {
    return peel::Property<int> { "minimum-key-length" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

  static peel::Property<bool>
  prop_popup_completion ()
  {
    return peel::Property<bool> { "popup-completion" };
  }

  static peel::Property<bool>
  prop_popup_set_width ()
  {
    return peel::Property<bool> { "popup-set-width" };
  }

  static peel::Property<bool>
  prop_popup_single_match ()
  {
    return peel::Property<bool> { "popup-single-match" };
  }

  static peel::Property<int>
  prop_text_column ()
  {
    return peel::Property<int> { "text-column" };
  }
}; /* class EntryCompletion */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
