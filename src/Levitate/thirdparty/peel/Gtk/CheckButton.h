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
#include <peel/Gtk/Actionable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CheckButton;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CheckButton> ()
{
  return gtk_check_button_get_type ();
}


namespace Gtk
{
class CheckButton : public Actionable
/* extends Widget */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Actionable::get_default_direction;
  using Actionable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CheckButton () = delete;
  CheckButton (const CheckButton &) = delete;
  CheckButton (CheckButton &&) = delete;
  CheckButton &
  operator = (const CheckButton &) = delete;
  CheckButton &
  operator = (CheckButton &&) = delete;
protected:
  ~CheckButton () = default;
public:

  static peel::FloatPtr<CheckButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_check_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CheckButton> (reinterpret_cast<CheckButton *> (_peel_return));
  }

  static peel::FloatPtr<CheckButton>
  create_with_label (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_check_button_new_with_label (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<CheckButton> (reinterpret_cast<CheckButton *> (_peel_return));
  }

  static peel::FloatPtr<CheckButton>
  create_with_mnemonic (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_check_button_new_with_mnemonic (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<CheckButton> (reinterpret_cast<CheckButton *> (_peel_return));
  }

  bool
  get_active () noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_return = gtk_check_button_get_active (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    ::GtkWidget *_peel_return = gtk_check_button_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_inconsistent () noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_return = gtk_check_button_get_inconsistent (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_label () noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    return gtk_check_button_get_label (_peel_this);
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_return = gtk_check_button_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  void
  set_active (bool setting) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_check_button_set_active (_peel_this, _peel_setting);
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_check_button_set_child (_peel_this, _peel_child);
  }

  void
  set_group (CheckButton *group) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    ::GtkCheckButton *_peel_group = reinterpret_cast<::GtkCheckButton *> (group);
    gtk_check_button_set_group (_peel_this, _peel_group);
  }

  void
  set_inconsistent (bool inconsistent) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_inconsistent = static_cast<gboolean> (inconsistent);
    gtk_check_button_set_inconsistent (_peel_this, _peel_inconsistent);
  }

  void
  set_label (const char *label) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gtk_check_button_set_label (_peel_this, label);
  }

  void
  set_use_underline (bool setting) noexcept
  {
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_check_button_set_use_underline (_peel_this, _peel_setting);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CheckButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (CheckButton *), bool after = false) noexcept
  {
    return Signal<CheckButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<CheckButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CheckButton, void ()>::_peel_connect_by_name (this, "toggled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggled (HandlerObject *object, void (HandlerObject::*handler_method) (CheckButton *), bool after = false) noexcept
  {
    return Signal<CheckButton, void ()>::_peel_connect_by_name (this, "toggled", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<CheckButton>
  prop_group ()
  {
    return peel::Property<CheckButton> { "group" };
  }

  static peel::Property<bool>
  prop_inconsistent ()
  {
    return peel::Property<bool> { "inconsistent" };
  }

  static peel::Property<const char *>
  prop_label ()
  {
    return peel::Property<const char *> { "label" };
  }

  static peel::Property<bool>
  prop_use_underline ()
  {
    return peel::Property<bool> { "use-underline" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CheckButton> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkCheckButtonClass *_peel_class = reinterpret_cast<::GtkCheckButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    _peel_class->activate (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_toggled () noexcept
  {
    ::GtkCheckButtonClass *_peel_class = reinterpret_cast<::GtkCheckButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCheckButton *_peel_this = reinterpret_cast<::GtkCheckButton *> (this);
    _peel_class->toggled (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCheckButtonClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkCheckButtonClass *klass = reinterpret_cast<::GtkCheckButtonClass *> (this);
      klass->activate = +[] (::GtkCheckButton *check_button) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (check_button);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_toggled ()
    {
      ::GtkCheckButtonClass *klass = reinterpret_cast<::GtkCheckButtonClass *> (this);
      klass->toggled = +[] (::GtkCheckButton *check_button) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (check_button);
        _peel_this->DerivedClass::vfunc_toggled ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkCheckButtonClass),
                 "CheckButton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCheckButtonClass),
                 "CheckButton::Class align mismatch");
}; /* class CheckButton */

static_assert (sizeof (CheckButton) == sizeof (::GtkCheckButton),
               "CheckButton size mismatch");
static_assert (alignof (CheckButton) == alignof (::GtkCheckButton),
               "CheckButton align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
