#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

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
#include <glib-object.h>
#include <peel/GLib/Quark.h>
#include <peel/GObject/TypeClass.h>
#include <peel/GObject/TypeInstance.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace GObject
{
enum class ParamFlags : std::underlying_type<::GParamFlags>::type;
class ParamSpec;
struct Value;
} /* namespace GObject */

template<>
inline GObject::Type
GObject::Type::of<GObject::ParamSpec> ()
{
  return G_TYPE_PARAM;
}
template<typename T>
struct GObject::Value::Traits<T, peel::enable_if_derived<GObject::ParamSpec, T, void>>
{
  typedef T *UnownedType;
  typedef RefPtr<T> OwnedType;

  static T *
  get (const ::GValue *value)
  {
    void *obj = g_value_get_param (value);
    if (std::is_same<T, GObject::ParamSpec>::value)
      return reinterpret_cast<GObject::ParamSpec *> (obj);
#if defined (G_DISABLE_CAST_CHECKS) || defined (__OPTIMIZE__)
    return reinterpret_cast<T *> (obj);
#else
    ::GType tp = static_cast<::GType> (GObject::Type::of<T> ());
    return G_TYPE_CHECK_INSTANCE_CAST (obj, tp, T);
#endif
  }

  static void
  set (::GValue *value, T *object)
  {
    ::GParamSpec *_peel_object = reinterpret_cast<::GParamSpec *> (object);
    g_value_set_param (value, _peel_object);
  }


  static RefPtr<T>
  dup (const ::GValue *value)
  {
    void *obj = g_value_dup_param (value);
    if (std::is_same<T, GObject::ParamSpec>::value)
      return RefPtr<GObject::ParamSpec>::adopt_ref (reinterpret_cast<GObject::ParamSpec *> (obj));
#if defined (G_DISABLE_CAST_CHECKS) || defined (__OPTIMIZE__)
    return RefPtr<T>::adopt_ref (reinterpret_cast<T *> (obj));
#else
    ::GType tp = static_cast<::GType> (GObject::Type::of<T> ());
    return RefPtr<T>::adopt_ref (G_TYPE_CHECK_INSTANCE_CAST (obj, tp, T));
#endif
  }
  static void
  take (::GValue *value, RefPtr<T> &&object)
  {
    ::GParamSpec *_peel_object = reinterpret_cast<::GParamSpec *> (std::move (object).release_ref ());
    g_value_take_param (value, _peel_object);
  }

  static void
  set_marshal_return (::GValue *value, RefPtr<T> &&object)
  {
    take (value, std::move (object));
  }

  static void
  set_marshal_return (::GValue *value, T *object)
  {
    ::GParamSpec *_peel_object = reinterpret_cast<::GParamSpec *> (object);
    /* Pretend to have a reference.  */
    g_value_take_param (value, _peel_object);
  }
  static ::GParamSpec *
  cast_for_create (T *object) noexcept
  {
    return reinterpret_cast<::GParamSpec *> (object);
  }
};

template<typename T>
struct RefTraits<T, peel::enable_if_derived<GObject::ParamSpec, T, void>>
{
  static void
  ref (T *ptr)
  {
    g_param_spec_ref (reinterpret_cast<::GParamSpec *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (T *ptr)
  {
    g_param_spec_unref (reinterpret_cast<::GParamSpec *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;

  static void
  ref_sink (T *ptr)
  {
    g_param_spec_ref_sink (reinterpret_cast<::GParamSpec *> (ptr));
  }

  static void
  sink (T *ptr)
  {
    g_param_spec_ref_sink (reinterpret_cast<::GParamSpec *> (ptr));
    g_param_spec_unref (reinterpret_cast<::GParamSpec *> (ptr));
  }
};


namespace GObject
{
class ParamSpec : public GObject::TypeInstance
{
private:
  unsigned char _placeholder[sizeof (::GParamSpec) - sizeof (GObject::TypeInstance)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ParamSpec () = delete;
  ParamSpec (const ParamSpec &) = delete;
  ParamSpec (ParamSpec &&) = delete;
  ParamSpec &
  operator = (const ParamSpec &) = delete;
  ParamSpec &
  operator = (ParamSpec &&) = delete;
protected:
  ~ParamSpec () = default;
public:

  peel_nonnull_args (2) peel_returns_nonnull
  static ParamSpec *
  internal (GObject::Type param_type, const char *name, const char *nick, const char *blurb, ParamFlags flags) noexcept
  {
    ::GParamFlags _peel_flags = static_cast<::GParamFlags> (flags);
    ::gpointer _peel_return = g_param_spec_internal (param_type, name, nick, blurb, _peel_flags);
    peel_assume (_peel_return);
    return reinterpret_cast<ParamSpec *> (_peel_return);
  }

  peel_nonnull_args (1)
  static bool
  is_valid_name (const char *name) noexcept
  {
    gboolean _peel_return = g_param_spec_is_valid_name (name);
    return !!_peel_return;
  }

  const char *
  get_blurb () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    return g_param_spec_get_blurb (_peel_this);
  }

  peel_returns_nonnull
  const Value *
  get_default_value () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    const ::GValue *_peel_return = g_param_spec_get_default_value (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<const Value *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    return g_param_spec_get_name (_peel_this);
  }

  GLib::Quark
  get_name_quark () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    ::GQuark _peel_return = g_param_spec_get_name_quark (_peel_this);
    return static_cast<GLib::Quark> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_nick () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    return g_param_spec_get_nick (_peel_this);
  }

  void *
  get_qdata (GLib::Quark quark) noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    return g_param_spec_get_qdata (_peel_this, quark);
  }

  ParamSpec *
  get_redirect_target () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    ::GParamSpec *_peel_return = g_param_spec_get_redirect_target (_peel_this);
    return reinterpret_cast<ParamSpec *> (_peel_return);
  }

  /* ref bound as RefTraits */

  /* ref_sink bound as RefTraits */

  void
  set_qdata (GLib::Quark quark, void *data) noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    g_param_spec_set_qdata (_peel_this, quark, data);
  }

  void
  set_qdata_full (GLib::Quark quark, void *data, ::GDestroyNotify destroy) noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    g_param_spec_set_qdata_full (_peel_this, quark, data, destroy);
  }

