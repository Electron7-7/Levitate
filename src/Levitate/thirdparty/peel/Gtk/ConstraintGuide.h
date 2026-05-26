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
#include <peel/Gtk/Constraint.h>
#include <peel/Gtk/ConstraintTarget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ConstraintGuide;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ConstraintGuide> ()
{
  return gtk_constraint_guide_get_type ();
}


namespace Gtk
{
class ConstraintGuide : public Constraint::Target
/* non-derivable */
/* extends GObject::Object */
/* implements Constraint::Target */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConstraintGuide () = delete;
  ConstraintGuide (const ConstraintGuide &) = delete;
  ConstraintGuide (ConstraintGuide &&) = delete;
  ConstraintGuide &
  operator = (const ConstraintGuide &) = delete;
  ConstraintGuide &
  operator = (ConstraintGuide &&) = delete;
  ~ConstraintGuide () = delete;
public:

  static peel::RefPtr<ConstraintGuide>
  create () noexcept
  {
    ::GtkConstraintGuide *_peel_return = gtk_constraint_guide_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ConstraintGuide>::adopt_ref (reinterpret_cast<ConstraintGuide *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_max_size (int *width, int *height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_get_max_size (_peel_this, width, height);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_min_size (int *width, int *height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_get_min_size (_peel_this, width, height);
  }

  const char *
  get_name () noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    return gtk_constraint_guide_get_name (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_nat_size (int *width, int *height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_get_nat_size (_peel_this, width, height);
  }

  Constraint::Strength
  get_strength () noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    ::GtkConstraintStrength _peel_return = gtk_constraint_guide_get_strength (_peel_this);
    return static_cast<Constraint::Strength> (_peel_return);
  }

  void
  set_max_size (int width, int height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_set_max_size (_peel_this, width, height);
  }

  void
  set_min_size (int width, int height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_set_min_size (_peel_this, width, height);
  }

  void
  set_name (const char *name) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_set_name (_peel_this, name);
  }

  void
  set_nat_size (int width, int height) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    gtk_constraint_guide_set_nat_size (_peel_this, width, height);
  }

  void
  set_strength (Constraint::Strength strength) noexcept
  {
    ::GtkConstraintGuide *_peel_this = reinterpret_cast<::GtkConstraintGuide *> (this);
    ::GtkConstraintStrength _peel_strength = static_cast<::GtkConstraintStrength> (strength);
    gtk_constraint_guide_set_strength (_peel_this, _peel_strength);
  }

  static peel::Property<int>
  prop_max_height ()
  {
    return peel::Property<int> { "max-height" };
  }

  static peel::Property<int>
  prop_max_width ()
  {
    return peel::Property<int> { "max-width" };
  }

  static peel::Property<int>
  prop_min_height ()
  {
    return peel::Property<int> { "min-height" };
  }

  static peel::Property<int>
  prop_min_width ()
  {
    return peel::Property<int> { "min-width" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<int>
  prop_nat_height ()
  {
    return peel::Property<int> { "nat-height" };
  }

  static peel::Property<int>
  prop_nat_width ()
  {
    return peel::Property<int> { "nat-width" };
  }

  static peel::Property<Constraint::Strength>
  prop_strength ()
  {
    return peel::Property<Constraint::Strength> { "strength" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkConstraintGuideClass),
                 "ConstraintGuide::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkConstraintGuideClass),
                 "ConstraintGuide::Class align mismatch");
}; /* class ConstraintGuide */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
