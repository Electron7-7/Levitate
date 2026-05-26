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
#include <peel/Gtk/Button.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ToggleButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ToggleButton> ()
{
  return gtk_toggle_button_get_type ();
}


namespace Gtk
{
class ToggleButton : public Button
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Button::create_from_icon_name;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ToggleButton () = delete;
  ToggleButton (const ToggleButton &) = delete;
  ToggleButton (ToggleButton &&) = delete;
  ToggleButton &
  operator = (const ToggleButton &) = delete;
  ToggleButton &
  operator = (ToggleButton &&) = delete;
protected:
  ~ToggleButton () = default;
public:

  static peel::FloatPtr<ToggleButton>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_toggle_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ToggleButton> (reinterpret_cast<ToggleButton *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<ToggleButton>
  create_with_label (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_toggle_button_new_with_label (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<ToggleButton> (reinterpret_cast<ToggleButton *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<ToggleButton>
  create_with_mnemonic (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_toggle_button_new_with_mnemonic (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<ToggleButton> (reinterpret_cast<ToggleButton *> (_peel_return));
  }

  bool
  get_active () noexcept
  {
    ::GtkToggleButton *_peel_this = reinterpret_cast<::GtkToggleButton *> (this);
    gboolean _peel_return = gtk_toggle_button_get_active (_peel_this);
    return !!_peel_return;
  }

  void
  set_active (bool is_active) noexcept
  {
    ::GtkToggleButton *_peel_this = reinterpret_cast<::GtkToggleButton *> (this);
    gboolean _peel_is_active = static_cast<gboolean> (is_active);
    gtk_toggle_button_set_active (_peel_this, _peel_is_active);
  }

  void
  set_group (ToggleButton *group) noexcept
  {
    ::GtkToggleButton *_peel_this = reinterpret_cast<::GtkToggleButton *> (this);
    ::GtkToggleButton *_peel_group = reinterpret_cast<::GtkToggleButton *> (group);
    gtk_toggle_button_set_group (_peel_this, _peel_group);
  }

  void
  toggled () noexcept
  {
    ::GtkToggleButton *_peel_this = reinterpret_cast<::GtkToggleButton *> (this);
    gtk_toggle_button_toggled (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_toggled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ToggleButton, void ()>::_peel_connect_by_name (this, "toggled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_toggled (HandlerObject *object, void (HandlerObject::*handler_method) (ToggleButton *), bool after = false) noexcept
  {
    return Signal<ToggleButton, void ()>::_peel_connect_by_name (this, "toggled", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<ToggleButton>
  prop_group ()
  {
    return peel::Property<ToggleButton> { "group" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ToggleButton> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_toggled () noexcept
  {
    ::GtkToggleButtonClass *_peel_class = reinterpret_cast<::GtkToggleButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkToggleButton *_peel_this = reinterpret_cast<::GtkToggleButton *> (this);
    _peel_class->toggled (_peel_this);
  }

public:
  class Class : public Button::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkToggleButtonClass) - sizeof (Button::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_toggled ()
    {
      ::GtkToggleButtonClass *klass = reinterpret_cast<::GtkToggleButtonClass *> (this);
      klass->toggled = +[] (::GtkToggleButton *toggle_button) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (toggle_button);
        _peel_this->DerivedClass::vfunc_toggled ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkToggleButtonClass),
                 "ToggleButton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkToggleButtonClass),
                 "ToggleButton::Class align mismatch");
}; /* class ToggleButton */

static_assert (sizeof (ToggleButton) == sizeof (::GtkToggleButton),
               "ToggleButton size mismatch");
static_assert (alignof (ToggleButton) == alignof (::GtkToggleButton),
               "ToggleButton align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
