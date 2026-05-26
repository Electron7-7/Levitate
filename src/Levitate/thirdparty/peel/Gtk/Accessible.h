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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
class ATContext;
class /* interface */ Accessible;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible> ()
{
  return gtk_accessible_get_type ();
}


namespace Gtk
{
class /* interface */ Accessible : public GObject::Object
/* requires GObject::Object */
{
private:
  Accessible () = delete;
  Accessible (const Accessible &) = delete;
  Accessible (Accessible &&) = delete;

  Accessible &
  operator = (const Accessible &) = delete;
  Accessible &
  operator = (Accessible &&) = delete;

protected:
  ~Accessible () = default;

public:
  enum class AnnouncementPriority : std::underlying_type<::GtkAccessibleAnnouncementPriority>::type;
  enum class Autocomplete : std::underlying_type<::GtkAccessibleAutocomplete>::type;
  enum class InvalidState : std::underlying_type<::GtkAccessibleInvalidState>::type;
  enum class PlatformState : std::underlying_type<::GtkAccessiblePlatformState>::type;
  enum class Property : std::underlying_type<::GtkAccessibleProperty>::type;
  enum class Relation : std::underlying_type<::GtkAccessibleRelation>::type;
  enum class Role : std::underlying_type<::GtkAccessibleRole>::type;
  enum class Sort : std::underlying_type<::GtkAccessibleSort>::type;
  enum class State : std::underlying_type<::GtkAccessibleState>::type;
  enum class Tristate : std::underlying_type<::GtkAccessibleTristate>::type;

  peel_nonnull_args (2)
  void
  announce (const char *message, Accessible::AnnouncementPriority priority) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleAnnouncementPriority _peel_priority = static_cast<::GtkAccessibleAnnouncementPriority> (priority);
    gtk_accessible_announce (_peel_this, message, _peel_priority);
  }

  peel::String
  get_accessible_id () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    char *_peel_return = gtk_accessible_get_accessible_id (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<Accessible>
  get_accessible_parent () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = gtk_accessible_get_accessible_parent (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  Accessible::Role
  get_accessible_role () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleRole _peel_return = gtk_accessible_get_accessible_role (_peel_this);
    return static_cast<Accessible::Role> (_peel_return);
  }

  peel::RefPtr<ATContext>
  get_at_context () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkATContext *_peel_return = gtk_accessible_get_at_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ATContext>::adopt_ref (reinterpret_cast<ATContext *> (_peel_return));
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  get_bounds (int *x, int *y, int *width, int *height) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    gboolean _peel_return = gtk_accessible_get_bounds (_peel_this, x, y, width, height);
    return !!_peel_return;
  }

  peel::RefPtr<Accessible>
  get_first_accessible_child () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = gtk_accessible_get_first_accessible_child (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  peel::RefPtr<Accessible>
  get_next_accessible_sibling () noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = gtk_accessible_get_next_accessible_sibling (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  bool
  get_platform_state (Accessible::PlatformState state) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gboolean _peel_return = gtk_accessible_get_platform_state (_peel_this, _peel_state);
    return !!_peel_return;
  }

  void
  reset_property (Accessible::Property property) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleProperty _peel_property = static_cast<::GtkAccessibleProperty> (property);
    gtk_accessible_reset_property (_peel_this, _peel_property);
  }

