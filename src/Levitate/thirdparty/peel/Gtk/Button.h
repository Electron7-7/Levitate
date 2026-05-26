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
class Button;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Button> ()
{
  return gtk_button_get_type ();
}


namespace Gtk
{
class Button : public Actionable
/* extends Widget */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Actionable::get_default_direction;
  using Actionable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Button () = delete;
  Button (const Button &) = delete;
  Button (Button &&) = delete;
  Button &
  operator = (const Button &) = delete;
  Button &
  operator = (Button &&) = delete;
protected:
  ~Button () = default;
public:

  static peel::FloatPtr<Button>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_button_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Button> (reinterpret_cast<Button *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Button>
  create_from_icon_name (const char *icon_name) noexcept
  {
    ::GtkWidget *_peel_return = gtk_button_new_from_icon_name (icon_name);
    peel_assume (_peel_return);
    return peel::FloatPtr<Button> (reinterpret_cast<Button *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Button>
  create_with_label (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_button_new_with_label (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<Button> (reinterpret_cast<Button *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Button>
  create_with_mnemonic (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_button_new_with_mnemonic (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<Button> (reinterpret_cast<Button *> (_peel_return));
  }

  bool
  get_can_shrink () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_return = gtk_button_get_can_shrink (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    ::GtkWidget *_peel_return = gtk_button_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_has_frame () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_return = gtk_button_get_has_frame (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    return gtk_button_get_icon_name (_peel_this);
  }

  const char *
  get_label () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    return gtk_button_get_label (_peel_this);
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_return = gtk_button_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  void
  set_can_shrink (bool can_shrink) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_can_shrink = static_cast<gboolean> (can_shrink);
    gtk_button_set_can_shrink (_peel_this, _peel_can_shrink);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_button_set_child (_peel_this, _peel_child);
  }

  void
  set_has_frame (bool has_frame) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_has_frame = static_cast<gboolean> (has_frame);
    gtk_button_set_has_frame (_peel_this, _peel_has_frame);
  }

  peel_nonnull_args (2)
  void
  set_icon_name (const char *icon_name) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gtk_button_set_icon_name (_peel_this, icon_name);
  }

  peel_nonnull_args (2)
  void
  set_label (const char *label) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gtk_button_set_label (_peel_this, label);
  }

  void
  set_use_underline (bool use_underline) noexcept
  {
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    gboolean _peel_use_underline = static_cast<gboolean> (use_underline);
    gtk_button_set_use_underline (_peel_this, _peel_use_underline);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Button, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Button *), bool after = false) noexcept
  {
    return Signal<Button, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<Button, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_clicked (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Button, void ()>::_peel_connect_by_name (this, "clicked", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_clicked (HandlerObject *object, void (HandlerObject::*handler_method) (Button *), bool after = false) noexcept
  {
    return Signal<Button, void ()>::_peel_connect_by_name (this, "clicked", object, handler_method, after);
  }

  void
  emit_clicked () noexcept
  {
    return Signal<Button, void ()>::_peel_emit_by_name (this, "clicked");
  }

  static peel::Property<bool>
  prop_can_shrink ()
  {
    return peel::Property<bool> { "can-shrink" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Button> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkButtonClass *_peel_class = reinterpret_cast<::GtkButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    _peel_class->activate (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_clicked () noexcept
  {
    ::GtkButtonClass *_peel_class = reinterpret_cast<::GtkButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkButton *_peel_this = reinterpret_cast<::GtkButton *> (this);
    _peel_class->clicked (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkButtonClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkButtonClass *klass = reinterpret_cast<::GtkButtonClass *> (this);
      klass->activate = +[] (::GtkButton *button) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (button);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_clicked ()
    {
      ::GtkButtonClass *klass = reinterpret_cast<::GtkButtonClass *> (this);
      klass->clicked = +[] (::GtkButton *button) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (button);
        _peel_this->DerivedClass::vfunc_clicked ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkButtonClass),
                 "Button::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkButtonClass),
                 "Button::Class align mismatch");
}; /* class Button */

static_assert (sizeof (Button) == sizeof (::GtkButton),
               "Button size mismatch");
static_assert (alignof (Button) == alignof (::GtkButton),
               "Button align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
