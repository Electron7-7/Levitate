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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
class /* interface */ Actionable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Actionable> ()
{
  return gtk_actionable_get_type ();
}


namespace Gtk
{
class /* interface */ Actionable : public Widget
/* requires Widget */
{
private:
  Actionable () = delete;
  Actionable (const Actionable &) = delete;
  Actionable (Actionable &&) = delete;

  Actionable &
  operator = (const Actionable &) = delete;
  Actionable &
  operator = (Actionable &&) = delete;

protected:
  ~Actionable () = default;

public:

  const char *
  get_action_name () noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    return gtk_actionable_get_action_name (_peel_this);
  }

  GLib::Variant *
  get_action_target_value () noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_return = gtk_actionable_get_action_target_value (_peel_this);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  void
  set_action_name (const char *action_name) noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    gtk_actionable_set_action_name (_peel_this, action_name);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  set_action_target (const char *format_string, Args &&...args) noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    gtk_actionable_set_action_target (_peel_this, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  void
  set_action_target_value (peel::FloatPtr<GLib::Variant> target_value) noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_target_value = reinterpret_cast<::GVariant *> (std::move (target_value).release_floating_ptr ());
    gtk_actionable_set_action_target_value (_peel_this, _peel_target_value);
  }

  peel_nonnull_args (2)
  void
  set_detailed_action_name (const char *detailed_action_name) noexcept
  {
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    gtk_actionable_set_detailed_action_name (_peel_this, detailed_action_name);
  }

  static peel::Property<const char *>
  prop_action_name ()
  {
    return peel::Property<const char *> { "action-name" };
  }

  static peel::Property<GLib::Variant>
  prop_action_target ()
  {
    return peel::Property<GLib::Variant> { "action-target" };
  }

  template<typename DerivedClass>
  const char *
  parent_vfunc_get_action_name () noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Actionable> ())->peek_parent ());
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    return _peel_iface->get_action_name (_peel_this);
  }

  const char *
  default_vfunc_get_action_name () noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Actionable> ()));
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    return _peel_iface->get_action_name (_peel_this);
  }

  template<typename DerivedClass>
  GLib::Variant *
  parent_vfunc_get_action_target_value () noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Actionable> ())->peek_parent ());
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_target_value (_peel_this);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  GLib::Variant *
  default_vfunc_get_action_target_value () noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Actionable> ()));
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_return = _peel_iface->get_action_target_value (_peel_this);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_action_name (const char *action_name) noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Actionable> ())->peek_parent ());
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    _peel_iface->set_action_name (_peel_this, action_name);
  }

  void
  default_vfunc_set_action_name (const char *action_name) noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Actionable> ()));
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    _peel_iface->set_action_name (_peel_this, action_name);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_action_target_value (peel::FloatPtr<GLib::Variant> target_value) noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Actionable> ())->peek_parent ());
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_target_value = reinterpret_cast<::GVariant *> (std::move (target_value).release_floating_ptr ());
    _peel_iface->set_action_target_value (_peel_this, _peel_target_value);
  }

  void
  default_vfunc_set_action_target_value (peel::FloatPtr<GLib::Variant> target_value) noexcept
  {
    ::GtkActionableInterface *_peel_iface = reinterpret_cast<::GtkActionableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Actionable> ()));
    ::GtkActionable *_peel_this = reinterpret_cast<::GtkActionable *> (this);
    ::GVariant *_peel_target_value = reinterpret_cast<::GVariant *> (std::move (target_value).release_floating_ptr ());
    _peel_iface->set_action_target_value (_peel_this, _peel_target_value);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkActionableInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_action_name ()
    {
      ::GtkActionableInterface *klass = reinterpret_cast<::GtkActionableInterface *> (this);
      klass->get_action_name = +[] (::GtkActionable *actionable) -> const char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (actionable);
        return _peel_this->DerivedClass::vfunc_get_action_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_action_target_value ()
    {
      ::GtkActionableInterface *klass = reinterpret_cast<::GtkActionableInterface *> (this);
      klass->get_action_target_value = +[] (::GtkActionable *actionable) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (actionable);
        GLib::Variant *_peel_return = _peel_this->DerivedClass::vfunc_get_action_target_value ();
        return reinterpret_cast<::GVariant *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_action_name ()
    {
      ::GtkActionableInterface *klass = reinterpret_cast<::GtkActionableInterface *> (this);
      klass->set_action_name = +[] (::GtkActionable *actionable, const char *action_name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (actionable);
        _peel_this->DerivedClass::vfunc_set_action_name (action_name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_action_target_value ()
    {
      ::GtkActionableInterface *klass = reinterpret_cast<::GtkActionableInterface *> (this);
      klass->set_action_target_value = +[] (::GtkActionable *actionable, ::GVariant *target_value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (actionable);
        peel::FloatPtr<GLib::Variant> _peel_target_value = peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (target_value));
        _peel_this->DerivedClass::vfunc_set_action_target_value (std::move (_peel_target_value));
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkActionableInterface),
                 "Actionable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkActionableInterface),
                 "Actionable::Iface align mismatch");
}; /* interface Actionable */
static_assert (sizeof (Actionable) == sizeof (Widget),
               "Actionable size mismatch");
static_assert (alignof (Actionable) == alignof (Widget),
               "Actionable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