  void
  reset_relation (Accessible::Relation relation) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleRelation _peel_relation = static_cast<::GtkAccessibleRelation> (relation);
    gtk_accessible_reset_relation (_peel_this, _peel_relation);
  }

  void
  reset_state (Accessible::State state) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleState _peel_state = static_cast<::GtkAccessibleState> (state);
    gtk_accessible_reset_state (_peel_this, _peel_state);
  }

  void
  set_accessible_parent (Accessible *parent, Accessible *next_sibling) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_parent = reinterpret_cast<::GtkAccessible *> (parent);
    ::GtkAccessible *_peel_next_sibling = reinterpret_cast<::GtkAccessible *> (next_sibling);
    gtk_accessible_set_accessible_parent (_peel_this, _peel_parent, _peel_next_sibling);
  }

  void
  update_next_accessible_sibling (Accessible *new_sibling) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_new_sibling = reinterpret_cast<::GtkAccessible *> (new_sibling);
    gtk_accessible_update_next_accessible_sibling (_peel_this, _peel_new_sibling);
  }

  void
  update_platform_state (Accessible::PlatformState state) noexcept
  {
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gtk_accessible_update_platform_state (_peel_this, _peel_state);
  }

  /* Unsupported for now: update_property: varargs */

  void
  update_property_value (peel::ArrayRef<Accessible::Property> properties, peel::ArrayRef<const GObject::Value> values) noexcept
  {
    int _peel_n_properties;
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleProperty *_peel_properties = (_peel_n_properties = properties.size (), reinterpret_cast<::GtkAccessibleProperty *> (properties.data ()));
    const ::GValue *_peel_values = (_peel_n_properties = values.size (), reinterpret_cast<const ::GValue *> (values.data ()));
    gtk_accessible_update_property_value (_peel_this, _peel_n_properties, _peel_properties, _peel_values);
  }

  /* Unsupported for now: update_relation: varargs */

  void
  update_relation_value (peel::ArrayRef<Accessible::Relation> relations, peel::ArrayRef<const GObject::Value> values) noexcept
  {
    int _peel_n_relations;
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleRelation *_peel_relations = (_peel_n_relations = relations.size (), reinterpret_cast<::GtkAccessibleRelation *> (relations.data ()));
    const ::GValue *_peel_values = (_peel_n_relations = values.size (), reinterpret_cast<const ::GValue *> (values.data ()));
    gtk_accessible_update_relation_value (_peel_this, _peel_n_relations, _peel_relations, _peel_values);
  }

  /* Unsupported for now: update_state: varargs */

  void
  update_state_value (peel::ArrayRef<Accessible::State> states, peel::ArrayRef<const GObject::Value> values) noexcept
  {
    int _peel_n_states;
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessibleState *_peel_states = (_peel_n_states = states.size (), reinterpret_cast<::GtkAccessibleState *> (states.data ()));
    const ::GValue *_peel_values = (_peel_n_states = values.size (), reinterpret_cast<const ::GValue *> (values.data ()));
    gtk_accessible_update_state_value (_peel_this, _peel_n_states, _peel_states, _peel_values);
  }

  static peel::Property<Accessible::Role>
  prop_accessible_role ()
  {
    return peel::Property<Accessible::Role> { "accessible-role" };
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_accessible_id () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    char *_peel_return = _peel_iface->get_accessible_id (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  default_vfunc_get_accessible_id () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    char *_peel_return = _peel_iface->get_accessible_id (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<Accessible>
  parent_vfunc_get_accessible_parent () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_accessible_parent (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  peel::RefPtr<Accessible>
  default_vfunc_get_accessible_parent () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_accessible_parent (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<ATContext>
  parent_vfunc_get_at_context () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkATContext *_peel_return = _peel_iface->get_at_context (_peel_this);
    return peel::RefPtr<ATContext>::adopt_ref (reinterpret_cast<ATContext *> (_peel_return));
  }

  peel::RefPtr<ATContext>
  default_vfunc_get_at_context () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkATContext *_peel_return = _peel_iface->get_at_context (_peel_this);
    return peel::RefPtr<ATContext>::adopt_ref (reinterpret_cast<ATContext *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  parent_vfunc_get_bounds (int *x, int *y, int *width, int *height) noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    gboolean _peel_return = _peel_iface->get_bounds (_peel_this, x, y, width, height);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  default_vfunc_get_bounds (int *x, int *y, int *width, int *height) noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    gboolean _peel_return = _peel_iface->get_bounds (_peel_this, x, y, width, height);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<Accessible>
  parent_vfunc_get_first_accessible_child () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_first_accessible_child (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  peel::RefPtr<Accessible>
  default_vfunc_get_first_accessible_child () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_first_accessible_child (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<Accessible>
  parent_vfunc_get_next_accessible_sibling () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_next_accessible_sibling (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  peel::RefPtr<Accessible>
  default_vfunc_get_next_accessible_sibling () noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessible *_peel_return = _peel_iface->get_next_accessible_sibling (_peel_this);
    return peel::RefPtr<Accessible>::adopt_ref (reinterpret_cast<Accessible *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_get_platform_state (Accessible::PlatformState state) noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Accessible> ())->peek_parent ());
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gboolean _peel_return = _peel_iface->get_platform_state (_peel_this, _peel_state);
    return !!_peel_return;
  }

  bool
  default_vfunc_get_platform_state (Accessible::PlatformState state) noexcept
  {
    ::GtkAccessibleInterface *_peel_iface = reinterpret_cast<::GtkAccessibleInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Accessible> ()));
    ::GtkAccessible *_peel_this = reinterpret_cast<::GtkAccessible *> (this);
    ::GtkAccessiblePlatformState _peel_state = static_cast<::GtkAccessiblePlatformState> (state);
    gboolean _peel_return = _peel_iface->get_platform_state (_peel_this, _peel_state);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkAccessibleInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_accessible_id ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_accessible_id = +[] (::GtkAccessible *self) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_accessible_id ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_accessible_parent ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_accessible_parent = +[] (::GtkAccessible *self) -> ::GtkAccessible *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::RefPtr<Accessible> _peel_return = _peel_this->DerivedClass::vfunc_get_accessible_parent ();
        return reinterpret_cast<::GtkAccessible *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_at_context ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_at_context = +[] (::GtkAccessible *self) -> ::GtkATContext *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::RefPtr<ATContext> _peel_return = _peel_this->DerivedClass::vfunc_get_at_context ();
        return reinterpret_cast<::GtkATContext *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_bounds ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_bounds = +[] (::GtkAccessible *self, int *x, int *y, int *width, int *height) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_bounds (x, y, width, height);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_first_accessible_child ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_first_accessible_child = +[] (::GtkAccessible *self) -> ::GtkAccessible *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::RefPtr<Accessible> _peel_return = _peel_this->DerivedClass::vfunc_get_first_accessible_child ();
        return reinterpret_cast<::GtkAccessible *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_next_accessible_sibling ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_next_accessible_sibling = +[] (::GtkAccessible *self) -> ::GtkAccessible *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        peel::RefPtr<Accessible> _peel_return = _peel_this->DerivedClass::vfunc_get_next_accessible_sibling ();
        return reinterpret_cast<::GtkAccessible *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_platform_state ()
    {
      ::GtkAccessibleInterface *klass = reinterpret_cast<::GtkAccessibleInterface *> (this);
      klass->get_platform_state = +[] (::GtkAccessible *self, ::GtkAccessiblePlatformState state) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Accessible::PlatformState _peel_state = static_cast<Accessible::PlatformState> (state);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_platform_state (_peel_state);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkAccessibleInterface),
                 "Accessible::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkAccessibleInterface),
                 "Accessible::Iface align mismatch");
}; /* interface Accessible */
static_assert (sizeof (Accessible) == sizeof (GObject::Object),
               "Accessible size mismatch");
static_assert (alignof (Accessible) == alignof (GObject::Object),
               "Accessible align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ATContext.h>
