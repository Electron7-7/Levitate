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
class FlattenListModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FlattenListModel> ()
{
  return gtk_flatten_list_model_get_type ();
}


namespace Gtk
{
class FlattenListModel : public SectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FlattenListModel () = delete;
  FlattenListModel (const FlattenListModel &) = delete;
  FlattenListModel (FlattenListModel &&) = delete;
  FlattenListModel &
  operator = (const FlattenListModel &) = delete;
  FlattenListModel &
  operator = (FlattenListModel &&) = delete;
  ~FlattenListModel () = delete;
public:

  static peel::RefPtr<FlattenListModel>
  create (peel::RefPtr<Gio::ListModel> model) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkFlattenListModel *_peel_return = gtk_flatten_list_model_new (_peel_model);
    peel_assume (_peel_return);
    return peel::RefPtr<FlattenListModel>::adopt_ref (reinterpret_cast<FlattenListModel *> (_peel_return));
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkFlattenListModel *_peel_this = reinterpret_cast<::GtkFlattenListModel *> (this);
    ::GListModel *_peel_return = gtk_flatten_list_model_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  Gio::ListModel *
  get_model_for_item (unsigned position) noexcept
  {
    ::GtkFlattenListModel *_peel_this = reinterpret_cast<::GtkFlattenListModel *> (this);
    ::GListModel *_peel_return = gtk_flatten_list_model_get_model_for_item (_peel_this, position);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkFlattenListModel *_peel_this = reinterpret_cast<::GtkFlattenListModel *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_flatten_list_model_set_model (_peel_this, _peel_model);
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

  static_assert (sizeof (Class) == sizeof (::GtkFlattenListModelClass),
                 "FlattenListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFlattenListModelClass),
                 "FlattenListModel::Class align mismatch");
}; /* class FlattenListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
