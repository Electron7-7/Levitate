#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class MenuAttributeIter;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MenuAttributeIter> ()
{
  return g_menu_attribute_iter_get_type ();
}


namespace Gio
{
class MenuAttributeIter : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GMenuAttributeIter) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MenuAttributeIter () = delete;
  MenuAttributeIter (const MenuAttributeIter &) = delete;
  MenuAttributeIter (MenuAttributeIter &&) = delete;
  MenuAttributeIter &
  operator = (const MenuAttributeIter &) = delete;
  MenuAttributeIter &
  operator = (MenuAttributeIter &&) = delete;
protected:
  ~MenuAttributeIter () = default;
public:

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GMenuAttributeIter *_peel_this = reinterpret_cast<::GMenuAttributeIter *> (this);
    return g_menu_attribute_iter_get_name (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_next (const char **out_name, peel::RefPtr<GLib::Variant> *value) noexcept
  {
    ::GMenuAttributeIter *_peel_this = reinterpret_cast<::GMenuAttributeIter *> (this);
    ::GVariant *_peel_value;
    gboolean _peel_return = g_menu_attribute_iter_get_next (_peel_this, out_name, value ? &_peel_value : nullptr);
    if (value)
      *value = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_value));
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Variant>
  get_value () noexcept
  {
    ::GMenuAttributeIter *_peel_this = reinterpret_cast<::GMenuAttributeIter *> (this);
    ::GVariant *_peel_return = g_menu_attribute_iter_get_value (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  bool
  next () noexcept
  {
    ::GMenuAttributeIter *_peel_this = reinterpret_cast<::GMenuAttributeIter *> (this);
    gboolean _peel_return = g_menu_attribute_iter_next (_peel_this);
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MenuAttributeIter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3)
  bool
  parent_vfunc_get_next (const char **out_name, peel::RefPtr<GLib::Variant> *value) noexcept
  {
    ::GMenuAttributeIterClass *_peel_class = reinterpret_cast<::GMenuAttributeIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuAttributeIter *_peel_this = reinterpret_cast<::GMenuAttributeIter *> (this);
    ::GVariant *_peel_value;
    gboolean _peel_return = _peel_class->get_next (_peel_this, out_name, value ? &_peel_value : nullptr);
    if (value)
      *value = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_value));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMenuAttributeIterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_next ()
    {
      ::GMenuAttributeIterClass *klass = reinterpret_cast<::GMenuAttributeIterClass *> (this);
      klass->get_next = +[] (::GMenuAttributeIter *iter, const gchar **out_name, ::GVariant **value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        const char **_peel_out_name = reinterpret_cast<const char **> (out_name);
        peel::RefPtr<GLib::Variant> _peel_value;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_next (_peel_out_name, value ? &_peel_value : nullptr);
        if (value)
          *value = reinterpret_cast<::GVariant *> (std::move (_peel_value).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GMenuAttributeIterClass),
                 "MenuAttributeIter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMenuAttributeIterClass),
                 "MenuAttributeIter::Class align mismatch");
}; /* class MenuAttributeIter */

static_assert (sizeof (MenuAttributeIter) == sizeof (::GMenuAttributeIter),
               "MenuAttributeIter size mismatch");
static_assert (alignof (MenuAttributeIter) == alignof (::GMenuAttributeIter),
               "MenuAttributeIter align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
