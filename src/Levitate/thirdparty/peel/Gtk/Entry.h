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
#include <peel/Gdk/Drag.h>
#include <peel/Gtk/Editable.h>
#include <peel/Gtk/Image.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class ContentProvider;
class /* interface */ Paintable;
struct Rectangle;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ Icon;
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
class Entry;
class EntryBuffer;
class EntryCompletion;
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
} /* namespace Gtk */

namespace Pango
{
class /* record */ AttrList;
class /* record */ TabArray;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Entry> ()
{
  return gtk_entry_get_type ();
}


namespace Gtk
{
class Entry : public Editable
/* extends Widget */
/* implements Accessible, Buildable, CellEditable, Constraint::Target, Editable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Entry () = delete;
  Entry (const Entry &) = delete;
  Entry (Entry &&) = delete;
  Entry &
  operator = (const Entry &) = delete;
  Entry &
  operator = (Entry &&) = delete;
protected:
  ~Entry () = default;
public:
  enum class IconPosition : std::underlying_type<::GtkEntryIconPosition>::type;

  static peel::FloatPtr<Entry>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_entry_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Entry> (reinterpret_cast<Entry *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Entry>
  create_with_buffer (EntryBuffer *buffer) noexcept
  {
    ::GtkEntryBuffer *_peel_buffer = reinterpret_cast<::GtkEntryBuffer *> (buffer);
    ::GtkWidget *_peel_return = gtk_entry_new_with_buffer (_peel_buffer);
    peel_assume (_peel_return);
    return peel::FloatPtr<Entry> (reinterpret_cast<Entry *> (_peel_return));
  }

  bool
  get_activates_default () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_return = gtk_entry_get_activates_default (_peel_this);
    return !!_peel_return;
  }

  float
  get_alignment () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_alignment (_peel_this);
  }

  Pango::AttrList *
  get_attributes () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::PangoAttrList *_peel_return = gtk_entry_get_attributes (_peel_this);
    return reinterpret_cast<Pango::AttrList *> (_peel_return);
  }

  peel_returns_nonnull
  EntryBuffer *
  get_buffer () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryBuffer *_peel_return = gtk_entry_get_buffer (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<EntryBuffer *> (_peel_return);
  }

  EntryCompletion *
  get_completion () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryCompletion *_peel_return = gtk_entry_get_completion (_peel_this);
    return reinterpret_cast<EntryCompletion *> (_peel_return);
  }

  int
  get_current_icon_drag_source () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_current_icon_drag_source (_peel_this);
  }

  Gio::MenuModel *
  get_extra_menu () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GMenuModel *_peel_return = gtk_entry_get_extra_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  bool
  get_has_frame () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_return = gtk_entry_get_has_frame (_peel_this);
    return !!_peel_return;
  }

  bool
  get_icon_activatable (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gboolean _peel_return = gtk_entry_get_icon_activatable (_peel_this, _peel_icon_pos);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (3)
  void
  get_icon_area (Entry::IconPosition icon_pos, Gdk::Rectangle *icon_area) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GdkRectangle *_peel_icon_area = reinterpret_cast<::GdkRectangle *> (icon_area);
    gtk_entry_get_icon_area (_peel_this, _peel_icon_pos, _peel_icon_area);
  }

  int
  get_icon_at_pos (int x, int y) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_icon_at_pos (_peel_this, x, y);
  }

  Gio::Icon *
  get_icon_gicon (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GIcon *_peel_return = gtk_entry_get_icon_gicon (_peel_this, _peel_icon_pos);
    return reinterpret_cast<Gio::Icon *> (_peel_return);
  }

  const char *
  get_icon_name (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    return gtk_entry_get_icon_name (_peel_this, _peel_icon_pos);
  }

  Gdk::Paintable *
  get_icon_paintable (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GdkPaintable *_peel_return = gtk_entry_get_icon_paintable (_peel_this, _peel_icon_pos);
    return reinterpret_cast<Gdk::Paintable *> (_peel_return);
  }

  bool
  get_icon_sensitive (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gboolean _peel_return = gtk_entry_get_icon_sensitive (_peel_this, _peel_icon_pos);
    return !!_peel_return;
  }

  Image::Type
  get_icon_storage_type (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GtkImageType _peel_return = gtk_entry_get_icon_storage_type (_peel_this, _peel_icon_pos);
    return static_cast<Image::Type> (_peel_return);
  }

  peel::String
  get_icon_tooltip_markup (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    char *_peel_return = gtk_entry_get_icon_tooltip_markup (_peel_this, _peel_icon_pos);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  get_icon_tooltip_text (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    char *_peel_return = gtk_entry_get_icon_tooltip_text (_peel_this, _peel_icon_pos);
    return peel::String::adopt_string (_peel_return);
  }

  InputHints
  get_input_hints () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkInputHints _peel_return = gtk_entry_get_input_hints (_peel_this);
    return static_cast<InputHints> (_peel_return);
  }

  InputPurpose
  get_input_purpose () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkInputPurpose _peel_return = gtk_entry_get_input_purpose (_peel_this);
    return static_cast<InputPurpose> (_peel_return);
  }

  gunichar
  get_invisible_char () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_invisible_char (_peel_this);
  }

  int
  get_max_length () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_max_length (_peel_this);
  }

  const char *
  get_menu_entry_icon_text (Entry::IconPosition icon_pos) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    return gtk_entry_get_menu_entry_icon_text (_peel_this, _peel_icon_pos);
  }

  bool
  get_overwrite_mode () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_return = gtk_entry_get_overwrite_mode (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_placeholder_text () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_placeholder_text (_peel_this);
  }

  double
  get_progress_fraction () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_progress_fraction (_peel_this);
  }

  double
  get_progress_pulse_step () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_progress_pulse_step (_peel_this);
  }

  Pango::TabArray *
  get_tabs () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::PangoTabArray *_peel_return = gtk_entry_get_tabs (_peel_this);
    return reinterpret_cast<Pango::TabArray *> (_peel_return);
  }

  uint16_t
  get_text_length () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    return gtk_entry_get_text_length (_peel_this);
  }

  bool
  get_visibility () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_return = gtk_entry_get_visibility (_peel_this);
    return !!_peel_return;
  }

  bool
  grab_focus_without_selecting () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_return = gtk_entry_grab_focus_without_selecting (_peel_this);
    return !!_peel_return;
  }

  void
  progress_pulse () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_progress_pulse (_peel_this);
  }

  void
  reset_im_context () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_reset_im_context (_peel_this);
  }

  void
  set_activates_default (bool setting) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_entry_set_activates_default (_peel_this, _peel_setting);
  }

  void
  set_alignment (float xalign) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_alignment (_peel_this, xalign);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_attributes (Pango::AttrList *attrs) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
    gtk_entry_set_attributes (_peel_this, _peel_attrs);
  }

  peel_nonnull_args (2)
  void
  set_buffer (EntryBuffer *buffer) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryBuffer *_peel_buffer = reinterpret_cast<::GtkEntryBuffer *> (buffer);
    gtk_entry_set_buffer (_peel_this, _peel_buffer);
  }

  void
  set_completion (EntryCompletion *completion) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryCompletion *_peel_completion = reinterpret_cast<::GtkEntryCompletion *> (completion);
    gtk_entry_set_completion (_peel_this, _peel_completion);
  }

  void
  set_extra_menu (Gio::MenuModel *model) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_entry_set_extra_menu (_peel_this, _peel_model);
  }

  void
  set_has_frame (bool setting) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_entry_set_has_frame (_peel_this, _peel_setting);
  }

  void
  set_icon_activatable (Entry::IconPosition icon_pos, bool activatable) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gboolean _peel_activatable = static_cast<gboolean> (activatable);
    gtk_entry_set_icon_activatable (_peel_this, _peel_icon_pos, _peel_activatable);
  }

  peel_nonnull_args (3)
  void
  set_icon_drag_source (Entry::IconPosition icon_pos, Gdk::ContentProvider *provider, Gdk::Drag::Action actions) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GdkContentProvider *_peel_provider = reinterpret_cast<::GdkContentProvider *> (provider);
    ::GdkDragAction _peel_actions = static_cast<::GdkDragAction> (actions);
    gtk_entry_set_icon_drag_source (_peel_this, _peel_icon_pos, _peel_provider, _peel_actions);
  }

  void
  set_icon_from_gicon (Entry::IconPosition icon_pos, Gio::Icon *icon) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    gtk_entry_set_icon_from_gicon (_peel_this, _peel_icon_pos, _peel_icon);
  }

  void
  set_icon_from_icon_name (Entry::IconPosition icon_pos, const char *icon_name) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gtk_entry_set_icon_from_icon_name (_peel_this, _peel_icon_pos, icon_name);
  }

  void
  set_icon_from_paintable (Entry::IconPosition icon_pos, Gdk::Paintable *paintable) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_entry_set_icon_from_paintable (_peel_this, _peel_icon_pos, _peel_paintable);
  }

  void
  set_icon_sensitive (Entry::IconPosition icon_pos, bool sensitive) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gboolean _peel_sensitive = static_cast<gboolean> (sensitive);
    gtk_entry_set_icon_sensitive (_peel_this, _peel_icon_pos, _peel_sensitive);
  }

  void
  set_icon_tooltip_markup (Entry::IconPosition icon_pos, const char *tooltip) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gtk_entry_set_icon_tooltip_markup (_peel_this, _peel_icon_pos, tooltip);
  }

  void
  set_icon_tooltip_text (Entry::IconPosition icon_pos, const char *tooltip) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gtk_entry_set_icon_tooltip_text (_peel_this, _peel_icon_pos, tooltip);
  }

  void
  set_input_hints (InputHints hints) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkInputHints _peel_hints = static_cast<::GtkInputHints> (hints);
    gtk_entry_set_input_hints (_peel_this, _peel_hints);
  }

  void
  set_input_purpose (InputPurpose purpose) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkInputPurpose _peel_purpose = static_cast<::GtkInputPurpose> (purpose);
    gtk_entry_set_input_purpose (_peel_this, _peel_purpose);
  }

  void
  set_invisible_char (gunichar ch) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_invisible_char (_peel_this, ch);
  }

  void
  set_max_length (int max) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_max_length (_peel_this, max);
  }

  peel_nonnull_args (3)
  void
  set_menu_entry_icon_text (Entry::IconPosition icon_pos, const char *text) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::GtkEntryIconPosition _peel_icon_pos = static_cast<::GtkEntryIconPosition> (icon_pos);
    gtk_entry_set_menu_entry_icon_text (_peel_this, _peel_icon_pos, text);
  }

  void
  set_overwrite_mode (bool overwrite) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
    gtk_entry_set_overwrite_mode (_peel_this, _peel_overwrite);
  }

  void
  set_placeholder_text (const char *text) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_placeholder_text (_peel_this, text);
  }

  void
  set_progress_fraction (double fraction) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_progress_fraction (_peel_this, fraction);
  }

  void
  set_progress_pulse_step (double fraction) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_set_progress_pulse_step (_peel_this, fraction);
  }

  peel_arg_in (2)
  void
  set_tabs (Pango::TabArray *tabs) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    ::PangoTabArray *_peel_tabs = reinterpret_cast<::PangoTabArray *> (tabs);
    gtk_entry_set_tabs (_peel_this, _peel_tabs);
  }

  void
  set_visibility (bool visible) noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_entry_set_visibility (_peel_this, _peel_visible);
  }

  void
  unset_invisible_char () noexcept
  {
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    gtk_entry_unset_invisible_char (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Entry, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Entry *), bool after = false) noexcept
  {
    return Signal<Entry, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<Entry, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_icon_press (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Entry, void (Entry::IconPosition)>::_peel_connect_by_name (this, "icon-press", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_icon_press (HandlerObject *object, void (HandlerObject::*handler_method) (Entry *, Entry::IconPosition), bool after = false) noexcept
  {
    return Signal<Entry, void (Entry::IconPosition)>::_peel_connect_by_name (this, "icon-press", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_icon_release (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Entry, void (Entry::IconPosition)>::_peel_connect_by_name (this, "icon-release", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_icon_release (HandlerObject *object, void (HandlerObject::*handler_method) (Entry *, Entry::IconPosition), bool after = false) noexcept
  {
    return Signal<Entry, void (Entry::IconPosition)>::_peel_connect_by_name (this, "icon-release", object, handler_method, after);
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

  static peel::Property<EntryCompletion>
  prop_completion ()
  {
    return peel::Property<EntryCompletion> { "completion" };
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

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
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

  static peel::Property<const char *>
  prop_menu_entry_icon_primary_text ()
  {
    return peel::Property<const char *> { "menu-entry-icon-primary-text" };
  }

  static peel::Property<const char *>
  prop_menu_entry_icon_secondary_text ()
  {
    return peel::Property<const char *> { "menu-entry-icon-secondary-text" };
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
  prop_primary_icon_activatable ()
  {
    return peel::Property<bool> { "primary-icon-activatable" };
  }

  static peel::Property<Gio::Icon>
  prop_primary_icon_gicon ()
  {
    return peel::Property<Gio::Icon> { "primary-icon-gicon" };
  }

  static peel::Property<const char *>
  prop_primary_icon_name ()
  {
    return peel::Property<const char *> { "primary-icon-name" };
  }

  static peel::Property<Gdk::Paintable>
  prop_primary_icon_paintable ()
  {
    return peel::Property<Gdk::Paintable> { "primary-icon-paintable" };
  }

  static peel::Property<bool>
  prop_primary_icon_sensitive ()
  {
    return peel::Property<bool> { "primary-icon-sensitive" };
  }

  static peel::Property<Image::Type>
  prop_primary_icon_storage_type ()
  {
    return peel::Property<Image::Type> { "primary-icon-storage-type" };
  }

  static peel::Property<const char *>
  prop_primary_icon_tooltip_markup ()
  {
    return peel::Property<const char *> { "primary-icon-tooltip-markup" };
  }

  static peel::Property<const char *>
  prop_primary_icon_tooltip_text ()
  {
    return peel::Property<const char *> { "primary-icon-tooltip-text" };
  }

  static peel::Property<double>
  prop_progress_fraction ()
  {
    return peel::Property<double> { "progress-fraction" };
  }

  static peel::Property<double>
  prop_progress_pulse_step ()
  {
    return peel::Property<double> { "progress-pulse-step" };
  }

  static peel::Property<int>
  prop_scroll_offset ()
  {
    return peel::Property<int> { "scroll-offset" };
  }

  static peel::Property<bool>
  prop_secondary_icon_activatable ()
  {
    return peel::Property<bool> { "secondary-icon-activatable" };
  }

  static peel::Property<Gio::Icon>
  prop_secondary_icon_gicon ()
  {
    return peel::Property<Gio::Icon> { "secondary-icon-gicon" };
  }

  static peel::Property<const char *>
  prop_secondary_icon_name ()
  {
    return peel::Property<const char *> { "secondary-icon-name" };
  }

  static peel::Property<Gdk::Paintable>
  prop_secondary_icon_paintable ()
  {
    return peel::Property<Gdk::Paintable> { "secondary-icon-paintable" };
  }

  static peel::Property<bool>
  prop_secondary_icon_sensitive ()
  {
    return peel::Property<bool> { "secondary-icon-sensitive" };
  }

  static peel::Property<Image::Type>
  prop_secondary_icon_storage_type ()
  {
    return peel::Property<Image::Type> { "secondary-icon-storage-type" };
  }

  static peel::Property<const char *>
  prop_secondary_icon_tooltip_markup ()
  {
    return peel::Property<const char *> { "secondary-icon-tooltip-markup" };
  }

  static peel::Property<const char *>
  prop_secondary_icon_tooltip_text ()
  {
    return peel::Property<const char *> { "secondary-icon-tooltip-text" };
  }

  static peel::Property<bool>
  prop_show_emoji_icon ()
  {
    return peel::Property<bool> { "show-emoji-icon" };
  }

  static peel::Property<Pango::TabArray>
  prop_tabs ()
  {
    return peel::Property<Pango::TabArray> { "tabs" };
  }

  static peel::Property<unsigned>
  prop_text_length ()
  {
    return peel::Property<unsigned> { "text-length" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Entry> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkEntryClass *_peel_class = reinterpret_cast<::GtkEntryClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkEntry *_peel_this = reinterpret_cast<::GtkEntry *> (this);
    _peel_class->activate (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkEntryClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkEntryClass *klass = reinterpret_cast<::GtkEntryClass *> (this);
      klass->activate = +[] (::GtkEntry *entry) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (entry);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkEntryClass),
                 "Entry::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkEntryClass),
                 "Entry::Class align mismatch");
}; /* class Entry */

static_assert (sizeof (Entry) == sizeof (::GtkEntry),
               "Entry size mismatch");
static_assert (alignof (Entry) == alignof (::GtkEntry),
               "Entry align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
