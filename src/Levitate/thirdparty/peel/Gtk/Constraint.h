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

peel_begin_header

namespace peel
{
namespace Gtk
{
class Constraint;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Constraint> ()
{
  return gtk_constraint_get_type ();
}


namespace Gtk
{
class Constraint : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Constraint () = delete;
  Constraint (const Constraint &) = delete;
  Constraint (Constraint &&) = delete;
  Constraint &
  operator = (const Constraint &) = delete;
  Constraint &
  operator = (Constraint &&) = delete;
  ~Constraint () = delete;
public:
  class /* interface */ Target;
  enum class Attribute : std::underlying_type<::GtkConstraintAttribute>::type;
  enum class Relation : std::underlying_type<::GtkConstraintRelation>::type;
  enum class Strength : std::underlying_type<::GtkConstraintStrength>::type;
  enum class VflParserError : std::underlying_type<::GtkConstraintVflParserError>::type;

  static peel::RefPtr<Constraint>
  create (Constraint::Target *target, Constraint::Attribute target_attribute, Constraint::Relation relation, Constraint::Target *source, Constraint::Attribute source_attribute, double multiplier, double constant, int strength) noexcept
  {
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::GtkConstraintAttribute _peel_target_attribute = static_cast<::GtkConstraintAttribute> (target_attribute);
    ::GtkConstraintRelation _peel_relation = static_cast<::GtkConstraintRelation> (relation);
    ::gpointer _peel_source = reinterpret_cast<::gpointer> (source);
    ::GtkConstraintAttribute _peel_source_attribute = static_cast<::GtkConstraintAttribute> (source_attribute);
    ::GtkConstraint *_peel_return = gtk_constraint_new (_peel_target, _peel_target_attribute, _peel_relation, _peel_source, _peel_source_attribute, multiplier, constant, strength);
    peel_assume (_peel_return);
    return peel::RefPtr<Constraint>::adopt_ref (reinterpret_cast<Constraint *> (_peel_return));
  }

  static peel::RefPtr<Constraint>
  create_constant (Constraint::Target *target, Constraint::Attribute target_attribute, Constraint::Relation relation, double constant, int strength) noexcept
  {
    ::gpointer _peel_target = reinterpret_cast<::gpointer> (target);
    ::GtkConstraintAttribute _peel_target_attribute = static_cast<::GtkConstraintAttribute> (target_attribute);
    ::GtkConstraintRelation _peel_relation = static_cast<::GtkConstraintRelation> (relation);
    ::GtkConstraint *_peel_return = gtk_constraint_new_constant (_peel_target, _peel_target_attribute, _peel_relation, constant, strength);
    peel_assume (_peel_return);
    return peel::RefPtr<Constraint>::adopt_ref (reinterpret_cast<Constraint *> (_peel_return));
  }

  double
  get_constant () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    return gtk_constraint_get_constant (_peel_this);
  }

  double
  get_multiplier () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    return gtk_constraint_get_multiplier (_peel_this);
  }

  Constraint::Relation
  get_relation () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    ::GtkConstraintRelation _peel_return = gtk_constraint_get_relation (_peel_this);
    return static_cast<Constraint::Relation> (_peel_return);
  }

  Constraint::Target *
  get_source () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    ::GtkConstraintTarget *_peel_return = gtk_constraint_get_source (_peel_this);
    return reinterpret_cast<Constraint::Target *> (_peel_return);
  }

  Constraint::Attribute
  get_source_attribute () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    ::GtkConstraintAttribute _peel_return = gtk_constraint_get_source_attribute (_peel_this);
    return static_cast<Constraint::Attribute> (_peel_return);
  }

  int
  get_strength () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    return gtk_constraint_get_strength (_peel_this);
  }

  Constraint::Target *
  get_target () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    ::GtkConstraintTarget *_peel_return = gtk_constraint_get_target (_peel_this);
    return reinterpret_cast<Constraint::Target *> (_peel_return);
  }

  Constraint::Attribute
  get_target_attribute () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    ::GtkConstraintAttribute _peel_return = gtk_constraint_get_target_attribute (_peel_this);
    return static_cast<Constraint::Attribute> (_peel_return);
  }

  bool
  is_attached () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    gboolean _peel_return = gtk_constraint_is_attached (_peel_this);
    return !!_peel_return;
  }

  bool
  is_constant () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    gboolean _peel_return = gtk_constraint_is_constant (_peel_this);
    return !!_peel_return;
  }

  bool
  is_required () noexcept
  {
    ::GtkConstraint *_peel_this = reinterpret_cast<::GtkConstraint *> (this);
    gboolean _peel_return = gtk_constraint_is_required (_peel_this);
    return !!_peel_return;
  }

  static peel::Property<double>
  prop_constant ()
  {
    return peel::Property<double> { "constant" };
  }

  static peel::Property<double>
  prop_multiplier ()
  {
    return peel::Property<double> { "multiplier" };
  }

  static peel::Property<Constraint::Relation>
  prop_relation ()
  {
    return peel::Property<Constraint::Relation> { "relation" };
  }

  static peel::Property<Constraint::Target>
  prop_source ()
  {
    return peel::Property<Constraint::Target> { "source" };
  }

  static peel::Property<Constraint::Attribute>
  prop_source_attribute ()
  {
    return peel::Property<Constraint::Attribute> { "source-attribute" };
  }

  static peel::Property<int>
  prop_strength ()
  {
    return peel::Property<int> { "strength" };
  }

  static peel::Property<Constraint::Target>
  prop_target ()
  {
    return peel::Property<Constraint::Target> { "target" };
  }

  static peel::Property<Constraint::Attribute>
  prop_target_attribute ()
  {
    return peel::Property<Constraint::Attribute> { "target-attribute" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkConstraintClass),
                 "Constraint::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkConstraintClass),
                 "Constraint::Class align mismatch");
}; /* class Constraint */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