  void
  sink () noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    g_param_spec_sink (_peel_this);
  }

  void *
  steal_qdata (GLib::Quark quark) noexcept
  {
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    return g_param_spec_steal_qdata (_peel_this, quark);
  }

  /* unref bound as RefTraits */

protected:
  template<typename DerivedClass>
  void
  parent_vfunc_finalize () noexcept
  {
    ::GParamSpecClass *_peel_class = reinterpret_cast<::GParamSpecClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    _peel_class->finalize (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_value_is_valid (const Value *value) noexcept
  {
    ::GParamSpecClass *_peel_class = reinterpret_cast<::GParamSpecClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gboolean _peel_return = _peel_class->value_is_valid (_peel_this, _peel_value);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_value_set_default (Value *value) noexcept
  {
    ::GParamSpecClass *_peel_class = reinterpret_cast<::GParamSpecClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    _peel_class->value_set_default (_peel_this, _peel_value);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_value_validate (Value *value) noexcept
  {
    ::GParamSpecClass *_peel_class = reinterpret_cast<::GParamSpecClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gboolean _peel_return = _peel_class->value_validate (_peel_this, _peel_value);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  int
  parent_vfunc_values_cmp (const Value *value1, const Value *value2) noexcept
  {
    ::GParamSpecClass *_peel_class = reinterpret_cast<::GParamSpecClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GParamSpec *_peel_this = reinterpret_cast<::GParamSpec *> (this);
    const ::GValue *_peel_value1 = reinterpret_cast<const ::GValue *> (value1);
    const ::GValue *_peel_value2 = reinterpret_cast<const ::GValue *> (value2);
    return _peel_class->values_cmp (_peel_this, _peel_value1, _peel_value2);
  }

public:
  class Class : public GObject::TypeClass
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GParamSpecClass) - sizeof (GObject::TypeClass)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_finalize ()
    {
      ::GParamSpecClass *klass = reinterpret_cast<::GParamSpecClass *> (this);
      klass->finalize = +[] (::GParamSpec *pspec) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (pspec);
        _peel_this->DerivedClass::vfunc_finalize ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_value_is_valid ()
    {
      ::GParamSpecClass *klass = reinterpret_cast<::GParamSpecClass *> (this);
      klass->value_is_valid = +[] (::GParamSpec *pspec, const ::GValue *value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (pspec);
        const Value *_peel_value = reinterpret_cast<const Value *> (value);
        bool _peel_return = _peel_this->DerivedClass::vfunc_value_is_valid (_peel_value);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_value_set_default ()
    {
      ::GParamSpecClass *klass = reinterpret_cast<::GParamSpecClass *> (this);
      klass->value_set_default = +[] (::GParamSpec *pspec, ::GValue *value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (pspec);
        Value *_peel_value = reinterpret_cast<Value *> (value);
        _peel_this->DerivedClass::vfunc_value_set_default (_peel_value);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_value_validate ()
    {
      ::GParamSpecClass *klass = reinterpret_cast<::GParamSpecClass *> (this);
      klass->value_validate = +[] (::GParamSpec *pspec, ::GValue *value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (pspec);
        Value *_peel_value = reinterpret_cast<Value *> (value);
        bool _peel_return = _peel_this->DerivedClass::vfunc_value_validate (_peel_value);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_values_cmp ()
    {
      ::GParamSpecClass *klass = reinterpret_cast<::GParamSpecClass *> (this);
      klass->values_cmp = +[] (::GParamSpec *pspec, const ::GValue *value1, const ::GValue *value2) -> gint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (pspec);
        const Value *_peel_value1 = reinterpret_cast<const Value *> (value1);
        const Value *_peel_value2 = reinterpret_cast<const Value *> (value2);
        return _peel_this->DerivedClass::vfunc_values_cmp (_peel_value1, _peel_value2);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GParamSpecClass),
                 "ParamSpec::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GParamSpecClass),
                 "ParamSpec::Class align mismatch");
}; /* class ParamSpec */

static_assert (sizeof (ParamSpec) == sizeof (::GParamSpec),
               "ParamSpec size mismatch");
static_assert (alignof (ParamSpec) == alignof (::GParamSpec),
               "ParamSpec align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
