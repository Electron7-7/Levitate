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
#include <peel/GObject/Object.h>
#include <peel/Gtk/CellArea.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellArea;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellArea::Context> ()
{
  return gtk_cell_area_context_get_type ();
}


namespace Gtk
{
class CellArea::Context : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Context () = delete;
  Context (const Context &) = delete;
  Context (Context &&) = delete;
  Context &
  operator = (const Context &) = delete;
  Context &
  operator = (Context &&) = delete;
protected:
  ~Context () = default;
public:

  void
  allocate (int width, int height) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_allocate (_peel_this, width, height);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_allocation (int *width, int *height) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_get_allocation (_peel_this, width, height);
  }

  peel_returns_nonnull
  CellArea *
  get_area () noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    ::GtkCellArea *_peel_return = gtk_cell_area_context_get_area (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<CellArea *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_preferred_height (int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_get_preferred_height (_peel_this, minimum_height, natural_height);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_preferred_height_for_width (int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_get_preferred_height_for_width (_peel_this, width, minimum_height, natural_height);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_preferred_width (int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_get_preferred_width (_peel_this, minimum_width, natural_width);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_preferred_width_for_height (int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_get_preferred_width_for_height (_peel_this, height, minimum_width, natural_width);
  }

  void
  push_preferred_height (int minimum_height, int natural_height) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_push_preferred_height (_peel_this, minimum_height, natural_height);
  }

  void
  push_preferred_width (int minimum_width, int natural_width) noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_push_preferred_width (_peel_this, minimum_width, natural_width);
  }

  void
  reset () noexcept
  {
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    gtk_cell_area_context_reset (_peel_this);
  }

  static peel::Property<CellArea>
  prop_area ()
  {
    return peel::Property<CellArea> { "area" };
  }

  static peel::Property<int>
  prop_minimum_height ()
  {
    return peel::Property<int> { "minimum-height" };
  }

  static peel::Property<int>
  prop_minimum_width ()
  {
    return peel::Property<int> { "minimum-width" };
  }

  static peel::Property<int>
  prop_natural_height ()
  {
    return peel::Property<int> { "natural-height" };
  }

  static peel::Property<int>
  prop_natural_width ()
  {
    return peel::Property<int> { "natural-width" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Context> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_allocate (int width, int height) noexcept
  {
    ::GtkCellAreaContextClass *_peel_class = reinterpret_cast<::GtkCellAreaContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    _peel_class->allocate (_peel_this, width, height);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4)
  void
  parent_vfunc_get_preferred_height_for_width (int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellAreaContextClass *_peel_class = reinterpret_cast<::GtkCellAreaContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    _peel_class->get_preferred_height_for_width (_peel_this, width, minimum_height, natural_height);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4)
  void
  parent_vfunc_get_preferred_width_for_height (int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellAreaContextClass *_peel_class = reinterpret_cast<::GtkCellAreaContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    _peel_class->get_preferred_width_for_height (_peel_this, height, minimum_width, natural_width);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_reset () noexcept
  {
    ::GtkCellAreaContextClass *_peel_class = reinterpret_cast<::GtkCellAreaContextClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellAreaContext *_peel_this = reinterpret_cast<::GtkCellAreaContext *> (this);
    _peel_class->reset (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellAreaContextClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_allocate ()
    {
      ::GtkCellAreaContextClass *klass = reinterpret_cast<::GtkCellAreaContextClass *> (this);
      klass->allocate = +[] (::GtkCellAreaContext *context, int width, int height) -> void
      {
        CellArea::Context *_peel_this = reinterpret_cast<CellArea::Context *> (context);
        _peel_this->DerivedClass::vfunc_allocate (width, height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_height_for_width ()
    {
      ::GtkCellAreaContextClass *klass = reinterpret_cast<::GtkCellAreaContextClass *> (this);
      klass->get_preferred_height_for_width = +[] (::GtkCellAreaContext *context, int width, int *minimum_height, int *natural_height) -> void
      {
        CellArea::Context *_peel_this = reinterpret_cast<CellArea::Context *> (context);
        _peel_this->DerivedClass::vfunc_get_preferred_height_for_width (width, minimum_height, natural_height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_width_for_height ()
    {
      ::GtkCellAreaContextClass *klass = reinterpret_cast<::GtkCellAreaContextClass *> (this);
      klass->get_preferred_width_for_height = +[] (::GtkCellAreaContext *context, int height, int *minimum_width, int *natural_width) -> void
      {
        CellArea::Context *_peel_this = reinterpret_cast<CellArea::Context *> (context);
        _peel_this->DerivedClass::vfunc_get_preferred_width_for_height (height, minimum_width, natural_width);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reset ()
    {
      ::GtkCellAreaContextClass *klass = reinterpret_cast<::GtkCellAreaContextClass *> (this);
      klass->reset = +[] (::GtkCellAreaContext *context) -> void
      {
        CellArea::Context *_peel_this = reinterpret_cast<CellArea::Context *> (context);
        _peel_this->DerivedClass::vfunc_reset ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkCellAreaContextClass),
                 "CellArea::Context::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCellAreaContextClass),
                 "CellArea::Context::Class align mismatch");
}; /* class CellArea::Context */

static_assert (sizeof (CellArea::Context) == sizeof (::GtkCellAreaContext),
               "CellArea::Context size mismatch");
static_assert (alignof (CellArea::Context) == alignof (::GtkCellAreaContext),
               "CellArea::Context align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
