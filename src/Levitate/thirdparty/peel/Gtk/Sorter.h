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

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
enum class Ordering : std::underlying_type<::GtkOrdering>::type;
class Sorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Sorter> ()
{
  return gtk_sorter_get_type ();
}


namespace Gtk
{
class Sorter : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Sorter () = delete;
  Sorter (const Sorter &) = delete;
  Sorter (Sorter &&) = delete;
  Sorter &
  operator = (const Sorter &) = delete;
  Sorter &
  operator = (Sorter &&) = delete;
protected:
  ~Sorter () = default;
public:
  enum class Change : std::underlying_type<::GtkSorterChange>::type;
  enum class Order : std::underlying_type<::GtkSorterOrder>::type;

  void
  changed (Sorter::Change change) noexcept
  {
    ::GtkSorter *_peel_this = reinterpret_cast<::GtkSorter *> (this);
    ::GtkSorterChange _peel_change = static_cast<::GtkSorterChange> (change);
    gtk_sorter_changed (_peel_this, _peel_change);
  }

  peel_nonnull_args (2, 3)
  Ordering
  compare (GObject::Object *item1, GObject::Object *item2) noexcept
  {
    ::GtkSorter *_peel_this = reinterpret_cast<::GtkSorter *> (this);
    ::gpointer _peel_item1 = reinterpret_cast<::gpointer> (item1);
    ::gpointer _peel_item2 = reinterpret_cast<::gpointer> (item2);
    ::GtkOrdering _peel_return = gtk_sorter_compare (_peel_this, _peel_item1, _peel_item2);
    return static_cast<Ordering> (_peel_return);
  }

  Sorter::Order
  get_order () noexcept
  {
    ::GtkSorter *_peel_this = reinterpret_cast<::GtkSorter *> (this);
    ::GtkSorterOrder _peel_return = gtk_sorter_get_order (_peel_this);
    return static_cast<Sorter::Order> (_peel_return);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Sorter, void (Sorter::Change)>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Sorter *, Sorter::Change), bool after = false) noexcept
  {
    return Signal<Sorter, void (Sorter::Change)>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Sorter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  Ordering
  parent_vfunc_compare (GObject::Object *item1, GObject::Object *item2) noexcept
  {
    ::GtkSorterClass *_peel_class = reinterpret_cast<::GtkSorterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkSorter *_peel_this = reinterpret_cast<::GtkSorter *> (this);
    ::gpointer _peel_item1 = reinterpret_cast<::gpointer> (item1);
    ::gpointer _peel_item2 = reinterpret_cast<::gpointer> (item2);
    ::GtkOrdering _peel_return = _peel_class->compare (_peel_this, _peel_item1, _peel_item2);
    return static_cast<Ordering> (_peel_return);
  }

  template<typename DerivedClass>
  Sorter::Order
  parent_vfunc_get_order () noexcept
  {
    ::GtkSorterClass *_peel_class = reinterpret_cast<::GtkSorterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkSorter *_peel_this = reinterpret_cast<::GtkSorter *> (this);
    ::GtkSorterOrder _peel_return = _peel_class->get_order (_peel_this);
    return static_cast<Sorter::Order> (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkSorterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_compare ()
    {
      ::GtkSorterClass *klass = reinterpret_cast<::GtkSorterClass *> (this);
      klass->compare = +[] (::GtkSorter *self, ::gpointer item1, ::gpointer item2) -> ::GtkOrdering
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        GObject::Object *_peel_item1 = reinterpret_cast<GObject::Object *> (item1);
        GObject::Object *_peel_item2 = reinterpret_cast<GObject::Object *> (item2);
        Ordering _peel_return = _peel_this->DerivedClass::vfunc_compare (_peel_item1, _peel_item2);
        return static_cast<::GtkOrdering> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_order ()
    {
      ::GtkSorterClass *klass = reinterpret_cast<::GtkSorterClass *> (this);
      klass->get_order = +[] (::GtkSorter *self) -> ::GtkSorterOrder
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Sorter::Order _peel_return = _peel_this->DerivedClass::vfunc_get_order ();
        return static_cast<::GtkSorterOrder> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkSorterClass),
                 "Sorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSorterClass),
                 "Sorter::Class align mismatch");
}; /* class Sorter */

static_assert (sizeof (Sorter) == sizeof (::GtkSorter),
               "Sorter size mismatch");
static_assert (alignof (Sorter) == alignof (::GtkSorter),
               "Sorter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
