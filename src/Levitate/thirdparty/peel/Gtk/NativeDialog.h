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
class NativeDialog;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::NativeDialog> ()
{
  return gtk_native_dialog_get_type ();
}


namespace Gtk
{
class NativeDialog : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NativeDialog () = delete;
  NativeDialog (const NativeDialog &) = delete;
  NativeDialog (NativeDialog &&) = delete;
  NativeDialog &
  operator = (const NativeDialog &) = delete;
  NativeDialog &
  operator = (NativeDialog &&) = delete;
protected:
  ~NativeDialog () = default;
public:

  void
  destroy () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gtk_native_dialog_destroy (_peel_this);
  }

  bool
  get_modal () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gboolean _peel_return = gtk_native_dialog_get_modal (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_title () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    return gtk_native_dialog_get_title (_peel_this);
  }

  Window *
  get_transient_for () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    ::GtkWindow *_peel_return = gtk_native_dialog_get_transient_for (_peel_this);
    return reinterpret_cast<Window *> (_peel_return);
  }

  bool
  get_visible () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gboolean _peel_return = gtk_native_dialog_get_visible (_peel_this);
    return !!_peel_return;
  }

  void
  hide () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gtk_native_dialog_hide (_peel_this);
  }

  void
  set_modal (bool modal) noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gboolean _peel_modal = static_cast<gboolean> (modal);
    gtk_native_dialog_set_modal (_peel_this, _peel_modal);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gtk_native_dialog_set_title (_peel_this, title);
  }

  void
  set_transient_for (Window *parent) noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    gtk_native_dialog_set_transient_for (_peel_this, _peel_parent);
  }

  void
  show () noexcept
  {
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    gtk_native_dialog_show (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_response (Handler &&handler, bool after = false) noexcept
  {
    return Signal<NativeDialog, void (int)>::_peel_connect_by_name (this, "response", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_response (HandlerObject *object, void (HandlerObject::*handler_method) (NativeDialog *, int), bool after = false) noexcept
  {
    return Signal<NativeDialog, void (int)>::_peel_connect_by_name (this, "response", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_modal ()
  {
    return peel::Property<bool> { "modal" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<Window>
  prop_transient_for ()
  {
    return peel::Property<Window> { "transient-for" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<NativeDialog> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_hide () noexcept
  {
    ::GtkNativeDialogClass *_peel_class = reinterpret_cast<::GtkNativeDialogClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    _peel_class->hide (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_response (int response_id) noexcept
  {
    ::GtkNativeDialogClass *_peel_class = reinterpret_cast<::GtkNativeDialogClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    _peel_class->response (_peel_this, response_id);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_show () noexcept
  {
    ::GtkNativeDialogClass *_peel_class = reinterpret_cast<::GtkNativeDialogClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkNativeDialog *_peel_this = reinterpret_cast<::GtkNativeDialog *> (this);
    _peel_class->show (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkNativeDialogClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_hide ()
    {
      ::GtkNativeDialogClass *klass = reinterpret_cast<::GtkNativeDialogClass *> (this);
      klass->hide = +[] (::GtkNativeDialog *self) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_hide ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_response ()
    {
      ::GtkNativeDialogClass *klass = reinterpret_cast<::GtkNativeDialogClass *> (this);
      klass->response = +[] (::GtkNativeDialog *self, int response_id) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_response (response_id);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_show ()
    {
      ::GtkNativeDialogClass *klass = reinterpret_cast<::GtkNativeDialogClass *> (this);
      klass->show = +[] (::GtkNativeDialog *self) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_show ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkNativeDialogClass),
                 "NativeDialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkNativeDialogClass),
                 "NativeDialog::Class align mismatch");
}; /* class NativeDialog */

static_assert (sizeof (NativeDialog) == sizeof (::GtkNativeDialog),
               "NativeDialog size mismatch");
static_assert (alignof (NativeDialog) == alignof (::GtkNativeDialog),
               "NativeDialog align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
