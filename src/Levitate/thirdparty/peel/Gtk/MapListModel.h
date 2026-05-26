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
#include <peel/Gtk/SectionModel.h>

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

namespace Gtk
{
class MapListModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MapListModel> ()
{
  return gtk_map_list_model_get_type ();
}


namespace Gtk
{
class MapListModel : public SectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MapListModel () = delete;
  MapListModel (const MapListModel &) = delete;
  MapListModel (MapListModel &&) = delete;
  MapListModel &
  operator = (const MapListModel &) = delete;
  MapListModel &
  operator = (MapListModel &&) = delete;
  ~MapListModel () = delete;
public:

  template<typename MapListModelMapFunc>
  static peel::RefPtr<MapListModel>
  create (peel::RefPtr<Gio::ListModel> model, MapListModelMapFunc &&map_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkMapListModelMapFunc _peel_map_func = peel::internals::CallbackHelper<::gpointer, ::gpointer>::wrap_notified_callback (
      static_cast<MapListModelMapFunc &&> (map_func),
      [] (::gpointer item, gpointer user_data) -> ::gpointer
      {
        MapListModelMapFunc &_peel_captured_map_func = *reinterpret_cast<typename std::remove_reference<MapListModelMapFunc>::type *> (user_data);
        peel::RefPtr<GObject::Object> _peel_item = peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (item));
        peel::RefPtr<GObject::Object> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<GObject::Object>> (_peel_captured_map_func) (std::move (_peel_item));
        return reinterpret_cast<::gpointer> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<MapListModelMapFunc, void, peel::RefPtr<GObject::Object>>::value);
    ::GtkMapListModel *_peel_return = gtk_map_list_model_new (_peel_model, _peel_map_func, _peel_user_data, _peel_user_destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<MapListModel>::adopt_ref (reinterpret_cast<MapListModel *> (_peel_return));
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkMapListModel *_peel_this = reinterpret_cast<::GtkMapListModel *> (this);
    ::GListModel *_peel_return = gtk_map_list_model_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  bool
  has_map () noexcept
  {
    ::GtkMapListModel *_peel_this = reinterpret_cast<::GtkMapListModel *> (this);
    gboolean _peel_return = gtk_map_list_model_has_map (_peel_this);
    return !!_peel_return;
  }

  template<typename MapListModelMapFunc>
  void
  set_map_func (MapListModelMapFunc &&map_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GtkMapListModel *_peel_this = reinterpret_cast<::GtkMapListModel *> (this);
    ::GtkMapListModelMapFunc _peel_map_func = peel::internals::CallbackHelper<::gpointer, ::gpointer>::wrap_notified_callback (
      static_cast<MapListModelMapFunc &&> (map_func),
      [] (::gpointer item, gpointer user_data) -> ::gpointer
      {
        MapListModelMapFunc &_peel_captured_map_func = *reinterpret_cast<typename std::remove_reference<MapListModelMapFunc>::type *> (user_data);
        peel::RefPtr<GObject::Object> _peel_item = peel::RefPtr<GObject::Object>::adopt_ref (reinterpret_cast<GObject::Object *> (item));
        peel::RefPtr<GObject::Object> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<GObject::Object>> (_peel_captured_map_func) (std::move (_peel_item));
        return reinterpret_cast<::gpointer> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<MapListModelMapFunc, void, peel::RefPtr<GObject::Object>>::value);
    gtk_map_list_model_set_map_func (_peel_this, _peel_map_func, _peel_user_data, _peel_user_destroy);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkMapListModel *_peel_this = reinterpret_cast<::GtkMapListModel *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_map_list_model_set_model (_peel_this, _peel_model);
  }

  static peel::Property<bool>
  prop_has_map ()
  {
    return peel::Property<bool> { "has-map" };
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<Gio::ListModel>
  prop_model ()
  {
    return peel::Property<Gio::ListModel> { "model" };
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

  static_assert (sizeof (Class) == sizeof (::GtkMapListModelClass),
                 "MapListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMapListModelClass),
                 "MapListModel::Class align mismatch");
}; /* class MapListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Object.h>
#include <peel/Gio/ListModel.h>
