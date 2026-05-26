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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ListModel> ()
{
  return g_list_model_get_type ();
}


namespace Gio
{
class /* interface */ ListModel : public GObject::Object
/* requires GObject::Object */
{
private:
  ListModel () = delete;
  ListModel (const ListModel &) = delete;
  ListModel (ListModel &&) = delete;

  ListModel &
  operator = (const ListModel &) = delete;
  ListModel &
  operator = (ListModel &&) = delete;

protected:
  ~ListModel () = default;

public:

  void *
  get_item (unsigned position) noexcept
  {
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return g_list_model_get_item (_peel_this, position);
  }

  GObject::Type
  get_item_type () noexcept
  {
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return g_list_model_get_item_type (_peel_this);
  }

  unsigned
  get_n_items () noexcept
  {
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return g_list_model_get_n_items (_peel_this);
  }

  peel::RefPtr<GObject::Object>
  get_object (unsigned position) noexcept
  {
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    ::GObject *_peel_return = g_list_model_get_object (_peel_this, position);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  void
  items_changed (unsigned position, unsigned removed, unsigned added) noexcept
  {
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    g_list_model_items_changed (_peel_this, position, removed, added);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_items_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListModel, void (unsigned, unsigned, unsigned)>::_peel_connect_by_name (this, "items-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_items_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ListModel *, unsigned, unsigned, unsigned), bool after = false) noexcept
  {
    return Signal<ListModel, void (unsigned, unsigned, unsigned)>::_peel_connect_by_name (this, "items-changed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel::RefPtr<GObject::Object>
  parent_vfunc_get_item (unsigned position) noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ListModel> ())->peek_parent ());
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    ::gpointer _peel_return = _peel_iface->get_item (_peel_this, position);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  peel::RefPtr<GObject::Object>
  default_vfunc_get_item (unsigned position) noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ListModel> ()));
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    ::gpointer _peel_return = _peel_iface->get_item (_peel_this, position);
    return peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (_peel_return));
  }

  template<typename DerivedClass>
  GObject::Type
  parent_vfunc_get_item_type () noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ListModel> ())->peek_parent ());
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return _peel_iface->get_item_type (_peel_this);
  }

  GObject::Type
  default_vfunc_get_item_type () noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ListModel> ()));
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return _peel_iface->get_item_type (_peel_this);
  }

  template<typename DerivedClass>
  unsigned
  parent_vfunc_get_n_items () noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<ListModel> ())->peek_parent ());
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return _peel_iface->get_n_items (_peel_this);
  }

  unsigned
  default_vfunc_get_n_items () noexcept
  {
    ::GListModelInterface *_peel_iface = reinterpret_cast<::GListModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<ListModel> ()));
    ::GListModel *_peel_this = reinterpret_cast<::GListModel *> (this);
    return _peel_iface->get_n_items (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GListModelInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_item ()
    {
      ::GListModelInterface *klass = reinterpret_cast<::GListModelInterface *> (this);
      klass->get_item = +[] (::GListModel *list, guint position) -> ::gpointer
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (list);
        peel::RefPtr<GObject::Object> _peel_return = _peel_this->DerivedClass::vfunc_get_item (position);
        return reinterpret_cast<::gpointer> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_item_type ()
    {
      ::GListModelInterface *klass = reinterpret_cast<::GListModelInterface *> (this);
      klass->get_item_type = +[] (::GListModel *list) -> GType
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (list);
        return _peel_this->DerivedClass::vfunc_get_item_type ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_n_items ()
    {
      ::GListModelInterface *klass = reinterpret_cast<::GListModelInterface *> (this);
      klass->get_n_items = +[] (::GListModel *list) -> guint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (list);
        return _peel_this->DerivedClass::vfunc_get_n_items ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GListModelInterface),
                 "ListModel::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GListModelInterface),
                 "ListModel::Iface align mismatch");
}; /* interface ListModel */
static_assert (sizeof (ListModel) == sizeof (GObject::Object),
               "ListModel size mismatch");
static_assert (alignof (ListModel) == alignof (GObject::Object),
               "ListModel align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
