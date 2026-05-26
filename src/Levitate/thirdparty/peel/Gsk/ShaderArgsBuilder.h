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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Graphene
{
struct Vec2;
struct Vec3;
struct Vec4;
} /* namespace Graphene */

namespace Gsk
{
class GLShader;
class /* record */ ShaderArgsBuilder;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::ShaderArgsBuilder> ()
{
  return gsk_shader_args_builder_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::ShaderArgsBuilder>
{
  typedef RefPtr<Gsk::ShaderArgsBuilder> OwnedType;
  typedef Gsk::ShaderArgsBuilder * UnownedType;

  static Gsk::ShaderArgsBuilder *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::ShaderArgsBuilder *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gsk::ShaderArgsBuilder * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gsk::ShaderArgsBuilder>
  dup (const ::GValue *value)
  {
    return RefPtr<Gsk::ShaderArgsBuilder>::adopt_ref (reinterpret_cast<Gsk::ShaderArgsBuilder *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gsk::ShaderArgsBuilder> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gsk::ShaderArgsBuilder *
  cast_for_create (Gsk::ShaderArgsBuilder * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::ShaderArgsBuilder>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gsk::ShaderArgsBuilder> (), basics.flags);
  }
};

template<>
struct RefTraits<Gsk::ShaderArgsBuilder, void>
{
  static void
  ref (Gsk::ShaderArgsBuilder *ptr)
  {
    gsk_shader_args_builder_ref (reinterpret_cast<::GskShaderArgsBuilder *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gsk::ShaderArgsBuilder *ptr)
  {
    gsk_shader_args_builder_unref (reinterpret_cast<::GskShaderArgsBuilder *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gsk
{
class /* record */ ShaderArgsBuilder
{
private:
  ShaderArgsBuilder () = delete;
  ShaderArgsBuilder (const ShaderArgsBuilder &) = delete;
  ShaderArgsBuilder (ShaderArgsBuilder &&) = delete;
  ~ShaderArgsBuilder ();

public:
  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<ShaderArgsBuilder>
  create (GLShader *shader, GLib::Bytes *initial_values) noexcept
  {
    ::GskGLShader *_peel_shader = reinterpret_cast<::GskGLShader *> (shader);
    ::GBytes *_peel_initial_values = reinterpret_cast<::GBytes *> (initial_values);
    ::GskShaderArgsBuilder *_peel_return = gsk_shader_args_builder_new (_peel_shader, _peel_initial_values);
    peel_assume (_peel_return);
    return peel::RefPtr<ShaderArgsBuilder>::adopt_ref (reinterpret_cast<ShaderArgsBuilder *> (_peel_return));
  }

  static peel::RefPtr<GLib::Bytes>
  free_to_args (peel::RefPtr<ShaderArgsBuilder> builder) noexcept
  {
    ::GskShaderArgsBuilder *_peel_builder = reinterpret_cast<::GskShaderArgsBuilder *> (std::move (builder).release_ref ());
    ::GBytes *_peel_return = gsk_shader_args_builder_free_to_args (_peel_builder);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  /* ref bound as RefTraits */

  void
  set_bool (int idx, bool value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gsk_shader_args_builder_set_bool (_peel_this, idx, _peel_value);
  }

  void
  set_float (int idx, float value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    gsk_shader_args_builder_set_float (_peel_this, idx, value);
  }

  void
  set_int (int idx, int32_t value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    gsk_shader_args_builder_set_int (_peel_this, idx, value);
  }

  void
  set_uint (int idx, uint32_t value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    gsk_shader_args_builder_set_uint (_peel_this, idx, value);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  set_vec2 (int idx, const Graphene::Vec2 *value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    const ::graphene_vec2_t *_peel_value = reinterpret_cast<const ::graphene_vec2_t *> (value);
    gsk_shader_args_builder_set_vec2 (_peel_this, idx, _peel_value);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  set_vec3 (int idx, const Graphene::Vec3 *value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    const ::graphene_vec3_t *_peel_value = reinterpret_cast<const ::graphene_vec3_t *> (value);
    gsk_shader_args_builder_set_vec3 (_peel_this, idx, _peel_value);
  }

  peel_arg_in (3) peel_nonnull_args (3)
  void
  set_vec4 (int idx, const Graphene::Vec4 *value) noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    const ::graphene_vec4_t *_peel_value = reinterpret_cast<const ::graphene_vec4_t *> (value);
    gsk_shader_args_builder_set_vec4 (_peel_this, idx, _peel_value);
  }

  peel::RefPtr<GLib::Bytes>
  to_args () noexcept
  {
    ::GskShaderArgsBuilder *_peel_this = reinterpret_cast<::GskShaderArgsBuilder *> (this);
    ::GBytes *_peel_return = gsk_shader_args_builder_to_args (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  /* unref bound as RefTraits */
}; /* record ShaderArgsBuilder */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
