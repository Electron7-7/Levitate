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
class SliceListModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SliceListModel> ()
{
  return gtk_slice_list_model_get_type ();
}


namespace Gtk
{
class SliceListModel : public SectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SliceListModel () = delete;
  SliceListModel (const SliceListModel &) = delete;
  SliceListModel (SliceListModel &&) = delete;
  SliceListModel &
  operator = (const SliceListModel &) = delete;
  SliceListModel &
  operator = (SliceListModel &&) = delete;
  ~SliceListModel () = delete;
public:

  static peel::RefPtr<SliceListModel>
  create (peel::RefPtr<Gio::ListModel> model, unsigned offset, unsigned size) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkSliceListModel *_peel_return = gtk_slice_list_model_new (_peel_model, offset, size);
    peel_assume (_peel_return);
    return peel::RefPtr<SliceListModel>::adopt_ref (reinterpret_cast<SliceListModel *> (_peel_return));
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    ::GListModel *_peel_return = gtk_slice_list_model_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  unsigned
  get_offset () noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    return gtk_slice_list_model_get_offset (_peel_this);
  }

  unsigned
  get_size () noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    return gtk_slice_list_model_get_size (_peel_this);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_slice_list_model_set_model (_peel_this, _peel_model);
  }

  void
  set_offset (unsigned offset) noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    gtk_slice_list_model_set_offset (_peel_this, offset);
  }

  void
  set_size (unsigned size) noexcept
  {
    ::GtkSliceListModel *_peel_this = reinterpret_cast<::GtkSliceListModel *> (this);
    gtk_slice_list_model_set_size (_peel_this, size);
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
  prop_offset ()
  {
    return peel::Property<unsigned> { "offset" };
  }

  static peel::Property<unsigned>
  prop_size ()
  {
    return peel::Property<unsigned> { "size" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkSliceListModelClass),
                 "SliceListModel::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSliceListModelClass),
                 "SliceListModel::Class align mismatch");
}; /* class SliceListModel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
