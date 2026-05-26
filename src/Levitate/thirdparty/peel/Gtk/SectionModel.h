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
class /* interface */ SectionModel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SectionModel> ()
{
  return gtk_section_model_get_type ();
}


namespace Gtk
{
class /* interface */ SectionModel : public Gio::ListModel
/* requires Gio::ListModel */
{
private:
  SectionModel () = delete;
  SectionModel (const SectionModel &) = delete;
  SectionModel (SectionModel &&) = delete;

  SectionModel &
  operator = (const SectionModel &) = delete;
  SectionModel &
  operator = (SectionModel &&) = delete;

protected:
  ~SectionModel () = default;

public:

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (3, 4)
  void
  get_section (unsigned position, unsigned *out_start, unsigned *out_end) noexcept
  {
    ::GtkSectionModel *_peel_this = reinterpret_cast<::GtkSectionModel *> (this);
    guint *_peel_out_start = reinterpret_cast<guint *> (out_start);
    guint *_peel_out_end = reinterpret_cast<guint *> (out_end);
    gtk_section_model_get_section (_peel_this, position, _peel_out_start, _peel_out_end);
  }

  void
  sections_changed (unsigned position, unsigned n_items) noexcept
  {
    ::GtkSectionModel *_peel_this = reinterpret_cast<::GtkSectionModel *> (this);
    gtk_section_model_sections_changed (_peel_this, position, n_items);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_sections_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SectionModel, void (unsigned, unsigned)>::_peel_connect_by_name (this, "sections-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_sections_changed (HandlerObject *object, void (HandlerObject::*handler_method) (SectionModel *, unsigned, unsigned), bool after = false) noexcept
  {
    return Signal<SectionModel, void (unsigned, unsigned)>::_peel_connect_by_name (this, "sections-changed", object, handler_method, after);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (3, 4)
  void
  parent_vfunc_get_section (unsigned position, unsigned *out_start, unsigned *out_end) noexcept
  {
    ::GtkSectionModelInterface *_peel_iface = reinterpret_cast<::GtkSectionModelInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SectionModel> ())->peek_parent ());
    ::GtkSectionModel *_peel_this = reinterpret_cast<::GtkSectionModel *> (this);
    guint *_peel_out_start = reinterpret_cast<guint *> (out_start);
    guint *_peel_out_end = reinterpret_cast<guint *> (out_end);
    _peel_iface->get_section (_peel_this, position, _peel_out_start, _peel_out_end);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (3, 4)
  void
  default_vfunc_get_section (unsigned position, unsigned *out_start, unsigned *out_end) noexcept
  {
    ::GtkSectionModelInterface *_peel_iface = reinterpret_cast<::GtkSectionModelInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SectionModel> ()));
    ::GtkSectionModel *_peel_this = reinterpret_cast<::GtkSectionModel *> (this);
    guint *_peel_out_start = reinterpret_cast<guint *> (out_start);
    guint *_peel_out_end = reinterpret_cast<guint *> (out_end);
    _peel_iface->get_section (_peel_this, position, _peel_out_start, _peel_out_end);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkSectionModelInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_section ()
    {
      ::GtkSectionModelInterface *klass = reinterpret_cast<::GtkSectionModelInterface *> (this);
      klass->get_section = +[] (::GtkSectionModel *self, guint position, guint *out_start, guint *out_end) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_get_section (position, out_start, out_end);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkSectionModelInterface),
                 "SectionModel::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkSectionModelInterface),
                 "SectionModel::Iface align mismatch");
}; /* interface SectionModel */
static_assert (sizeof (SectionModel) == sizeof (Gio::ListModel),
               "SectionModel size mismatch");
static_assert (alignof (SectionModel) == alignof (Gio::ListModel),
               "SectionModel align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
