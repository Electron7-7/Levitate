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
#include <peel/Gtk/CellEditable.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Device;
} /* namespace Gdk */

namespace Gtk
{
class ComboBox;
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
enum class SensitivityType : std::underlying_type<::GtkSensitivityType>::type;
struct TreeIter;
class /* interface */ TreeModel;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ComboBox> ()
{
  return gtk_combo_box_get_type ();
}


namespace Gtk
{
class ComboBox : public CellEditable
/* extends Widget */
/* implements Accessible, Buildable, CellEditable, CellLayout, Constraint::Target */
{
private:
  using CellEditable::get_default_direction;
  using CellEditable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ComboBox () = delete;
  ComboBox (const ComboBox &) = delete;
  ComboBox (ComboBox &&) = delete;
  ComboBox &
  operator = (const ComboBox &) = delete;
  ComboBox &
  operator = (ComboBox &&) = delete;
protected:
  ~ComboBox () = default;
public:

  static peel::FloatPtr<ComboBox>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_combo_box_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBox> (reinterpret_cast<ComboBox *> (_peel_return));
  }

  static peel::FloatPtr<ComboBox>
  create_with_entry () noexcept
  {
    ::GtkWidget *_peel_return = gtk_combo_box_new_with_entry ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBox> (reinterpret_cast<ComboBox *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<ComboBox>
  create_with_model (TreeModel *model) noexcept
  {
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkWidget *_peel_return = gtk_combo_box_new_with_model (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBox> (reinterpret_cast<ComboBox *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<ComboBox>
  create_with_model_and_entry (TreeModel *model) noexcept
  {
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    ::GtkWidget *_peel_return = gtk_combo_box_new_with_model_and_entry (_peel_model);
    peel_assume (_peel_return);
    return peel::FloatPtr<ComboBox> (reinterpret_cast<ComboBox *> (_peel_return));
  }

  int
  get_active () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    return gtk_combo_box_get_active (_peel_this);
  }

  const char *
  get_active_id () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    return gtk_combo_box_get_active_id (_peel_this);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_active_iter (TreeIter *iter) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_return = gtk_combo_box_get_active_iter (_peel_this, _peel_iter);
    return !!_peel_return;
  }

  SensitivityType
  get_button_sensitivity () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkSensitivityType _peel_return = gtk_combo_box_get_button_sensitivity (_peel_this);
    return static_cast<SensitivityType> (_peel_return);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkWidget *_peel_return = gtk_combo_box_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_entry_text_column () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    return gtk_combo_box_get_entry_text_column (_peel_this);
  }

  bool
  get_has_entry () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gboolean _peel_return = gtk_combo_box_get_has_entry (_peel_this);
    return !!_peel_return;
  }

  int
  get_id_column () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    return gtk_combo_box_get_id_column (_peel_this);
  }

  TreeModel *
  get_model () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkTreeModel *_peel_return = gtk_combo_box_get_model (_peel_this);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  bool
  get_popup_fixed_width () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gboolean _peel_return = gtk_combo_box_get_popup_fixed_width (_peel_this);
    return !!_peel_return;
  }

