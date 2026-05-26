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
namespace Gio
{
class MenuModel;
} /* namespace Gio */

namespace Gtk
{
enum class Justification : std::underlying_type<::GtkJustification>::type;
class Label;
enum class MovementStep : std::underlying_type<::GtkMovementStep>::type;
enum class NaturalWrapMode : std::underlying_type<::GtkNaturalWrapMode>::type;
class Widget;
} /* namespace Gtk */

namespace Pango
{
class /* record */ AttrList;
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type;
class Layout;
class /* record */ TabArray;
enum class WrapMode : std::underlying_type<::PangoWrapMode>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Label> ()
{
  return gtk_label_get_type ();
}


namespace Gtk
{
class Label : public Widget
/* non-derivable */
/* implements Accessible, AccessibleHypertext, AccessibleText, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Label () = delete;
  Label (const Label &) = delete;
  Label (Label &&) = delete;
  Label &
  operator = (const Label &) = delete;
  Label &
  operator = (Label &&) = delete;
  ~Label () = delete;
public:

  static peel::FloatPtr<Label>
  create (const char *str) noexcept
  {
    ::GtkWidget *_peel_return = gtk_label_new (str);
    peel_assume (_peel_return);
    return peel::FloatPtr<Label> (reinterpret_cast<Label *> (_peel_return));
  }

  static peel::FloatPtr<Label>
  create_with_mnemonic (const char *str) noexcept
  {
    ::GtkWidget *_peel_return = gtk_label_new_with_mnemonic (str);
    peel_assume (_peel_return);
    return peel::FloatPtr<Label> (reinterpret_cast<Label *> (_peel_return));
  }

  Pango::AttrList *
  get_attributes () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoAttrList *_peel_return = gtk_label_get_attributes (_peel_this);
    return reinterpret_cast<Pango::AttrList *> (_peel_return);
  }

  const char *
  get_current_uri () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_current_uri (_peel_this);
  }

  Pango::EllipsizeMode
  get_ellipsize () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoEllipsizeMode _peel_return = gtk_label_get_ellipsize (_peel_this);
    return static_cast<Pango::EllipsizeMode> (_peel_return);
  }

  Gio::MenuModel *
  get_extra_menu () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GMenuModel *_peel_return = gtk_label_get_extra_menu (_peel_this);
    return reinterpret_cast<Gio::MenuModel *> (_peel_return);
  }

  Justification
  get_justify () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkJustification _peel_return = gtk_label_get_justify (_peel_this);
    return static_cast<Justification> (_peel_return);
  }

  const char *
  get_label () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_label (_peel_this);
  }

  peel_returns_nonnull
  Pango::Layout *
  get_layout () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoLayout *_peel_return = gtk_label_get_layout (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Pango::Layout *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_layout_offsets (int *x, int *y) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_get_layout_offsets (_peel_this, x, y);
  }

  int
  get_lines () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_lines (_peel_this);
  }

  int
  get_max_width_chars () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_max_width_chars (_peel_this);
  }

  unsigned
  get_mnemonic_keyval () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_mnemonic_keyval (_peel_this);
  }

  Widget *
  get_mnemonic_widget () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkWidget *_peel_return = gtk_label_get_mnemonic_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  NaturalWrapMode
  get_natural_wrap_mode () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkNaturalWrapMode _peel_return = gtk_label_get_natural_wrap_mode (_peel_this);
    return static_cast<NaturalWrapMode> (_peel_return);
  }

  bool
  get_selectable () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_selectable (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_selection_bounds (int *start, int *end) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_selection_bounds (_peel_this, start, end);
    return !!_peel_return;
  }

  bool
  get_single_line_mode () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_single_line_mode (_peel_this);
    return !!_peel_return;
  }

  peel::UniquePtr<Pango::TabArray>
  get_tabs () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoTabArray *_peel_return = gtk_label_get_tabs (_peel_this);
    return peel::UniquePtr<Pango::TabArray>::adopt_ref (reinterpret_cast<Pango::TabArray *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_text () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_text (_peel_this);
  }

  bool
  get_use_markup () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_use_markup (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  int
  get_width_chars () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_width_chars (_peel_this);
  }

  bool
  get_wrap () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_return = gtk_label_get_wrap (_peel_this);
    return !!_peel_return;
  }

  Pango::WrapMode
  get_wrap_mode () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoWrapMode _peel_return = gtk_label_get_wrap_mode (_peel_this);
    return static_cast<Pango::WrapMode> (_peel_return);
  }

  float
  get_xalign () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_xalign (_peel_this);
  }

  float
  get_yalign () noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    return gtk_label_get_yalign (_peel_this);
  }

  void
  select_region (int start_offset, int end_offset) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_select_region (_peel_this, start_offset, end_offset);
  }

  peel_arg_in (2)
  void
  set_attributes (Pango::AttrList *attrs) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoAttrList *_peel_attrs = reinterpret_cast<::PangoAttrList *> (attrs);
    gtk_label_set_attributes (_peel_this, _peel_attrs);
  }

  void
  set_ellipsize (Pango::EllipsizeMode mode) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoEllipsizeMode _peel_mode = static_cast<::PangoEllipsizeMode> (mode);
    gtk_label_set_ellipsize (_peel_this, _peel_mode);
  }

  void
  set_extra_menu (Gio::MenuModel *model) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GMenuModel *_peel_model = reinterpret_cast<::GMenuModel *> (model);
    gtk_label_set_extra_menu (_peel_this, _peel_model);
  }

  void
  set_justify (Justification jtype) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkJustification _peel_jtype = static_cast<::GtkJustification> (jtype);
    gtk_label_set_justify (_peel_this, _peel_jtype);
  }

  void
  set_label (const char *str) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_label (_peel_this, str);
  }

  void
  set_lines (int lines) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_lines (_peel_this, lines);
  }

  peel_nonnull_args (2)
  void
  set_markup (const char *str) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_markup (_peel_this, str);
  }

  peel_nonnull_args (2)
  void
  set_markup_with_mnemonic (const char *str) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_markup_with_mnemonic (_peel_this, str);
  }

  void
  set_max_width_chars (int n_chars) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_max_width_chars (_peel_this, n_chars);
  }

  void
  set_mnemonic_widget (Widget *widget) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_label_set_mnemonic_widget (_peel_this, _peel_widget);
  }

  void
  set_natural_wrap_mode (NaturalWrapMode wrap_mode) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::GtkNaturalWrapMode _peel_wrap_mode = static_cast<::GtkNaturalWrapMode> (wrap_mode);
    gtk_label_set_natural_wrap_mode (_peel_this, _peel_wrap_mode);
  }

  void
  set_selectable (bool setting) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_label_set_selectable (_peel_this, _peel_setting);
  }

  void
  set_single_line_mode (bool single_line_mode) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_single_line_mode = static_cast<gboolean> (single_line_mode);
    gtk_label_set_single_line_mode (_peel_this, _peel_single_line_mode);
  }

  peel_arg_in (2)
  void
  set_tabs (Pango::TabArray *tabs) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoTabArray *_peel_tabs = reinterpret_cast<::PangoTabArray *> (tabs);
    gtk_label_set_tabs (_peel_this, _peel_tabs);
  }

  peel_nonnull_args (2)
  void
  set_text (const char *str) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_text (_peel_this, str);
  }

  peel_nonnull_args (2)
  void
  set_text_with_mnemonic (const char *str) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_text_with_mnemonic (_peel_this, str);
  }

  void
  set_use_markup (bool setting) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_label_set_use_markup (_peel_this, _peel_setting);
  }

  void
  set_use_underline (bool setting) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_label_set_use_underline (_peel_this, _peel_setting);
  }

  void
  set_width_chars (int n_chars) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_width_chars (_peel_this, n_chars);
  }

  void
  set_wrap (bool wrap) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gboolean _peel_wrap = static_cast<gboolean> (wrap);
    gtk_label_set_wrap (_peel_this, _peel_wrap);
  }

  void
  set_wrap_mode (Pango::WrapMode wrap_mode) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    ::PangoWrapMode _peel_wrap_mode = static_cast<::PangoWrapMode> (wrap_mode);
    gtk_label_set_wrap_mode (_peel_this, _peel_wrap_mode);
  }

  void
  set_xalign (float xalign) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_xalign (_peel_this, xalign);
  }

  void
  set_yalign (float yalign) noexcept
  {
    ::GtkLabel *_peel_this = reinterpret_cast<::GtkLabel *> (this);
    gtk_label_set_yalign (_peel_this, yalign);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_current_link (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Label, void ()>::_peel_connect_by_name (this, "activate-current-link", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_current_link (HandlerObject *object, void (HandlerObject::*handler_method) (Label *), bool after = false) noexcept
  {
    return Signal<Label, void ()>::_peel_connect_by_name (this, "activate-current-link", object, handler_method, after);
  }

  void
  emit_activate_current_link () noexcept
  {
    return Signal<Label, void ()>::_peel_emit_by_name (this, "activate-current-link");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_link (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Label, bool (const char *)>::_peel_connect_by_name (this, "activate-link", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_link (HandlerObject *object, bool (HandlerObject::*handler_method) (Label *, const char *), bool after = false) noexcept
  {
    return Signal<Label, bool (const char *)>::_peel_connect_by_name (this, "activate-link", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_copy_clipboard (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Label, void ()>::_peel_connect_by_name (this, "copy-clipboard", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_copy_clipboard (HandlerObject *object, void (HandlerObject::*handler_method) (Label *), bool after = false) noexcept
  {
    return Signal<Label, void ()>::_peel_connect_by_name (this, "copy-clipboard", object, handler_method, after);
  }

  void
  emit_copy_clipboard () noexcept
  {
    return Signal<Label, void ()>::_peel_emit_by_name (this, "copy-clipboard");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_cursor (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Label, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_cursor (HandlerObject *object, void (HandlerObject::*handler_method) (Label *, MovementStep, int, bool), bool after = false) noexcept
  {
    return Signal<Label, void (MovementStep, int, bool)>::_peel_connect_by_name (this, "move-cursor", object, handler_method, after);
  }

  void
  emit_move_cursor (MovementStep step, int count, bool extend_selection) noexcept
  {
    return Signal<Label, void (MovementStep, int, bool)>::_peel_emit_by_name (this, "move-cursor", step, count, extend_selection);
  }

  static peel::Property<Pango::AttrList>
  prop_attributes ()
  {
    return peel::Property<Pango::AttrList> { "attributes" };
  }

  static peel::Property<Pango::EllipsizeMode>
  prop_ellipsize ()
  {
    return peel::Property<Pango::EllipsizeMode> { "ellipsize" };
  }

  static peel::Property<Gio::MenuModel>
  prop_extra_menu ()
  {
    return peel::Property<Gio::MenuModel> { "extra-menu" };
  }

  static peel::Property<Justification>
  prop_justify ()
  {
    return peel::Property<Justification> { "justify" };
  }

  static peel::Property<const char *>
  prop_label ()
  {
    return peel::Property<const char *> { "label" };
  }

  static peel::Property<int>
  prop_lines ()
  {
    return peel::Property<int> { "lines" };
  }

  static peel::Property<int>
  prop_max_width_chars ()
  {
    return peel::Property<int> { "max-width-chars" };
  }

  static peel::Property<unsigned>
  prop_mnemonic_keyval ()
  {
    return peel::Property<unsigned> { "mnemonic-keyval" };
  }

  static peel::Property<Widget>
  prop_mnemonic_widget ()
  {
    return peel::Property<Widget> { "mnemonic-widget" };
  }

  static peel::Property<NaturalWrapMode>
  prop_natural_wrap_mode ()
  {
    return peel::Property<NaturalWrapMode> { "natural-wrap-mode" };
  }

  static peel::Property<bool>
  prop_selectable ()
  {
    return peel::Property<bool> { "selectable" };
  }

  static peel::Property<bool>
  prop_single_line_mode ()
  {
    return peel::Property<bool> { "single-line-mode" };
  }

  static peel::Property<Pango::TabArray>
  prop_tabs ()
  {
    return peel::Property<Pango::TabArray> { "tabs" };
  }

  static peel::Property<bool>
  prop_use_markup ()
  {
    return peel::Property<bool> { "use-markup" };
  }

  static peel::Property<bool>
  prop_use_underline ()
  {
    return peel::Property<bool> { "use-underline" };
  }

  static peel::Property<int>
  prop_width_chars ()
  {
    return peel::Property<int> { "width-chars" };
  }

  static peel::Property<bool>
  prop_wrap ()
  {
    return peel::Property<bool> { "wrap" };
  }

  static peel::Property<Pango::WrapMode>
  prop_wrap_mode ()
  {
    return peel::Property<Pango::WrapMode> { "wrap-mode" };
  }

  static peel::Property<float>
  prop_xalign ()
  {
    return peel::Property<float> { "xalign" };
  }

  static peel::Property<float>
  prop_yalign ()
  {
    return peel::Property<float> { "yalign" };
  }
}; /* class Label */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Pango/TabArray.h>
