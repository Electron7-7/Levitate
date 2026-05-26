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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ShortcutController;
class /* interface */ ShortcutManager;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutManager> ()
{
  return gtk_shortcut_manager_get_type ();
}


namespace Gtk
{
class /* interface */ ShortcutManager : public GObject::Object
/* requires GObject::Object */
{
private:
  ShortcutManager () = delete;
  ShortcutManager (const ShortcutManager &) = delete;
  ShortcutManager (ShortcutManager &&) = delete;

  ShortcutManager &
  operator = (const ShortcutManager &) = delete;
  ShortcutManager &
  operator = (ShortcutManager &&) = delete;

protected:
  ~ShortcutManager () = default;

public:

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_add_controller (ShortcutController *controller) noexcept
  {
    ::GtkShortcutManagerInterface *_peel_iface = reinterpret_cast<::GtkShortcutManagerInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ShortcutManager> ())->peek_parent ());
    ::GtkShortcutManager *_peel_this = reinterpret_cast<::GtkShortcutManager *> (this);
    ::GtkShortcutController *_peel_controller = reinterpret_cast<::GtkShortcutController *> (controller);
    _peel_iface->add_controller (_peel_this, _peel_controller);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_add_controller (ShortcutController *controller) noexcept
  {
    ::GtkShortcutManagerInterface *_peel_iface = reinterpret_cast<::GtkShortcutManagerInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ShortcutManager> ()));
    ::GtkShortcutManager *_peel_this = reinterpret_cast<::GtkShortcutManager *> (this);
    ::GtkShortcutController *_peel_controller = reinterpret_cast<::GtkShortcutController *> (controller);
    _peel_iface->add_controller (_peel_this, _peel_controller);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_remove_controller (ShortcutController *controller) noexcept
  {
    ::GtkShortcutManagerInterface *_peel_iface = reinterpret_cast<::GtkShortcutManagerInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ShortcutManager> ())->peek_parent ());
    ::GtkShortcutManager *_peel_this = reinterpret_cast<::GtkShortcutManager *> (this);
    ::GtkShortcutController *_peel_controller = reinterpret_cast<::GtkShortcutController *> (controller);
    _peel_iface->remove_controller (_peel_this, _peel_controller);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_remove_controller (ShortcutController *controller) noexcept
  {
    ::GtkShortcutManagerInterface *_peel_iface = reinterpret_cast<::GtkShortcutManagerInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ShortcutManager> ()));
    ::GtkShortcutManager *_peel_this = reinterpret_cast<::GtkShortcutManager *> (this);
    ::GtkShortcutController *_peel_controller = reinterpret_cast<::GtkShortcutController *> (controller);
    _peel_iface->remove_controller (_peel_this, _peel_controller);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkShortcutManagerInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_add_controller ()
    {
      ::GtkShortcutManagerInterface *klass = reinterpret_cast<::GtkShortcutManagerInterface *> (this);
      klass->add_controller = +[] (::GtkShortcutManager *self, ::GtkShortcutController *controller) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        ShortcutController *_peel_controller = reinterpret_cast<ShortcutController *> (controller);
        _peel_this->DerivedClass::vfunc_add_controller (_peel_controller);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove_controller ()
    {
      ::GtkShortcutManagerInterface *klass = reinterpret_cast<::GtkShortcutManagerInterface *> (this);
      klass->remove_controller = +[] (::GtkShortcutManager *self, ::GtkShortcutController *controller) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        ShortcutController *_peel_controller = reinterpret_cast<ShortcutController *> (controller);
        _peel_this->DerivedClass::vfunc_remove_controller (_peel_controller);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkShortcutManagerInterface),
                 "ShortcutManager::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkShortcutManagerInterface),
                 "ShortcutManager::Iface align mismatch");
}; /* interface ShortcutManager */
static_assert (sizeof (ShortcutManager) == sizeof (GObject::Object),
               "ShortcutManager size mismatch");
static_assert (alignof (ShortcutManager) == alignof (GObject::Object),
               "ShortcutManager align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
