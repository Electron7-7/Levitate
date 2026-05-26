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
namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gtk
{
enum class DeleteType : std::underlying_type<::GtkDeleteType>::type;
class EntryBuffer;
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
class Text;
} /* namespace Gtk */

namespace Pango
{
class /* record */ AttrList;
class /* record */ TabArray;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Text> ()
{
  return gtk_text_get_type ();
}


namespace Gtk
{
class Text : public Editable
/* extends Widget */
/* implements Accessible, AccessibleText, Buildable, Constraint::Target, Editable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Text () = delete;
  Text (const Text &) = delete;
  Text (Text &&) = delete;
  Text &
  operator = (const Text &) = delete;
  Text &
  operator = (Text &&) = delete;
protected:
  ~Text () = default;
public:

  static peel::FloatPtr<Text>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_text_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Text> (reinterpret_cast<Text *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Text>
  create_with_buffer (EntryBuffer *buffer) noexcept
  {
    ::GtkEntryBuffer *_peel_buffer = reinterpret_cast<::GtkEntryBuffer *> (buffer);
    ::GtkWidget *_peel_return = gtk_text_new_with_buffer (_peel_buffer);
    peel_assume (_peel_return);
    return peel::FloatPtr<Text> (reinterpret_cast<Text *> (_peel_return));
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  compute_cursor_extents (size_t position, Graphene::Rect *strong, Graphene::Rect *weak) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::graphene_rect_t *_peel_strong = reinterpret_cast<::graphene_rect_t *> (strong);
    ::graphene_rect_t *_peel_weak = reinterpret_cast<::graphene_rect_t *> (weak);
    gtk_text_compute_cursor_extents (_peel_this, position, _peel_strong, _peel_weak);
  }

  bool
  get_activates_default () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_activates_default (_peel_this);
    return !!_peel_return;
  }

  Pango::AttrList *
  get_attributes () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::PangoAttrList *_peel_return = gtk_text_get_attributes (_peel_this);
    return reinterpret_cast<Pango::AttrList *> (_peel_return);
  }

  peel_returns_nonnull
  EntryBuffer *
  get_buffer () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkEntryBuffer *_peel_return = gtk_text_get_buffer (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<EntryBuffer *> (_peel_return);
  }

  bool
  get_enable_emoji_completion () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_enable_emoji_completion (_peel_this);
    return !!_peel_return;
  }

  Gio::MenuModel *
  get_extra_menu () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GMenuModel *_peel_return = gtk_text_get_extra_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  InputHints
  get_input_hints () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkInputHints _peel_return = gtk_text_get_input_hints (_peel_this);
    return static_cast<InputHints> (_peel_return);
  }

  InputPurpose
  get_input_purpose () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkInputPurpose _peel_return = gtk_text_get_input_purpose (_peel_this);
    return static_cast<InputPurpose> (_peel_return);
  }

  gunichar
  get_invisible_char () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    return gtk_text_get_invisible_char (_peel_this);
  }

  int
  get_max_length () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    return gtk_text_get_max_length (_peel_this);
  }

  bool
  get_overwrite_mode () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_overwrite_mode (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_placeholder_text () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    return gtk_text_get_placeholder_text (_peel_this);
  }

  bool
  get_propagate_text_width () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_propagate_text_width (_peel_this);
    return !!_peel_return;
  }

  Pango::TabArray *
  get_tabs () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::PangoTabArray *_peel_return = gtk_text_get_tabs (_peel_this);
    return reinterpret_cast<Pango::TabArray *> (_peel_return);
  }

  uint16_t
  get_text_length () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    return gtk_text_get_text_length (_peel_this);
  }

  bool
  get_truncate_multiline () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_truncate_multiline (_peel_this);
    return !!_peel_return;
  }

  bool
  get_visibility () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_get_visibility (_peel_this);
    return !!_peel_return;
  }

  bool
  grab_focus_without_selecting () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_return = gtk_text_grab_focus_without_selecting (_peel_this);
    return !!_peel_return;
  }

  void
  set_activates_default (bool activates) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_activates = static_cast<gboolean> (activates);
    gtk_text_set_activates_default (_peel_this, _peel_activates);
  }

  peel_arg_in (2)
  void
  set_attributes (Pango::AttrList *attrs) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
    gtk_text_set_attributes (_peel_this, _peel_attrs);
  }

  peel_nonnull_args (2)
  void
  set_buffer (EntryBuffer *buffer) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkEntryBuffer *_peel_buffer = reinterpret_cast<::GtkEntryBuffer *> (buffer);
    gtk_text_set_buffer (_peel_this, _peel_buffer);
  }

  void
  set_enable_emoji_completion (bool enable_emoji_completion) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_enable_emoji_completion = static_cast<gboolean> (enable_emoji_completion);
    gtk_text_set_enable_emoji_completion (_peel_this, _peel_enable_emoji_completion);
  }

  void
  set_extra_menu (Gio::MenuModel *model) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_text_set_extra_menu (_peel_this, _peel_model);
  }

  void
  set_input_hints (InputHints hints) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkInputHints _peel_hints = static_cast<::GtkInputHints> (hints);
    gtk_text_set_input_hints (_peel_this, _peel_hints);
  }

  void
  set_input_purpose (InputPurpose purpose) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::GtkInputPurpose _peel_purpose = static_cast<::GtkInputPurpose> (purpose);
    gtk_text_set_input_purpose (_peel_this, _peel_purpose);
  }

  void
  set_invisible_char (gunichar ch) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gtk_text_set_invisible_char (_peel_this, ch);
  }

  void
  set_max_length (int length) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gtk_text_set_max_length (_peel_this, length);
  }

  void
  set_overwrite_mode (bool overwrite) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
    gtk_text_set_overwrite_mode (_peel_this, _peel_overwrite);
  }

  void
  set_placeholder_text (const char *text) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gtk_text_set_placeholder_text (_peel_this, text);
  }

  void
  set_propagate_text_width (bool propagate_text_width) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_propagate_text_width = static_cast<gboolean> (propagate_text_width);
    gtk_text_set_propagate_text_width (_peel_this, _peel_propagate_text_width);
  }

  peel_arg_in (2)
  void
  set_tabs (Pango::TabArray *tabs) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    ::PangoTabArray *_peel_tabs = reinterpret_cast<::PangoTabArray *> (tabs);
    gtk_text_set_tabs (_peel_this, _peel_tabs);
  }

  void
  set_truncate_multiline (bool truncate_multiline) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_truncate_multiline = static_cast<gboolean> (truncate_multiline);
    gtk_text_set_truncate_multiline (_peel_this, _peel_truncate_multiline);
  }

  void
  set_visibility (bool visible) noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_text_set_visibility (_peel_this, _peel_visible);
  }

  void
  unset_invisible_char () noexcept
  {
    ::GtkText *_peel_this = reinterpret_cast<::GtkText *> (this);
    gtk_text_unset_invisible_char (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_backspace (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "backspace", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_backspace (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "backspace", object, handler_method, after);
  }

  void
  emit_backspace () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "backspace");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_copy_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "copy-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_copy_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "copy-clipboard", object, handler_method, after);
  }

  void
  emit_copy_clipboard () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "copy-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_cut_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "cut-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_cut_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "cut-clipboard", object, handler_method, after);
  }

  void
  emit_cut_clipboard () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "cut-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_delete_from_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void (DeleteType, int)>::_peel_connect_by_name (this, "delete-from-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_delete_from_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (Text *, DeleteType, int), bool after = false) noexcept
  {
    return Signal<Text, void (DeleteType, int)>::_peel_connect_by_name (this, "delete-from-cursor", object, handler_method, after);
  }

  void
  emit_delete_from_cursor (DeleteType type, int count) noexcept
  {
    return Signal<Text, void (DeleteType, int)>::_peel_emit_by_name (this, "delete-from-cursor", type, count);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_at_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_connect_by_name (this, "insert-at-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_at_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (Text *, const char *), bool after = false) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_connect_by_name (this, "insert-at-cursor", object, handler_method, after);
  }

  void
  emit_insert_at_cursor (const char *string) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_emit_by_name (this, "insert-at-cursor", string);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_emoji (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "insert-emoji", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_emoji (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "insert-emoji", object, handler_method, after);
  }

  void
  emit_insert_emoji () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "insert-emoji");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (Text *, MovementStep, int, bool), bool after = false) noexcept
  {
    return Signal<Text, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  void
  emit_move_cursor (MovementStep step, int count, bool extend) noexcept
  {
    return Signal<Text, void (MovementStep, int, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_paste_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "paste-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_paste_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "paste-clipboard", object, handler_method, after);
  }

  void
  emit_paste_clipboard () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "paste-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preedit_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_connect_by_name (this, "preedit-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preedit_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Text *, const char *), bool after = false) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_connect_by_name (this, "preedit-changed", object, handler_method, after);
  }

  void
  emit_preedit_changed (const char *preedit) noexcept
  {
    return Signal<Text, void (const char *)>::_peel_emit_by_name (this, "preedit-changed", preedit);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggle_overwrite (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "toggle-overwrite", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggle_overwrite (HandlerObject *object, void (HandlerObject::*handler_method) (Text *), bool after = false) noexcept
  {
    return Signal<Text, void ()>::_peel_connect_by_name (this, "toggle-overwrite", object, handler_method, after);
  }

  void
  emit_toggle_overwrite () noexcept
  {
    return Signal<Text, void ()>::_peel_emit_by_name (this, "toggle-overwrite");
  }

  static peel::Property<bool>
  prop_activates_default ()
  {
    return peel::Property<bool> { "activates-default" };
  }

  static peel::Property<Pango::AttrList>
  prop_attributes ()
  {
    return peel::Property<Pango::AttrList> { "attributes" };
  }

  static peel::Property<EntryBuffer>
  prop_buffer ()
  {
    return peel::Property<EntryBuffer> { "buffer" };
  }

  static peel::Property<bool>
  prop_enable_emoji_completion ()
  {
    return peel::Property<bool> { "enable-emoji-completion" };
  }

  static peel::Property<Gio::MenuModel>
  prop_extra_menu ()
  {
    return peel::Property<Gio::MenuModel> { "extra-menu" };
  }

  static peel::Property<const char *>
  prop_im_module ()
  {
    return peel::Property<const char *> { "im-module" };
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

  static peel::Property<unsigned>
  prop_invisible_char ()
  {
    return peel::Property<unsigned> { "invisible-char" };
  }

  static peel::Property<bool>
  prop_invisible_char_set ()
  {
    return peel::Property<bool> { "invisible-char-set" };
  }

  static peel::Property<int>
  prop_max_length ()
  {
    return peel::Property<int> { "max-length" };
  }

  static peel::Property<bool>
  prop_overwrite_mode ()
  {
    return peel::Property<bool> { "overwrite-mode" };
  }

  static peel::Property<const char *>
  prop_placeholder_text ()
  {
    return peel::Property<const char *> { "placeholder-text" };
  }

  static peel::Property<bool>
  prop_propagate_text_width ()
  {
    return peel::Property<bool> { "propagate-text-width" };
  }

  static peel::Property<int>
  prop_scroll_offset ()
  {
    return peel::Property<int> { "scroll-offset" };
  }

  static peel::Property<Pango::TabArray>
  prop_tabs ()
  {
    return peel::Property<Pango::TabArray> { "tabs" };
  }

  static peel::Property<bool>
  prop_truncate_multiline ()
  {
    return peel::Property<bool> { "truncate-multiline" };
  }

  static peel::Property<bool>
  prop_visibility ()
  {
    return peel::Property<bool> { "visibility" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Text> ());
    _peel_class->finalize (obj);
  }
}; /* class Text */

static_assert (sizeof (Text) == sizeof (::GtkText),
               "Text size mismatch");
static_assert (alignof (Text) == alignof (::GtkText),
               "Text align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
