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
#include <peel/Gio/ListModel.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class ListStore;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ListStore> ()
{
  return g_list_store_get_type ();
}


namespace Gio
{
class ListStore : public ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements ListModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListStore () = delete;
  ListStore (const ListStore &) = delete;
  ListStore (ListStore &&) = delete;
  ListStore &
  operator = (const ListStore &) = delete;
  ListStore &
  operator = (ListStore &&) = delete;
  ~ListStore () = delete;
public:

  static peel::RefPtr<ListStore>
  create (GObject::Type item_type) noexcept
  {
    ::GListStore *_peel_return = g_list_store_new (item_type);
    peel_assume (_peel_return);
    return peel::RefPtr<ListStore>::adopt_ref (reinterpret_cast<ListStore *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  append (GObject::Object *item) noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    g_list_store_append (_peel_this, _peel_item);
  }

  peel_arg_out (3) peel_nonnull_args (2)
  bool
  find (GObject::Object *item, unsigned *position) noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    guint *_peel_position = reinterpret_cast<guint *> (position);
    gboolean _peel_return = g_list_store_find (_peel_this, _peel_item, _peel_position);
    return !!_peel_return;
  }

  peel_arg_out (4)
  bool
  find_with_equal_func (GObject::Object *item, ::GEqualFunc equal_func, unsigned *position) noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    guint *_peel_position = reinterpret_cast<guint *> (position);
    gboolean _peel_return = g_list_store_find_with_equal_func (_peel_this, _peel_item, equal_func, _peel_position);
    return !!_peel_return;
  }

  template<typename EqualFuncFull>
  peel_arg_out (4)
  bool
  find_with_equal_func_full (GObject::Object *item, EqualFuncFull &&equal_func, unsigned *position) noexcept
  {
    gpointer _peel_user_data;
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    ::GEqualFuncFull _peel_equal_func = peel::internals::CallbackHelper<gboolean, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<EqualFuncFull &&> (equal_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gboolean
      {
        EqualFuncFull &_peel_captured_equal_func = *reinterpret_cast<typename std::remove_reference<EqualFuncFull>::type *> (user_data);
        bool _peel_return = _peel_captured_equal_func (a, b);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<EqualFuncFull, void, const void *, const void *>::value);
    guint *_peel_position = reinterpret_cast<guint *> (position);
    gboolean _peel_return = g_list_store_find_with_equal_func_full (_peel_this, _peel_item, _peel_equal_func, _peel_user_data, _peel_position);
    return !!_peel_return;
  }

  peel_nonnull_args (3)
  void
  insert (unsigned position, GObject::Object *item) noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    g_list_store_insert (_peel_this, position, _peel_item);
  }

  template<typename CompareDataFunc>
  peel_nonnull_args (2)
  unsigned
  insert_sorted (GObject::Object *item, CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    return g_list_store_insert_sorted (_peel_this, _peel_item, _peel_compare_func, _peel_user_data);
  }

  void
  remove (unsigned position) noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    g_list_store_remove (_peel_this, position);
  }

  void
  remove_all () noexcept
  {
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    g_list_store_remove_all (_peel_this);
  }

  template<typename CompareDataFunc>
  void
  sort (CompareDataFunc &&compare_func) noexcept
  {
    gpointer _peel_user_data;
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    g_list_store_sort (_peel_this, _peel_compare_func, _peel_user_data);
  }

  void
  splice (unsigned position, unsigned n_removals, peel::ArrayRef<GObject::Object *> additions) noexcept
  {
    guint _peel_n_additions;
    ::GListStore *_peel_this = reinterpret_cast<::GListStore *> (this);
    ::gpointer *_peel_additions = (_peel_n_additions = additions.size (), reinterpret_cast<::gpointer *> (additions.data ()));
    g_list_store_splice (_peel_this, position, n_removals, _peel_additions, _peel_n_additions);
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GListStoreClass),
                 "ListStore::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GListStoreClass),
                 "ListStore::Class align mismatch");
}; /* class ListStore */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