  ::GtkTreeViewRowSeparatorFunc
  get_row_separator_func () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    return gtk_combo_box_get_row_separator_func (_peel_this);
  }

  void
  popdown () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gtk_combo_box_popdown (_peel_this);
  }

  void
  popup () noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gtk_combo_box_popup (_peel_this);
  }

  peel_nonnull_args (2)
  void
  popup_for_device (Gdk::Device *device) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    gtk_combo_box_popup_for_device (_peel_this, _peel_device);
  }

  void
  set_active (int index_) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gtk_combo_box_set_active (_peel_this, index_);
  }

  bool
  set_active_id (const char *active_id) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gboolean _peel_return = gtk_combo_box_set_active_id (_peel_this, active_id);
    return !!_peel_return;
  }

  peel_arg_in (2)
  void
  set_active_iter (TreeIter *iter) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gtk_combo_box_set_active_iter (_peel_this, _peel_iter);
  }

  void
  set_button_sensitivity (SensitivityType sensitivity) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkSensitivityType _peel_sensitivity = static_cast<::GtkSensitivityType> (sensitivity);
    gtk_combo_box_set_button_sensitivity (_peel_this, _peel_sensitivity);
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_combo_box_set_child (_peel_this, _peel_child);
  }

  void
  set_entry_text_column (int text_column) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gtk_combo_box_set_entry_text_column (_peel_this, text_column);
  }

  void
  set_id_column (int id_column) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gtk_combo_box_set_id_column (_peel_this, id_column);
  }

  void
  set_model (TreeModel *model) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    gtk_combo_box_set_model (_peel_this, _peel_model);
  }

  void
  set_popup_fixed_width (bool fixed) noexcept
  {
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    gboolean _peel_fixed = static_cast<gboolean> (fixed);
    gtk_combo_box_set_popup_fixed_width (_peel_this, _peel_fixed);
  }

  template<typename TreeViewRowSeparatorFunc>
  void
  set_row_separator_func (TreeViewRowSeparatorFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    ::GtkTreeViewRowSeparatorFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GtkTreeModel *, ::GtkTreeIter *>::wrap_notified_callback (
      static_cast<TreeViewRowSeparatorFunc &&> (func),
      [] (::GtkTreeModel *model, ::GtkTreeIter *iter, gpointer data) -> gboolean
      {
        TreeViewRowSeparatorFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TreeViewRowSeparatorFunc>::type *> (data);
        TreeModel *_peel_model = reinterpret_cast<TreeModel *> (model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_func) (_peel_model, _peel_iter);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<TreeViewRowSeparatorFunc, void, TreeModel *, TreeIter *>::value);
    gtk_combo_box_set_row_separator_func (_peel_this, _peel_func, _peel_data, _peel_destroy);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (ComboBox *), bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<ComboBox, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ComboBox *), bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_format_entry_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, peel::String (const char *)>::_peel_connect_by_name (this, "format-entry-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_format_entry_text (HandlerObject *object, peel::String (HandlerObject::*handler_method) (ComboBox *, const char *), bool after = false) noexcept
  {
    return Signal<ComboBox, peel::String (const char *)>::_peel_connect_by_name (this, "format-entry-text", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_active (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, void (ScrollType)>::_peel_connect_by_name (this, "move-active", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_active (HandlerObject *object, void (HandlerObject::*handler_method) (ComboBox *, ScrollType), bool after = false) noexcept
  {
    return Signal<ComboBox, void (ScrollType)>::_peel_connect_by_name (this, "move-active", object, handler_method, after);
  }

  void
  emit_move_active (ScrollType scroll_type) noexcept
  {
    return Signal<ComboBox, void (ScrollType)>::_peel_emit_by_name (this, "move-active", scroll_type);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_popdown (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, bool ()>::_peel_connect_by_name (this, "popdown", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_popdown (HandlerObject *object, bool (HandlerObject::*handler_method) (ComboBox *), bool after = false) noexcept
  {
    return Signal<ComboBox, bool ()>::_peel_connect_by_name (this, "popdown", object, handler_method, after);
  }

  bool
  emit_popdown () noexcept
  {
    return Signal<ComboBox, bool ()>::_peel_emit_by_name (this, "popdown");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_popup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "popup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_popup (HandlerObject *object, void (HandlerObject::*handler_method) (ComboBox *), bool after = false) noexcept
  {
    return Signal<ComboBox, void ()>::_peel_connect_by_name (this, "popup", object, handler_method, after);
  }

  void
  emit_popup () noexcept
  {
    return Signal<ComboBox, void ()>::_peel_emit_by_name (this, "popup");
  }

  static peel::Property<int>
  prop_active ()
  {
    return peel::Property<int> { "active" };
  }

  static peel::Property<const char *>
  prop_active_id ()
  {
    return peel::Property<const char *> { "active-id" };
  }

  static peel::Property<SensitivityType>
  prop_button_sensitivity ()
  {
    return peel::Property<SensitivityType> { "button-sensitivity" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<int>
  prop_entry_text_column ()
  {
    return peel::Property<int> { "entry-text-column" };
  }

  static peel::Property<bool>
  prop_has_entry ()
  {
    return peel::Property<bool> { "has-entry" };
  }

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
  }

  static peel::Property<int>
  prop_id_column ()
  {
    return peel::Property<int> { "id-column" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }

  static peel::Property<bool>
  prop_popup_fixed_width ()
  {
    return peel::Property<bool> { "popup-fixed-width" };
  }

  static peel::Property<bool>
  prop_popup_shown ()
  {
    return peel::Property<bool> { "popup-shown" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ComboBox> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkComboBoxClass *_peel_class = reinterpret_cast<::GtkComboBoxClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    _peel_class->activate (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkComboBoxClass *_peel_class = reinterpret_cast<::GtkComboBoxClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    _peel_class->changed (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::String
  parent_vfunc_format_entry_text (const char *path) noexcept
  {
    ::GtkComboBoxClass *_peel_class = reinterpret_cast<::GtkComboBoxClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkComboBox *_peel_this = reinterpret_cast<::GtkComboBox *> (this);
    char *_peel_return = _peel_class->format_entry_text (_peel_this, path);
    return peel::String::adopt_string (_peel_return);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkComboBoxClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkComboBoxClass *klass = reinterpret_cast<::GtkComboBoxClass *> (this);
      klass->activate = +[] (::GtkComboBox *combo_box) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (combo_box);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkComboBoxClass *klass = reinterpret_cast<::GtkComboBoxClass *> (this);
      klass->changed = +[] (::GtkComboBox *combo_box) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (combo_box);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_format_entry_text ()
    {
      ::GtkComboBoxClass *klass = reinterpret_cast<::GtkComboBoxClass *> (this);
      klass->format_entry_text = +[] (::GtkComboBox *combo_box, const char *path) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (combo_box);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_format_entry_text (path);
        return std::move (_peel_return).release_string ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkComboBoxClass),
                 "ComboBox::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkComboBoxClass),
                 "ComboBox::Class align mismatch");
}; /* class ComboBox */

static_assert (sizeof (ComboBox) == sizeof (::GtkComboBox),
               "ComboBox size mismatch");
static_assert (alignof (ComboBox) == alignof (::GtkComboBox),
               "ComboBox align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
