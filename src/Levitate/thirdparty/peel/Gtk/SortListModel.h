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
class SortListModel;
class Sorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SortListModel> ()
{
  return gtk_sort_list_model_get_type ();
}


namespace Gtk
{
class SortListModel : public SectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SortListModel () = delete;
  SortListModel (const SortListModel &) = delete;
  SortListModel (SortListModel &&) = delete;
  SortListModel &
  operator = (const SortListModel &) = delete;
  SortListModel &
  operator = (SortListModel &&) = delete;
  ~SortListModel () = delete;
public:

  static peel::RefPtr<SortListModel>
  create (peel::RefPtr<Gio::ListModel> model, peel::RefPtr<Sorter> sorter) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (std::move (sorter).release_ref ());
    ::GtkSortListModel *_peel_return = gtk_sort_list_model_new (_peel_model, _peel_sorter);
    peel_assume (_peel_return);
    return peel::RefPtr<SortListModel>::adopt_ref (reinterpret_cast<SortListModel *> (_peel_return));
  }

  bool
  get_incremental () noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    gboolean _peel_return = gtk_sort_list_model_get_incremental (_peel_this);
    return !!_peel_return;
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GListModel *_peel_return = gtk_sort_list_model_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  unsigned
  get_pending () noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    return gtk_sort_list_model_get_pending (_peel_this);
  }

  Sorter *
  get_section_sorter () noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GtkSorter *_peel_return = gtk_sort_list_model_get_section_sorter (_peel_this);
    return reinterpret_cast<Sorter *> (_peel_return);
  }

  Sorter *
  get_sorter () noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GtkSorter *_peel_return = gtk_sort_list_model_get_sorter (_peel_this);
    return reinterpret_cast<Sorter *> (_peel_return);
  }

  void
  set_incremental (bool incremental) noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    gboolean _peel_incremental = static_cast<gboolean> (incremental);
    gtk_sort_list_model_set_incremental (_peel_this, _peel_incremental);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_sort_list_model_set_model (_peel_this, _peel_model);
  }

  void
  set_section_sorter (Sorter *sorter) noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (sorter);
    gtk_sort_list_model_set_section_sorter (_peel_this, _peel_sorter);
  }

  void
  set_sorter (Sorter *sorter) noexcept
  {
    ::GtkSortListModel *_peel_this = reinterpret_cast<::GtkSortListModel *> (this);
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (sorter);
    gtk_sort_list_model_set_sorter (_peel_this, _peel_sorter);
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

  static peel::Property<Sorter>
  prop_section_sorter ()
  {
    return peel::Property<Sorter> { "section-sorter" };
  }

  static peel::Property<Sorter>
  prop_sorter ()
  {
    return peel::Property<Sorter> { "sorter" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkSortListModelClass),
                 "SortListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSortListModelClass),
                 "SortListModel::Class align mismatch");
}; /* class SortListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
#include <peel/Gtk/Sorter.h>
