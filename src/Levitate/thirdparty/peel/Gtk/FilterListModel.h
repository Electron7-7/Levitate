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
namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class Filter;
class FilterListModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FilterListModel> ()
{
  return gtk_filter_list_model_get_type ();
}


namespace Gtk
{
class FilterListModel : public SectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FilterListModel () = delete;
  FilterListModel (const FilterListModel &) = delete;
  FilterListModel (FilterListModel &&) = delete;
  FilterListModel &
  operator = (const FilterListModel &) = delete;
  FilterListModel &
  operator = (FilterListModel &&) = delete;
  ~FilterListModel () = delete;
public:

  static peel::RefPtr<FilterListModel>
  create (peel::RefPtr<Gio::ListModel> model, peel::RefPtr<Filter> filter) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkFilter *_peel_filter = reinterpret_cast<::GtkFilter *> (std::move (filter).release_ref ());
    ::GtkFilterListModel *_peel_return = gtk_filter_list_model_new (_peel_model, _peel_filter);
    peel_assume (_peel_return);
    return peel::RefPtr<FilterListModel>::adopt_ref (reinterpret_cast<FilterListModel *> (_peel_return));
  }

  Filter *
  get_filter () noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    ::GtkFilter *_peel_return = gtk_filter_list_model_get_filter (_peel_this);
    return reinterpret_cast<Filter *> (_peel_return);
  }

  bool
  get_incremental () noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    gboolean _peel_return = gtk_filter_list_model_get_incremental (_peel_this);
    return !!_peel_return;
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    ::GListModel *_peel_return = gtk_filter_list_model_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  unsigned
  get_pending () noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    return gtk_filter_list_model_get_pending (_peel_this);
  }

  bool
  get_watch_items () noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    gboolean _peel_return = gtk_filter_list_model_get_watch_items (_peel_this);
    return !!_peel_return;
  }

  void
  set_filter (Filter *filter) noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    ::GtkFilter *_peel_filter = reinterpret_cast<::GtkFilter *> (filter);
    gtk_filter_list_model_set_filter (_peel_this, _peel_filter);
  }

  void
  set_incremental (bool incremental) noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    gboolean _peel_incremental = static_cast<gboolean> (incremental);
    gtk_filter_list_model_set_incremental (_peel_this, _peel_incremental);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_filter_list_model_set_model (_peel_this, _peel_model);
  }

  void
  set_watch_items (bool watch_items) noexcept
  {
    ::GtkFilterListModel *_peel_this = reinterpret_cast<::GtkFilterListModel *> (this);
    gboolean _peel_watch_items = static_cast<gboolean> (watch_items);
    gtk_filter_list_model_set_watch_items (_peel_this, _peel_watch_items);
  }

  static peel::Property<Filter>
  prop_filter ()
  {
    return peel::Property<Filter> { "filter" };
  }

  static peel::Property<bool>
  prop_incremental ()
  {
    return peel::Property<bool> { "incremental" };
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

  static peel::Property<unsigned>
  prop_pending ()
  {
    return peel::Property<unsigned> { "pending" };
  }

  static peel::Property<bool>
  prop_watch_items ()
  {
    return peel::Property<bool> { "watch-items" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFilterListModelClass),
                 "FilterListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFilterListModelClass),
                 "FilterListModel::Class align mismatch");
}; /* class FilterListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
#include <peel/Gtk/Filter.h>
