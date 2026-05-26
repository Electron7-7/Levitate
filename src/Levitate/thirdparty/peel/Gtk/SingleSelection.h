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
class SingleSelection;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SingleSelection> ()
{
  return gtk_single_selection_get_type ();
}


namespace Gtk
{
class SingleSelection : public SelectionModel
/* non-derivable */
/* extends GObject::Object */
/* implements Gio::ListModel, SectionModel, SelectionModel */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SingleSelection () = delete;
  SingleSelection (const SingleSelection &) = delete;
  SingleSelection (SingleSelection &&) = delete;
  SingleSelection &
  operator = (const SingleSelection &) = delete;
  SingleSelection &
  operator = (SingleSelection &&) = delete;
  ~SingleSelection () = delete;
public:

  static peel::RefPtr<SingleSelection>
  create (peel::RefPtr<Gio::ListModel> model) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (std::move (model).release_ref ());
    ::GtkSingleSelection *_peel_return = gtk_single_selection_new (_peel_model);
    peel_assume (_peel_return);
    return peel::RefPtr<SingleSelection>::adopt_ref (reinterpret_cast<SingleSelection *> (_peel_return));
  }

  bool
  get_autoselect () noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    gboolean _peel_return = gtk_single_selection_get_autoselect (_peel_this);
    return !!_peel_return;
  }

  bool
  get_can_unselect () noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    gboolean _peel_return = gtk_single_selection_get_can_unselect (_peel_this);
    return !!_peel_return;
  }

  Gio::ListModel *
  get_model () noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    ::GListModel *_peel_return = gtk_single_selection_get_model (_peel_this);
    return reinterpret_cast<Gio::ListModel *> (_peel_return);
  }

  unsigned
  get_selected () noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    return gtk_single_selection_get_selected (_peel_this);
  }

  GObject::Object *
  get_selected_item () noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    ::gpointer _peel_return = gtk_single_selection_get_selected_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  void
  set_autoselect (bool autoselect) noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    gboolean _peel_autoselect = static_cast<gboolean> (autoselect);
    gtk_single_selection_set_autoselect (_peel_this, _peel_autoselect);
  }

  void
  set_can_unselect (bool can_unselect) noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    gboolean _peel_can_unselect = static_cast<gboolean> (can_unselect);
    gtk_single_selection_set_can_unselect (_peel_this, _peel_can_unselect);
  }

  void
  set_model (Gio::ListModel *model) noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    gtk_single_selection_set_model (_peel_this, _peel_model);
  }

  void
  set_selected (unsigned position) noexcept
  {
    ::GtkSingleSelection *_peel_this = reinterpret_cast<::GtkSingleSelection *> (this);
    gtk_single_selection_set_selected (_peel_this, position);
  }

  static peel::Property<bool>
  prop_autoselect ()
  {
    return peel::Property<bool> { "autoselect" };
  }

  static peel::Property<bool>
  prop_can_unselect ()
  {
    return peel::Property<bool> { "can-unselect" };
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
  prop_selected ()
  {
    return peel::Property<unsigned> { "selected" };
  }

  static peel::Property<GObject::Object>
  prop_selected_item ()
  {
    return peel::Property<GObject::Object> { "selected-item" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkSingleSelectionClass),
                 "SingleSelection::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkSingleSelectionClass),
                 "SingleSelection::Class align mismatch");
}; /* class SingleSelection */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/ListModel.h>
