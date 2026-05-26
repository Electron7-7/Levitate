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
namespace Gdk
{
class Device;
class Event;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
struct Rectangle;
class Surface;
} /* namespace Gdk */

namespace Gtk
{
class IMContext;
enum class InputHints : std::underlying_type<::GtkInputHints>::type;
enum class InputPurpose : std::underlying_type<::GtkInputPurpose>::type;
class Widget;
} /* namespace Gtk */

namespace Pango
{
class /* record */ AttrList;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IMContext> ()
{
  return gtk_im_context_get_type ();
}


namespace Gtk
{
class IMContext : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IMContext () = delete;
  IMContext (const IMContext &) = delete;
  IMContext (IMContext &&) = delete;
  IMContext &
  operator = (const IMContext &) = delete;
  IMContext &
  operator = (IMContext &&) = delete;
protected:
  ~IMContext () = default;
public:

  bool
  activate_osk (Gdk::Event *event) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = gtk_im_context_activate_osk (_peel_this, _peel_event);
    return !!_peel_return;
  }

  bool
  delete_surrounding (int offset, int n_chars) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_return = gtk_im_context_delete_surrounding (_peel_this, offset, n_chars);
    return !!_peel_return;
  }

  peel_nonnull_args (3, 4)
  bool
  filter_key (bool press, Gdk::Surface *surface, Gdk::Device *device, uint32_t time, unsigned keycode, Gdk::ModifierType state, int group) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_press = static_cast<gboolean> (press);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    ::GdkDevice *_peel_device = reinterpret_cast<::GdkDevice *> (device);
    ::GdkModifierType _peel_state = static_cast<::GdkModifierType> (state);
    gboolean _peel_return = gtk_im_context_filter_key (_peel_this, _peel_press, _peel_surface, _peel_device, time, keycode, _peel_state, group);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  filter_keypress (Gdk::Event *event) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = gtk_im_context_filter_keypress (_peel_this, _peel_event);
    return !!_peel_return;
  }

  void
  focus_in () noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gtk_im_context_focus_in (_peel_this);
  }

  void
  focus_out () noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gtk_im_context_focus_out (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  get_preedit_string (peel::String *str, peel::RefPtr<Pango::AttrList> *attrs, int *cursor_pos) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_str;
    ::PangoAttrList *_peel_attrs;
    gtk_im_context_get_preedit_string (_peel_this, &_peel_str, &_peel_attrs, cursor_pos);
    *str = peel::String::adopt_string (_peel_str);
    *attrs = peel::RefPtr<Pango::AttrList>::adopt_ref (reinterpret_cast<Pango::AttrList *> (_peel_attrs));
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_surrounding (peel::String *text, int *cursor_index) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_text;
    gboolean _peel_return = gtk_im_context_get_surrounding (_peel_this, &_peel_text, cursor_index);
    *text = peel::String::adopt_string (_peel_text);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  get_surrounding_with_selection (peel::String *text, int *cursor_index, int *anchor_index) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_text;
    gboolean _peel_return = gtk_im_context_get_surrounding_with_selection (_peel_this, &_peel_text, cursor_index, anchor_index);
    *text = peel::String::adopt_string (_peel_text);
    return !!_peel_return;
  }

  void
  reset () noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gtk_im_context_reset (_peel_this);
  }

  void
  set_client_widget (Widget *widget) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_im_context_set_client_widget (_peel_this, _peel_widget);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_cursor_location (const Gdk::Rectangle *area) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    const ::GdkRectangle *_peel_area = reinterpret_cast<const ::GdkRectangle *> (area);
    gtk_im_context_set_cursor_location (_peel_this, _peel_area);
  }

  peel_nonnull_args (2)
  void
  set_surrounding (const char *text, int len, int cursor_index) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gtk_im_context_set_surrounding (_peel_this, text, len, cursor_index);
  }

  peel_nonnull_args (2)
  void
  set_surrounding_with_selection (const char *text, int len, int cursor_index, int anchor_index) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gtk_im_context_set_surrounding_with_selection (_peel_this, text, len, cursor_index, anchor_index);
  }

  void
  set_use_preedit (bool use_preedit) noexcept
  {
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_use_preedit = static_cast<gboolean> (use_preedit);
    gtk_im_context_set_use_preedit (_peel_this, _peel_use_preedit);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_commit (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, void (const char *)>::_peel_connect_by_name (this, "commit", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_commit (HandlerObject *object, void (HandlerObject::*handler_method) (IMContext *, const char *), bool after = false) noexcept
  {
    return Signal<IMContext, void (const char *)>::_peel_connect_by_name (this, "commit", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_delete_surrounding (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, bool (int, int)>::_peel_connect_by_name (this, "delete-surrounding", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_delete_surrounding (HandlerObject *object, bool (HandlerObject::*handler_method) (IMContext *, int, int), bool after = false) noexcept
  {
    return Signal<IMContext, bool (int, int)>::_peel_connect_by_name (this, "delete-surrounding", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_invalid_composition (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, bool (const char *)>::_peel_connect_by_name (this, "invalid-composition", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_invalid_composition (HandlerObject *object, bool (HandlerObject::*handler_method) (IMContext *, const char *), bool after = false) noexcept
  {
    return Signal<IMContext, bool (const char *)>::_peel_connect_by_name (this, "invalid-composition", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preedit_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preedit_changed (HandlerObject *object, void (HandlerObject::*handler_method) (IMContext *), bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preedit_end (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-end", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preedit_end (HandlerObject *object, void (HandlerObject::*handler_method) (IMContext *), bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-end", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_preedit_start (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-start", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_preedit_start (HandlerObject *object, void (HandlerObject::*handler_method) (IMContext *), bool after = false) noexcept
  {
    return Signal<IMContext, void ()>::_peel_connect_by_name (this, "preedit-start", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_retrieve_surrounding (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IMContext, bool ()>::_peel_connect_by_name (this, "retrieve-surrounding", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_retrieve_surrounding (HandlerObject *object, bool (HandlerObject::*handler_method) (IMContext *), bool after = false) noexcept
  {
    return Signal<IMContext, bool ()>::_peel_connect_by_name (this, "retrieve-surrounding", object, handler_method, after);
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

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<IMContext> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate_osk () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->activate_osk (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_activate_osk_with_event (Gdk::Event *event) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = _peel_class->activate_osk_with_event (_peel_this, _peel_event);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_commit (const char *str) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->commit (_peel_this, str);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_delete_surrounding (int offset, int n_chars) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_return = _peel_class->delete_surrounding (_peel_this, offset, n_chars);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_filter_keypress (Gdk::Event *event) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_return = _peel_class->filter_keypress (_peel_this, _peel_event);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_focus_in () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->focus_in (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_focus_out () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->focus_out (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  parent_vfunc_get_preedit_string (peel::String *str, peel::RefPtr<Pango::AttrList> *attrs, int *cursor_pos) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_str;
    ::PangoAttrList *_peel_attrs;
    _peel_class->get_preedit_string (_peel_this, &_peel_str, &_peel_attrs, cursor_pos);
    *str = peel::String::adopt_string (_peel_str);
    *attrs = peel::RefPtr<Pango::AttrList>::adopt_ref (reinterpret_cast<Pango::AttrList *> (_peel_attrs));
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_get_surrounding (peel::String *text, int *cursor_index) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_text;
    gboolean _peel_return = _peel_class->get_surrounding (_peel_this, &_peel_text, cursor_index);
    *text = peel::String::adopt_string (_peel_text);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  parent_vfunc_get_surrounding_with_selection (peel::String *text, int *cursor_index, int *anchor_index) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    char *_peel_text;
    gboolean _peel_return = _peel_class->get_surrounding_with_selection (_peel_this, &_peel_text, cursor_index, anchor_index);
    *text = peel::String::adopt_string (_peel_text);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_invalid_composition (const char *str) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_return = _peel_class->invalid_composition (_peel_this, str);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_preedit_changed () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->preedit_changed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_preedit_end () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->preedit_end (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_preedit_start () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->preedit_start (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_reset () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->reset (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_retrieve_surrounding () noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_return = _peel_class->retrieve_surrounding (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_client_widget (Widget *widget) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->set_client_widget (_peel_this, _peel_widget);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_set_cursor_location (Gdk::Rectangle *area) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    ::GdkRectangle *_peel_area = reinterpret_cast<::GdkRectangle *> (area);
    _peel_class->set_cursor_location (_peel_this, _peel_area);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_surrounding (const char *text, int len, int cursor_index) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->set_surrounding (_peel_this, text, len, cursor_index);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_set_surrounding_with_selection (const char *text, int len, int cursor_index, int anchor_index) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    _peel_class->set_surrounding_with_selection (_peel_this, text, len, cursor_index, anchor_index);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_use_preedit (bool use_preedit) noexcept
  {
    ::GtkIMContextClass *_peel_class = reinterpret_cast<::GtkIMContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkIMContext *_peel_this = reinterpret_cast<::GtkIMContext *> (this);
    gboolean _peel_use_preedit = static_cast<gboolean> (use_preedit);
    _peel_class->set_use_preedit (_peel_this, _peel_use_preedit);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkIMContextClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate_osk ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->activate_osk = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_activate_osk ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_activate_osk_with_event ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->activate_osk_with_event = +[] (::GtkIMContext *context, ::GdkEvent *event) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        bool _peel_return = _peel_this->DerivedClass::vfunc_activate_osk_with_event (_peel_event);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_commit ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->commit = +[] (::GtkIMContext *context, const char *str) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_commit (str);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_delete_surrounding ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->delete_surrounding = +[] (::GtkIMContext *context, int offset, int n_chars) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        bool _peel_return = _peel_this->DerivedClass::vfunc_delete_surrounding (offset, n_chars);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_filter_keypress ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->filter_keypress = +[] (::GtkIMContext *context, ::GdkEvent *event) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        bool _peel_return = _peel_this->DerivedClass::vfunc_filter_keypress (_peel_event);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_focus_in ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->focus_in = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_focus_in ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_focus_out ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->focus_out = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_focus_out ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preedit_string ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->get_preedit_string = +[] (::GtkIMContext *context, char **str, ::PangoAttrList **attrs, int *cursor_pos) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        peel::String _peel_str;
        peel::RefPtr<Pango::AttrList> _peel_attrs;
        _peel_this->DerivedClass::vfunc_get_preedit_string (&_peel_str, &_peel_attrs, cursor_pos);
        *str = std::move (_peel_str).release_string ();
        *attrs = reinterpret_cast<::PangoAttrList *> (std::move (_peel_attrs).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_surrounding ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->get_surrounding = +[] (::GtkIMContext *context, char **text, int *cursor_index) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        peel::String _peel_text;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_surrounding (&_peel_text, cursor_index);
        *text = std::move (_peel_text).release_string ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_surrounding_with_selection ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->get_surrounding_with_selection = +[] (::GtkIMContext *context, char **text, int *cursor_index, int *anchor_index) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        peel::String _peel_text;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_surrounding_with_selection (&_peel_text, cursor_index, anchor_index);
        *text = std::move (_peel_text).release_string ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_invalid_composition ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->invalid_composition = +[] (::GtkIMContext *context, const char *str) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        bool _peel_return = _peel_this->DerivedClass::vfunc_invalid_composition (str);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_preedit_changed ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->preedit_changed = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_preedit_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_preedit_end ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->preedit_end = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_preedit_end ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_preedit_start ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->preedit_start = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_preedit_start ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reset ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->reset = +[] (::GtkIMContext *context) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_reset ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_retrieve_surrounding ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->retrieve_surrounding = +[] (::GtkIMContext *context) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        bool _peel_return = _peel_this->DerivedClass::vfunc_retrieve_surrounding ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_client_widget ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->set_client_widget = +[] (::GtkIMContext *context, ::GtkWidget *widget) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_set_client_widget (_peel_widget);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_cursor_location ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->set_cursor_location = +[] (::GtkIMContext *context, ::GdkRectangle *area) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        Gdk::Rectangle *_peel_area = reinterpret_cast<Gdk::Rectangle *> (area);
        _peel_this->DerivedClass::vfunc_set_cursor_location (_peel_area);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_surrounding ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->set_surrounding = +[] (::GtkIMContext *context, const char *text, int len, int cursor_index) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_set_surrounding (text, len, cursor_index);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_surrounding_with_selection ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->set_surrounding_with_selection = +[] (::GtkIMContext *context, const char *text, int len, int cursor_index, int anchor_index) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        _peel_this->DerivedClass::vfunc_set_surrounding_with_selection (text, len, cursor_index, anchor_index);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_use_preedit ()
    {
      ::GtkIMContextClass *klass = reinterpret_cast<::GtkIMContextClass *> (this);
      klass->set_use_preedit = +[] (::GtkIMContext *context, gboolean use_preedit) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (context);
        bool _peel_use_preedit = !!use_preedit;
        _peel_this->DerivedClass::vfunc_set_use_preedit (_peel_use_preedit);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkIMContextClass),
                 "IMContext::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkIMContextClass),
                 "IMContext::Class align mismatch");
}; /* class IMContext */

static_assert (sizeof (IMContext) == sizeof (::GtkIMContext),
               "IMContext size mismatch");
static_assert (alignof (IMContext) == alignof (::GtkIMContext),
               "IMContext align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Pango/AttrList.h>
