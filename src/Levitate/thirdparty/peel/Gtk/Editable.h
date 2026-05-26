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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Accessible.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
class Class;
class ParamSpec;
struct Value;
} /* namespace GObject */

namespace Gtk
{
class /* interface */ Editable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Editable> ()
{
  return gtk_editable_get_type ();
}


namespace Gtk
{
class /* interface */ Editable : public Widget
/* requires Widget */
{
private:
  Editable () = delete;
  Editable (const Editable &) = delete;
  Editable (Editable &&) = delete;

  Editable &
  operator = (const Editable &) = delete;
  Editable &
  operator = (Editable &&) = delete;

protected:
  ~Editable () = default;

public:
  enum class Properties : std::underlying_type<::GtkEditableProperties>::type;

  peel_arg_in (3) peel_nonnull_args (1, 3, 4)
  static bool
  delegate_get_property (GObject::Object *object, unsigned prop_id, GObject::Value *value, GObject::ParamSpec *pspec) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    gboolean _peel_return = gtk_editable_delegate_get_property (_peel_object, prop_id, _peel_value, _peel_pspec);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_nonnull_args (1, 3, 4)
  static bool
  delegate_set_property (GObject::Object *object, unsigned prop_id, const GObject::Value *value, GObject::ParamSpec *pspec) noexcept
  {
    ::GObject *_peel_object = reinterpret_cast<::GObject *> (object);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    gboolean _peel_return = gtk_editable_delegate_set_property (_peel_object, prop_id, _peel_value, _peel_pspec);
    return !!_peel_return;
  }

  peel_nonnull_args (1)
  static unsigned
  install_properties (GObject::Object::Class *object_class, unsigned first_prop) noexcept
  {
    ::GObjectClass *_peel_object_class = reinterpret_cast<::GObjectClass *> (object_class);
    return gtk_editable_install_properties (_peel_object_class, first_prop);
  }

  bool
  delegate_get_accessible_platform_state (Accessible::PlatformState state) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gboolean _peel_return = gtk_editable_delegate_get_accessible_platform_state (_peel_this, _peel_state);
    return !!_peel_return;
  }

  void
  delete_selection () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_delete_selection (_peel_this);
  }

