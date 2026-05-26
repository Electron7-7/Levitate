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
#include <peel/Gtk/SelectionModel.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class MultiSelection;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MultiSelection> ()
{
  return gtk_multi_selection_get_type ();
}


namespace Gtk
{
class MultiSelection : public SelectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel, SelectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MultiSelection () = delete;
  MultiSelection (const MultiSelection &) = delete;
  MultiSelection (MultiSelection &&) = delete;
  MultiSelection &
  operator = (const MultiSelection &) = delete;
  MultiSelection &
  operator = (MultiSelection &&) = delete;
  ~MultiSelection () = delete;
public:

  static peel::RefPtr<MultiSelection>
  create (peel::RefPtr<Gio::ListModel> model) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkMultiSelection *_peel_return = gtk_multi_selection_new (_peel_model);
    peel_assume (_peel_return);
    return peel::RefPtr<MultiSelection>::adopt_ref (reinterpret_cast<MultiSelection *> (_peel_return));
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkMultiSelection *_peel_this = reinterpret_cast<::GtkMultiSelection *> (this);
    ::GListModel *_peel_return = gtk_multi_selection_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkMultiSelection *_peel_this = reinterpret_cast<::GtkMultiSelection *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_multi_selection_set_model (_peel_this, _peel_model);
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

  static_assert (sizeof (Class) == sizeof (::GtkMultiSelectionClass),
                 "MultiSelection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMultiSelectionClass),
                 "MultiSelection::Class align mismatch");
}; /* class MultiSelection */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
