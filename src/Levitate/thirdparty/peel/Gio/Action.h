#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ Action;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Action> ()
{
  return g_action_get_type ();
}


namespace Gio
{
class /* interface */ Action : public GObject::Object
/* requires GObject::Object */
{
private:
  Action () = delete;
  Action (const Action &) = delete;
  Action (Action &&) = delete;

  Action &
  operator = (const Action &) = delete;
  Action &
  operator = (Action &&) = delete;

protected:
  ~Action () = default;

public:

  peel_nonnull_args (1)
  static bool
  name_is_valid (const char *action_name) noexcept
  {
    gboolean _peel_return = g_action_name_is_valid (action_name);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (1)
  static bool
  parse_detailed_name (const char *detailed_name, peel::String *action_name, peel::RefPtr<GLib::Variant> *target_value, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gchar *_peel_action_name;
    ::GVariant *_peel_target_value;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_action_parse_detailed_name (detailed_name, action_name ? &_peel_action_name : nullptr, target_value ? &_peel_target_value : nullptr, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        if (action_name)
          *action_name = peel::String::adopt_string (_peel_action_name);
        if (target_value)
          *target_value = peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_target_value));
      }
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (1)
  static peel::String
  print_detailed_name (const char *action_name, GLib::Variant *target_value) noexcept
  {
    ::GVariant *_peel_target_value = reinterpret_cast<::GVariant *> (target_value);
    gchar *_peel_return = g_action_print_detailed_name (action_name, _peel_target_value);
    return peel::String::adopt_string (_peel_return);
  }

  void
  activate (peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    g_action_activate (_peel_this, _peel_parameter);
  }

  void
  change_state (peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_action_change_state (_peel_this, _peel_value);
  }

  bool
  get_enabled () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    gboolean _peel_return = g_action_get_enabled (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    return g_action_get_name (_peel_this);
  }

  const GLib::Variant::Type *
  get_parameter_type () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = g_action_get_parameter_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  peel::RefPtr<GLib::Variant>
  get_state () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = g_action_get_state (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::RefPtr<GLib::Variant>
  get_state_hint () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = g_action_get_state_hint (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  const GLib::Variant::Type *
  get_state_type () noexcept
  {
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = g_action_get_state_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  static peel::Property<bool>
  prop_enabled ()
  {
    return peel::Property<bool> { "enabled" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_parameter_type ()
  {
    return peel::Property<GLib::Variant::Type> { "parameter-type" };
  }

  static peel::Property<GLib::Variant>
  prop_state ()
  {
    return peel::Property<GLib::Variant> { "state" };
  }

  static peel::Property<GLib::Variant::Type>
  prop_state_type ()
  {
    return peel::Property<GLib::Variant::Type> { "state-type" };
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate (peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    _peel_iface->activate (_peel_this, _peel_parameter);
  }

  void
  default_vfunc_activate (peel::FloatPtr<GLib::Variant> parameter) noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_parameter = reinterpret_cast<::GVariant *> (std::move (parameter).release_floating_ptr ());
    _peel_iface->activate (_peel_this, _peel_parameter);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_change_state (peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    _peel_iface->change_state (_peel_this, _peel_value);
  }

  void
  default_vfunc_change_state (peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    _peel_iface->change_state (_peel_this, _peel_value);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_get_enabled () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    gboolean _peel_return = _peel_iface->get_enabled (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_get_enabled () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    gboolean _peel_return = _peel_iface->get_enabled (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_name () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    return _peel_iface->get_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  default_vfunc_get_name () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    return _peel_iface->get_name (_peel_this);
  }

  template<typename DerivedClass>
  const GLib::Variant::Type *
  parent_vfunc_get_parameter_type () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_parameter_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  const GLib::Variant::Type *
  default_vfunc_get_parameter_type () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_parameter_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_state () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = _peel_iface->get_state (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::RefPtr<GLib::Variant>
  default_vfunc_get_state () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = _peel_iface->get_state (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Variant>
  parent_vfunc_get_state_hint () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = _peel_iface->get_state_hint (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::RefPtr<GLib::Variant>
  default_vfunc_get_state_hint () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    ::GVariant *_peel_return = _peel_iface->get_state_hint (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  const GLib::Variant::Type *
  parent_vfunc_get_state_type () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Action> ())->peek_parent ());
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_state_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  const GLib::Variant::Type *
  default_vfunc_get_state_type () noexcept
  {
    ::GActionInterface *_peel_iface = reinterpret_cast<::GActionInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Action> ()));
    ::GAction *_peel_this = reinterpret_cast<::GAction *> (this);
    const ::GVariantType *_peel_return = _peel_iface->get_state_type (_peel_this);
    return reinterpret_cast<const GLib::Variant::Type *> (_peel_return);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GActionInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->activate = +[] (::GAction *action, ::GVariant *parameter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        peel::FloatPtr<GLib::Variant> _peel_parameter = peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (parameter));
        _peel_this->DerivedClass::vfunc_activate (std::move (_peel_parameter));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_change_state ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->change_state = +[] (::GAction *action, ::GVariant *value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        peel::FloatPtr<GLib::Variant> _peel_value = peel::FloatPtr<GLib::Variant> (reinterpret_cast<GLib::Variant *> (value));
        _peel_this->DerivedClass::vfunc_change_state (std::move (_peel_value));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_enabled ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_enabled = +[] (::GAction *action) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_enabled ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_name ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_name = +[] (::GAction *action) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        return _peel_this->DerivedClass::vfunc_get_name ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_parameter_type ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_parameter_type = +[] (::GAction *action) -> const ::GVariantType *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        const GLib::Variant::Type *_peel_return = _peel_this->DerivedClass::vfunc_get_parameter_type ();
        return reinterpret_cast<const ::GVariantType *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_state ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_state = +[] (::GAction *action) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_state ();
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_state_hint ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_state_hint = +[] (::GAction *action) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_get_state_hint ();
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_state_type ()
    {
      ::GActionInterface *klass = reinterpret_cast<::GActionInterface *> (this);
      klass->get_state_type = +[] (::GAction *action) -> const ::GVariantType *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (action);
        const GLib::Variant::Type *_peel_return = _peel_this->DerivedClass::vfunc_get_state_type ();
        return reinterpret_cast<const ::GVariantType *> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GActionInterface),
                 "Action::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GActionInterface),
                 "Action::Iface align mismatch");
}; /* interface Action */
static_assert (sizeof (Action) == sizeof (GObject::Object),
               "Action size mismatch");
static_assert (alignof (Action) == alignof (GObject::Object),
               "Action align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
