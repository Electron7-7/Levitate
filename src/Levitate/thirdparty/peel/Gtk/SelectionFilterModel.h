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
#include <peel/Gio/ListModel.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class SelectionFilterModel;
class /* interface */ SelectionModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SelectionFilterModel> ()
{
  return gtk_selection_filter_model_get_type ();
}


namespace Gtk
{
class SelectionFilterModel : public Gio::ListModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SelectionFilterModel () = delete;
  SelectionFilterModel (const SelectionFilterModel &) = delete;
  SelectionFilterModel (SelectionFilterModel &&) = delete;
  SelectionFilterModel &
  operator = (const SelectionFilterModel &) = delete;
  SelectionFilterModel &
  operator = (SelectionFilterModel &&) = delete;
  ~SelectionFilterModel () = delete;
public:

  static peel::RefPtr<SelectionFilterModel>
  create (SelectionModel *model) noexcept
  {
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (model);
    ::GtkSelectionFilterModel *_peel_return = gtk_selection_filter_model_new (_peel_model);
    peel_assume (_peel_return);
    return peel::RefPtr<SelectionFilterModel>::adopt_ref (reinterpret_cast<SelectionFilterModel *> (_peel_return));
  }

  SelectionModel *
  get_model () noexcept
  {
    ::GtkSelectionFilterModel *_peel_this = reinterpret_cast<::GtkSelectionFilterModel *> (this);
    ::GtkSelectionModel *_peel_return = gtk_selection_filter_model_get_model (_peel_this);
    return reinterpret_cast<SelectionModel *> (_peel_return);
  }

  void
  set_model (SelectionModel *model) noexcept
  {
    ::GtkSelectionFilterModel *_peel_this = reinterpret_cast<::GtkSelectionFilterModel *> (this);
    ::GtkSelectionModel *_peel_model = reinterpret_cast<::GtkSelectionModel *> (model);
    gtk_selection_filter_model_set_model (_peel_this, _peel_model);
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<SelectionModel>
  prop_model ()
  {
    return peel::Property<SelectionModel> { "model" };
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

  static_assert (sizeof (Class) == sizeof (::GtkSelectionFilterModelClass),
                 "SelectionFilterModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSelectionFilterModelClass),
                 "SelectionFilterModel::Class align mismatch");
}; /* class SelectionFilterModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
