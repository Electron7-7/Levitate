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
namespace Gio
{
class MenuLinkIter;
class MenuModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MenuLinkIter> ()
{
  return g_menu_link_iter_get_type ();
}


namespace Gio
{
class MenuLinkIter : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GMenuLinkIter) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MenuLinkIter () = delete;
  MenuLinkIter (const MenuLinkIter &) = delete;
  MenuLinkIter (MenuLinkIter &&) = delete;
  MenuLinkIter &
  operator = (const MenuLinkIter &) = delete;
  MenuLinkIter &
  operator = (MenuLinkIter &&) = delete;
protected:
  ~MenuLinkIter () = default;
public:

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GMenuLinkIter *_peel_this = reinterpret_cast<::GMenuLinkIter *> (this);
    return g_menu_link_iter_get_name (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  get_next (const char **out_link, peel::RefPtr<MenuModel> *value) noexcept
  {
    ::GMenuLinkIter *_peel_this = reinterpret_cast<::GMenuLinkIter *> (this);
    ::GMenuModel *_peel_value;
    gboolean _peel_return = g_menu_link_iter_get_next (_peel_this, out_link, value ? &_peel_value : nullptr);
    if (value)
      *value = peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_value));
    return !!_peel_return;
  }

  peel::RefPtr<MenuModel>
  get_value () noexcept
  {
    ::GMenuLinkIter *_peel_this = reinterpret_cast<::GMenuLinkIter *> (this);
    ::GMenuModel *_peel_return = g_menu_link_iter_get_value (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_return));
  }

  bool
  next () noexcept
  {
    ::GMenuLinkIter *_peel_this = reinterpret_cast<::GMenuLinkIter *> (this);
    gboolean _peel_return = g_menu_link_iter_next (_peel_this);
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MenuLinkIter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3)
  bool
  parent_vfunc_get_next (const char **out_link, peel::RefPtr<MenuModel> *value) noexcept
  {
    ::GMenuLinkIterClass *_peel_class = reinterpret_cast<::GMenuLinkIterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuLinkIter *_peel_this = reinterpret_cast<::GMenuLinkIter *> (this);
    ::GMenuModel *_peel_value;
    gboolean _peel_return = _peel_class->get_next (_peel_this, out_link, value ? &_peel_value : nullptr);
    if (value)
      *value = peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_value));
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMenuLinkIterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_next ()
    {
      ::GMenuLinkIterClass *klass = reinterpret_cast<::GMenuLinkIterClass *> (this);
      klass->get_next = +[] (::GMenuLinkIter *iter, const gchar **out_link, ::GMenuModel **value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (iter);
        const char **_peel_out_link = reinterpret_cast<const char **> (out_link);
        peel::RefPtr<MenuModel> _peel_value;
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_next (_peel_out_link, value ? &_peel_value : nullptr);
        if (value)
          *value = reinterpret_cast<::GMenuModel *> (std::move (_peel_value).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GMenuLinkIterClass),
                 "MenuLinkIter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMenuLinkIterClass),
                 "MenuLinkIter::Class align mismatch");
}; /* class MenuLinkIter */

static_assert (sizeof (MenuLinkIter) == sizeof (::GMenuLinkIter),
               "MenuLinkIter size mismatch");
static_assert (alignof (MenuLinkIter) == alignof (::GMenuLinkIter),
               "MenuLinkIter align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/MenuModel.h>
