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

peel_begin_header

namespace peel
{
namespace Gtk
{
class AccessibleHyperlink;
class /* interface */ AccessibleHypertext;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleHypertext> ()
{
  return gtk_accessible_hypertext_get_type ();
}


namespace Gtk
{
class /* interface */ AccessibleHypertext : public Accessible
/* requires Accessible */
{
private:
  AccessibleHypertext () = delete;
  AccessibleHypertext (const AccessibleHypertext &) = delete;
  AccessibleHypertext (AccessibleHypertext &&) = delete;

  AccessibleHypertext &
  operator = (const AccessibleHypertext &) = delete;
  AccessibleHypertext &
  operator = (AccessibleHypertext &&) = delete;

protected:
  ~AccessibleHypertext () = default;

public:

  template<typename DerivedClass>
  peel_returns_nonnull
  AccessibleHyperlink *
  parent_vfunc_get_link (unsigned index) noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleHypertext> ())->peek_parent ());
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    ::GtkAccessibleHyperlink *_peel_return = _peel_iface->get_link (_peel_this, index);
    peel_assume (_peel_return);
    return reinterpret_cast<AccessibleHyperlink *> (_peel_return);
  }

  peel_returns_nonnull
  AccessibleHyperlink *
  default_vfunc_get_link (unsigned index) noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleHypertext> ()));
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    ::GtkAccessibleHyperlink *_peel_return = _peel_iface->get_link (_peel_this, index);
    peel_assume (_peel_return);
    return reinterpret_cast<AccessibleHyperlink *> (_peel_return);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_link_at (unsigned offset) noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleHypertext> ())->peek_parent ());
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    return _peel_iface->get_link_at (_peel_this, offset);
  }

  unsigned
  default_vfunc_get_link_at (unsigned offset) noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleHypertext> ()));
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    return _peel_iface->get_link_at (_peel_this, offset);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_n_links () noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleHypertext> ())->peek_parent ());
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    return _peel_iface->get_n_links (_peel_this);
  }

  unsigned
  default_vfunc_get_n_links () noexcept
  {
    ::GtkAccessibleHypertextInterface *_peel_iface = reinterpret_cast<::GtkAccessibleHypertextInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleHypertext> ()));
    ::GtkAccessibleHypertext *_peel_this = reinterpret_cast<::GtkAccessibleHypertext *> (this);
    return _peel_iface->get_n_links (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkAccessibleHypertextInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_link ()
    {
      ::GtkAccessibleHypertextInterface *klass = reinterpret_cast<::GtkAccessibleHypertextInterface *> (this);
      klass->get_link = +[] (::GtkAccessibleHypertext *self, unsigned int index) -> ::GtkAccessibleHyperlink *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        AccessibleHyperlink *_peel_return = _peel_this->DerivedClass::vfunc_get_link (index);
        return reinterpret_cast<::GtkAccessibleHyperlink *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_link_at ()
    {
      ::GtkAccessibleHypertextInterface *klass = reinterpret_cast<::GtkAccessibleHypertextInterface *> (this);
      klass->get_link_at = +[] (::GtkAccessibleHypertext *self, unsigned int offset) -> unsigned int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        return _peel_this->DerivedClass::vfunc_get_link_at (offset);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_n_links ()
    {
      ::GtkAccessibleHypertextInterface *klass = reinterpret_cast<::GtkAccessibleHypertextInterface *> (this);
      klass->get_n_links = +[] (::GtkAccessibleHypertext *self) -> unsigned int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        return _peel_this->DerivedClass::vfunc_get_n_links ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkAccessibleHypertextInterface),
                 "AccessibleHypertext::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkAccessibleHypertextInterface),
                 "AccessibleHypertext::Iface align mismatch");
}; /* interface AccessibleHypertext */
static_assert (sizeof (AccessibleHypertext) == sizeof (Accessible),
               "AccessibleHypertext size mismatch");
static_assert (alignof (AccessibleHypertext) == alignof (Accessible),
               "AccessibleHypertext align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
