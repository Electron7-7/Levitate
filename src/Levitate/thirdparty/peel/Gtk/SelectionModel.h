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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/ListModel.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* record */ Bitset;
class /* interface */ SelectionModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SelectionModel> ()
{
  return gtk_selection_model_get_type ();
}


namespace Gtk
{
class /* interface */ SelectionModel : public Gio::ListModel
/* requires Gio::ListModel */
{
private:
  SelectionModel () = delete;
  SelectionModel (const SelectionModel &) = delete;
  SelectionModel (SelectionModel &&) = delete;

  SelectionModel &
  operator = (const SelectionModel &) = delete;
  SelectionModel &
  operator = (SelectionModel &&) = delete;

protected:
  ~SelectionModel () = default;

public:

  peel::RefPtr<Bitset>
  get_selection () noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_return = gtk_selection_model_get_selection (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  peel::RefPtr<Bitset>
  get_selection_in_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_return = gtk_selection_model_get_selection_in_range (_peel_this, position, n_items);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  bool
  is_selected (unsigned position) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = gtk_selection_model_is_selected (_peel_this, position);
    return !!_peel_return;
  }

  bool
  select_all () noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = gtk_selection_model_select_all (_peel_this);
    return !!_peel_return;
  }

  bool
  select_item (unsigned position, bool unselect_rest) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = gtk_selection_model_select_item (_peel_this, position, _peel_unselect_rest);
    return !!_peel_return;
  }

  bool
  select_range (unsigned position, unsigned n_items, bool unselect_rest) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = gtk_selection_model_select_range (_peel_this, position, n_items, _peel_unselect_rest);
    return !!_peel_return;
  }

  void
  selection_changed (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gtk_selection_model_selection_changed (_peel_this, position, n_items);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  set_selection (Bitset *selected, Bitset *mask) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_selected = reinterpret_cast<::GtkBitset *> (selected);
    ::GtkBitset *_peel_mask = reinterpret_cast<::GtkBitset *> (mask);
    gboolean _peel_return = gtk_selection_model_set_selection (_peel_this, _peel_selected, _peel_mask);
    return !!_peel_return;
  }

  bool
  unselect_all () noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = gtk_selection_model_unselect_all (_peel_this);
    return !!_peel_return;
  }

  bool
  unselect_item (unsigned position) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = gtk_selection_model_unselect_item (_peel_this, position);
    return !!_peel_return;
  }

  bool
  unselect_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = gtk_selection_model_unselect_range (_peel_this, position, n_items);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_selection_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SelectionModel, void (unsigned, unsigned)>::_peel_connect_by_name (this, "selection-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_selection_changed (HandlerObject *object, void (HandlerObject::*handler_method) (SelectionModel *, unsigned, unsigned), bool after = false) noexcept
  {
    return Signal<SelectionModel, void (unsigned, unsigned)>::_peel_connect_by_name (this, "selection-changed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel::RefPtr<Bitset>
  parent_vfunc_get_selection_in_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_return = _peel_iface->get_selection_in_range (_peel_this, position, n_items);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  peel::RefPtr<Bitset>
  default_vfunc_get_selection_in_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_return = _peel_iface->get_selection_in_range (_peel_this, position, n_items);
    peel_assume (_peel_return);
    return peel::RefPtr<Bitset>::adopt_ref (reinterpret_cast<Bitset *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_selected (unsigned position) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->is_selected (_peel_this, position);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_selected (unsigned position) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->is_selected (_peel_this, position);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_all () noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->select_all (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_select_all () noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->select_all (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_item (unsigned position, bool unselect_rest) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = _peel_iface->select_item (_peel_this, position, _peel_unselect_rest);
    return !!_peel_return;
  }

  bool
  default_vfunc_select_item (unsigned position, bool unselect_rest) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = _peel_iface->select_item (_peel_this, position, _peel_unselect_rest);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_select_range (unsigned position, unsigned n_items, bool unselect_rest) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = _peel_iface->select_range (_peel_this, position, n_items, _peel_unselect_rest);
    return !!_peel_return;
  }

  bool
  default_vfunc_select_range (unsigned position, unsigned n_items, bool unselect_rest) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_unselect_rest = static_cast<gboolean> (unselect_rest);
    gboolean _peel_return = _peel_iface->select_range (_peel_this, position, n_items, _peel_unselect_rest);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_set_selection (Bitset *selected, Bitset *mask) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_selected = reinterpret_cast<::GtkBitset *> (selected);
    ::GtkBitset *_peel_mask = reinterpret_cast<::GtkBitset *> (mask);
    gboolean _peel_return = _peel_iface->set_selection (_peel_this, _peel_selected, _peel_mask);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  default_vfunc_set_selection (Bitset *selected, Bitset *mask) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    ::GtkBitset *_peel_selected = reinterpret_cast<::GtkBitset *> (selected);
    ::GtkBitset *_peel_mask = reinterpret_cast<::GtkBitset *> (mask);
    gboolean _peel_return = _peel_iface->set_selection (_peel_this, _peel_selected, _peel_mask);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_unselect_all () noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_all (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_unselect_all () noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_all (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_unselect_item (unsigned position) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_item (_peel_this, position);
    return !!_peel_return;
  }

  bool
  default_vfunc_unselect_item (unsigned position) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_item (_peel_this, position);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_unselect_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SelectionModel> ())->peek_parent ());
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_range (_peel_this, position, n_items);
    return !!_peel_return;
  }

  bool
  default_vfunc_unselect_range (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSelectionModelInterface *_peel_iface = reinterpret_cast<::GtkSelectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SelectionModel> ()));
    ::GtkSelectionModel *_peel_this = reinterpret_cast<::GtkSelectionModel *> (this);
    gboolean _peel_return = _peel_iface->unselect_range (_peel_this, position, n_items);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkSelectionModelInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_selection_in_range ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->get_selection_in_range = +[] (::GtkSelectionModel *model, guint position, guint n_items) -> ::GtkBitset *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        peel::RefPtr<Bitset> _peel_return = _peel_this->DerivedClass::vfunc_get_selection_in_range (position, n_items);
        return reinterpret_cast<::GtkBitset *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_selected ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->is_selected = +[] (::GtkSelectionModel *model, guint position) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_selected (position);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_all ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->select_all = +[] (::GtkSelectionModel *model) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_all ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_item ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->select_item = +[] (::GtkSelectionModel *model, guint position, gboolean unselect_rest) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_unselect_rest = !!unselect_rest;
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_item (position, _peel_unselect_rest);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_select_range ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->select_range = +[] (::GtkSelectionModel *model, guint position, guint n_items, gboolean unselect_rest) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_unselect_rest = !!unselect_rest;
        bool _peel_return = _peel_this->DerivedClass::vfunc_select_range (position, n_items, _peel_unselect_rest);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_selection ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->set_selection = +[] (::GtkSelectionModel *model, ::GtkBitset *selected, ::GtkBitset *mask) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        Bitset *_peel_selected = reinterpret_cast<Bitset *> (selected);
        Bitset *_peel_mask = reinterpret_cast<Bitset *> (mask);
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_selection (_peel_selected, _peel_mask);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unselect_all ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->unselect_all = +[] (::GtkSelectionModel *model) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_unselect_all ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unselect_item ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->unselect_item = +[] (::GtkSelectionModel *model, guint position) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_unselect_item (position);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unselect_range ()
    {
      ::GtkSelectionModelInterface *klass = reinterpret_cast<::GtkSelectionModelInterface *> (this);
      klass->unselect_range = +[] (::GtkSelectionModel *model, guint position, guint n_items) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (model);
        bool _peel_return = _peel_this->DerivedClass::vfunc_unselect_range (position, n_items);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkSelectionModelInterface),
                 "SelectionModel::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkSelectionModelInterface),
                 "SelectionModel::Iface align mismatch");
}; /* interface SelectionModel */
static_assert (sizeof (SelectionModel) == sizeof (Gio::ListModel),
               "SelectionModel size mismatch");
static_assert (alignof (SelectionModel) == alignof (Gio::ListModel),
               "SelectionModel align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Bitset.h>
