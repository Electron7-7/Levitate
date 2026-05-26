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
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ HashTable;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class MenuAttributeIter;
class MenuLinkIter;
class MenuModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MenuModel> ()
{
  return g_menu_model_get_type ();
}


namespace Gio
{
class MenuModel : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GMenuModel) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MenuModel () = delete;
  MenuModel (const MenuModel &) = delete;
  MenuModel (MenuModel &&) = delete;
  MenuModel &
  operator = (const MenuModel &) = delete;
  MenuModel &
  operator = (MenuModel &&) = delete;
protected:
  ~MenuModel () = default;
public:

  /* Unsupported for now: get_item_attribute: unimplemented vararg mode variant-get */
  static void
  get_item_attribute (UnsupportedForNowToken);

  peel_arg_in (4) peel_nonnull_args (3)
  peel::RefPtr<GLib::Variant>
  get_item_attribute_value (int item_index, const char *attribute, const GLib::Variant::Type *expected_type) noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    ::GVariant *_peel_return = g_menu_model_get_item_attribute_value (_peel_this, item_index, attribute, _peel_expected_type);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel_nonnull_args (3)
  peel::RefPtr<MenuModel>
  get_item_link (int item_index, const char *link) noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuModel *_peel_return = g_menu_model_get_item_link (_peel_this, item_index, link);
    return peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_return));
  }

  int
  get_n_items () noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    return g_menu_model_get_n_items (_peel_this);
  }

  bool
  is_mutable () noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    gboolean _peel_return = g_menu_model_is_mutable (_peel_this);
    return !!_peel_return;
  }

  void
  items_changed (int position, int removed, int added) noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    g_menu_model_items_changed (_peel_this, position, removed, added);
  }

  peel::RefPtr<MenuAttributeIter>
  iterate_item_attributes (int item_index) noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuAttributeIter *_peel_return = g_menu_model_iterate_item_attributes (_peel_this, item_index);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuAttributeIter>::adopt_ref (reinterpret_cast<MenuAttributeIter *> (_peel_return));
  }

  peel::RefPtr<MenuLinkIter>
  iterate_item_links (int item_index) noexcept
  {
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuLinkIter *_peel_return = g_menu_model_iterate_item_links (_peel_this, item_index);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuLinkIter>::adopt_ref (reinterpret_cast<MenuLinkIter *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_items_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<MenuModel, void (int, int, int)>::_peel_connect_by_name (this, "items-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_items_changed (HandlerObject *object, void (HandlerObject::*handler_method) (MenuModel *, int, int, int), bool after = false) noexcept
  {
    return Signal<MenuModel, void (int, int, int)>::_peel_connect_by_name (this, "items-changed", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MenuModel> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (3)
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_item_attribute_value (int item_index, const char *attribute, const GLib::Variant::Type *expected_type) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    ::GVariant *_peel_return = _peel_class->get_item_attribute_value (_peel_this, item_index, attribute, _peel_expected_type);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (3)
  void
  parent_vfunc_get_item_attributes (int item_index, peel::RefPtr<GLib::HashTable> *attributes) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GHashTable *_peel_attributes;
    _peel_class->get_item_attributes (_peel_this, item_index, &_peel_attributes);
    *attributes = peel::RefPtr<GLib::HashTable>::adopt_ref (reinterpret_cast<GLib::HashTable *> (_peel_attributes));
  }

  template<typename DerivedClass>
  peel_nonnull_args (3)
  peel::RefPtr<MenuModel>
  parent_vfunc_get_item_link (int item_index, const char *link) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuModel *_peel_return = _peel_class->get_item_link (_peel_this, item_index, link);
    return peel::RefPtr<MenuModel>::adopt_ref (reinterpret_cast<MenuModel *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_nonnull_args (3)
  void
  parent_vfunc_get_item_links (int item_index, peel::RefPtr<GLib::HashTable> *links) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GHashTable *_peel_links;
    _peel_class->get_item_links (_peel_this, item_index, &_peel_links);
    *links = peel::RefPtr<GLib::HashTable>::adopt_ref (reinterpret_cast<GLib::HashTable *> (_peel_links));
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_n_items () noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    return _peel_class->get_n_items (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_mutable () noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    gboolean _peel_return = _peel_class->is_mutable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<MenuAttributeIter>
  parent_vfunc_iterate_item_attributes (int item_index) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuAttributeIter *_peel_return = _peel_class->iterate_item_attributes (_peel_this, item_index);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuAttributeIter>::adopt_ref (reinterpret_cast<MenuAttributeIter *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<MenuLinkIter>
  parent_vfunc_iterate_item_links (int item_index) noexcept
  {
    ::GMenuModelClass *_peel_class = reinterpret_cast<::GMenuModelClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GMenuModel *_peel_this = reinterpret_cast<::GMenuModel *> (this);
    ::GMenuLinkIter *_peel_return = _peel_class->iterate_item_links (_peel_this, item_index);
    peel_assume (_peel_return);
    return peel::RefPtr<MenuLinkIter>::adopt_ref (reinterpret_cast<MenuLinkIter *> (_peel_return));
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMenuModelClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_item_attribute_value ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->get_item_attribute_value = +[] (::GMenuModel *model, gint item_index, const gchar *attribute, const ::GVariantType *expected_type) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        const GLib::Variant::Type *_peel_expected_type = reinterpret_cast<const GLib::Variant::Type *> (expected_type);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_item_attribute_value (item_index, attribute, _peel_expected_type);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_item_attributes ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->get_item_attributes = +[] (::GMenuModel *model, gint item_index, ::GHashTable **attributes) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<GLib::HashTable> _peel_attributes;
        _peel_this->DerivedClass::vfunc_get_item_attributes (item_index, &_peel_attributes);
        *attributes = reinterpret_cast<::GHashTable *> (std::move (_peel_attributes).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_item_link ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->get_item_link = +[] (::GMenuModel *model, gint item_index, const gchar *link) -> ::GMenuModel *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<MenuModel> _peel_return = _peel_this->DerivedClass::vfunc_get_item_link (item_index, link);
        return reinterpret_cast<::GMenuModel *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_item_links ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->get_item_links = +[] (::GMenuModel *model, gint item_index, ::GHashTable **links) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<GLib::HashTable> _peel_links;
        _peel_this->DerivedClass::vfunc_get_item_links (item_index, &_peel_links);
        *links = reinterpret_cast<::GHashTable *> (std::move (_peel_links).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_n_items ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->get_n_items = +[] (::GMenuModel *model) -> gint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        return _peel_this->DerivedClass::vfunc_get_n_items ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_mutable ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->is_mutable = +[] (::GMenuModel *model) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_mutable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iterate_item_attributes ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->iterate_item_attributes = +[] (::GMenuModel *model, gint item_index) -> ::GMenuAttributeIter *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<MenuAttributeIter> _peel_return = _peel_this->DerivedClass::vfunc_iterate_item_attributes (item_index);
        return reinterpret_cast<::GMenuAttributeIter *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_iterate_item_links ()
    {
      ::GMenuModelClass *klass = reinterpret_cast<::GMenuModelClass *> (this);
      klass->iterate_item_links = +[] (::GMenuModel *model, gint item_index) -> ::GMenuLinkIter *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<MenuLinkIter> _peel_return = _peel_this->DerivedClass::vfunc_iterate_item_links (item_index);
        return reinterpret_cast<::GMenuLinkIter *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GMenuModelClass),
                 "MenuModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMenuModelClass),
                 "MenuModel::Class align mismatch");
}; /* class MenuModel */

static_assert (sizeof (MenuModel) == sizeof (::GMenuModel),
               "MenuModel size mismatch");
static_assert (alignof (MenuModel) == alignof (::GMenuModel),
               "MenuModel align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/HashTable.h>
#include <peel/Gio/MenuAttributeIter.h>
#include <peel/Gio/MenuLinkIter.h>