  void
  delete_text (int start_pos, int end_pos) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_delete_text (_peel_this, start_pos, end_pos);
  }

  void
  finish_delegate () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_finish_delegate (_peel_this);
  }

  float
  get_alignment () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return gtk_editable_get_alignment (_peel_this);
  }

  peel::String
  get_chars (int start_pos, int end_pos) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    char *_peel_return = gtk_editable_get_chars (_peel_this, start_pos, end_pos);
    return peel::String::adopt_string (_peel_return);
  }

  Editable *
  get_delegate () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    ::GtkEditable *_peel_return = gtk_editable_get_delegate (_peel_this);
    return reinterpret_cast<Editable *> (_peel_return);
  }

  bool
  get_editable () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_return = gtk_editable_get_editable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_enable_undo () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_return = gtk_editable_get_enable_undo (_peel_this);
    return !!_peel_return;
  }

  int
  get_max_width_chars () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return gtk_editable_get_max_width_chars (_peel_this);
  }

  int
  get_position () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return gtk_editable_get_position (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_selection_bounds (int *start_pos, int *end_pos) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_return = gtk_editable_get_selection_bounds (_peel_this, start_pos, end_pos);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_text () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return gtk_editable_get_text (_peel_this);
  }

  int
  get_width_chars () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return gtk_editable_get_width_chars (_peel_this);
  }

  void
  init_delegate () noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_init_delegate (_peel_this);
  }

  peel_arg_inout (4) peel_nonnull_args (2, 4)
  void
  insert_text (const char *text, int length, int *position) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_insert_text (_peel_this, text, length, position);
  }

  void
  select_region (int start_pos, int end_pos) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_select_region (_peel_this, start_pos, end_pos);
  }

  void
  set_alignment (float xalign) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_set_alignment (_peel_this, xalign);
  }

  void
  set_editable (bool is_editable) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_is_editable = static_cast<gboolean> (is_editable);
    gtk_editable_set_editable (_peel_this, _peel_is_editable);
  }

  void
  set_enable_undo (bool enable_undo) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_enable_undo = static_cast<gboolean> (enable_undo);
    gtk_editable_set_enable_undo (_peel_this, _peel_enable_undo);
  }

  void
  set_max_width_chars (int n_chars) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_set_max_width_chars (_peel_this, n_chars);
  }

  void
  set_position (int position) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_set_position (_peel_this, position);
  }

  peel_nonnull_args (2)
  void
  set_text (const char *text) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_set_text (_peel_this, text);
  }

  void
  set_width_chars (int n_chars) noexcept
  {
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gtk_editable_set_width_chars (_peel_this, n_chars);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Editable, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Editable *), bool after = false) noexcept
  {
    return Signal<Editable, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_delete_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Editable, void (int, int)>::_peel_connect_by_name (this, "delete-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_delete_text (HandlerObject *object, void (HandlerObject::*handler_method) (Editable *, int, int), bool after = false) noexcept
  {
    return Signal<Editable, void (int, int)>::_peel_connect_by_name (this, "delete-text", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_insert_text (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Editable, void (const char *, int, int)>::_peel_connect_by_name (this, "insert-text", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_insert_text (HandlerObject *object, void (HandlerObject::*handler_method) (Editable *, const char *, int, int), bool after = false) noexcept
  {
    return Signal<Editable, void (const char *, int, int)>::_peel_connect_by_name (this, "insert-text", object, handler_method, after);
  }

  static peel::Property<int>
  prop_cursor_position ()
  {
    return peel::Property<int> { "cursor-position" };
  }

  static peel::Property<bool>
  prop_editable ()
  {
    return peel::Property<bool> { "editable" };
  }

  static peel::Property<bool>
  prop_enable_undo ()
  {
    return peel::Property<bool> { "enable-undo" };
  }

  static peel::Property<int>
  prop_max_width_chars ()
  {
    return peel::Property<int> { "max-width-chars" };
  }

  static peel::Property<int>
  prop_selection_bound ()
  {
    return peel::Property<int> { "selection-bound" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

  static peel::Property<int>
  prop_width_chars ()
  {
    return peel::Property<int> { "width-chars" };
  }

  static peel::Property<float>
  prop_xalign ()
  {
    return peel::Property<float> { "xalign" };
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->changed (_peel_this);
  }

  void
  default_vfunc_changed () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->changed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_delete_text (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->delete_text (_peel_this, start_pos, end_pos);
  }

  void
  default_vfunc_delete_text (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->delete_text (_peel_this, start_pos, end_pos);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_do_delete_text (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->do_delete_text (_peel_this, start_pos, end_pos);
  }

  void
  default_vfunc_do_delete_text (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->do_delete_text (_peel_this, start_pos, end_pos);
  }

  template<typename DerivedClass>
  peel_arg_inout (4) peel_nonnull_args (2, 4)
  void
  parent_vfunc_do_insert_text (const char *text, int length, int *position) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->do_insert_text (_peel_this, text, length, position);
  }

  peel_arg_inout (4) peel_nonnull_args (2, 4)
  void
  default_vfunc_do_insert_text (const char *text, int length, int *position) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->do_insert_text (_peel_this, text, length, position);
  }

  template<typename DerivedClass>
  Editable *
  parent_vfunc_get_delegate () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    ::GtkEditable *_peel_return = _peel_iface->get_delegate (_peel_this);
    return reinterpret_cast<Editable *> (_peel_return);
  }

  Editable *
  default_vfunc_get_delegate () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    ::GtkEditable *_peel_return = _peel_iface->get_delegate (_peel_this);
    return reinterpret_cast<Editable *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3)
  bool
  parent_vfunc_get_selection_bounds (int *start_pos, int *end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_return = _peel_iface->get_selection_bounds (_peel_this, start_pos, end_pos);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  default_vfunc_get_selection_bounds (int *start_pos, int *end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    gboolean _peel_return = _peel_iface->get_selection_bounds (_peel_this, start_pos, end_pos);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_text () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return _peel_iface->get_text (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_text () noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    return _peel_iface->get_text (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_inout (4) peel_nonnull_args (2, 4)
  void
  parent_vfunc_insert_text (const char *text, int length, int *position) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->insert_text (_peel_this, text, length, position);
  }

  peel_arg_inout (4) peel_nonnull_args (2, 4)
  void
  default_vfunc_insert_text (const char *text, int length, int *position) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->insert_text (_peel_this, text, length, position);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_selection_bounds (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Editable> ())->peek_parent ());
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->set_selection_bounds (_peel_this, start_pos, end_pos);
  }

  void
  default_vfunc_set_selection_bounds (int start_pos, int end_pos) noexcept
  {
    ::GtkEditableInterface *_peel_iface = reinterpret_cast<::GtkEditableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Editable> ()));
    ::GtkEditable *_peel_this = reinterpret_cast<::GtkEditable *> (this);
    _peel_iface->set_selection_bounds (_peel_this, start_pos, end_pos);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkEditableInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->changed = +[] (::GtkEditable *editable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_delete_text ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->delete_text = +[] (::GtkEditable *editable, int start_pos, int end_pos) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_delete_text (start_pos, end_pos);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_do_delete_text ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->do_delete_text = +[] (::GtkEditable *editable, int start_pos, int end_pos) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_do_delete_text (start_pos, end_pos);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_do_insert_text ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->do_insert_text = +[] (::GtkEditable *editable, const char *text, int length, int *position) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_do_insert_text (text, length, position);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_delegate ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->get_delegate = +[] (::GtkEditable *editable) -> ::GtkEditable *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        Editable *_peel_return = _peel_this->DerivedClass::vfunc_get_delegate ();
        return reinterpret_cast<::GtkEditable *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_selection_bounds ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->get_selection_bounds = +[] (::GtkEditable *editable, int *start_pos, int *end_pos) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_selection_bounds (start_pos, end_pos);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_text ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->get_text = +[] (::GtkEditable *editable) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        return _peel_this->DerivedClass::vfunc_get_text ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_insert_text ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->insert_text = +[] (::GtkEditable *editable, const char *text, int length, int *position) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_insert_text (text, length, position);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_selection_bounds ()
    {
      ::GtkEditableInterface *klass = reinterpret_cast<::GtkEditableInterface *> (this);
      klass->set_selection_bounds = +[] (::GtkEditable *editable, int start_pos, int end_pos) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (editable);
        _peel_this->DerivedClass::vfunc_set_selection_bounds (start_pos, end_pos);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkEditableInterface),
                 "Editable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkEditableInterface),
                 "Editable::Iface align mismatch");
}; /* interface Editable */
static_assert (sizeof (Editable) == sizeof (Widget),
               "Editable size mismatch");
static_assert (alignof (Editable) == alignof (Widget),
               "Editable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
