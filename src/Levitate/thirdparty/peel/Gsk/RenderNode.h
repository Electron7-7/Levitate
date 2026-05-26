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
#include <peel/GObject/TypeClass.h>
#include <peel/GObject/TypeInstance.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Graphene
{
struct Rect;
} /* namespace Graphene */

namespace Gsk
{
struct ParseLocation;
class RenderNode;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::RenderNode> ()
{
  return gsk_render_node_get_type ();
}
template<typename T>
struct GObject::Value::Traits<T, peel::enable_if_derived<Gsk::RenderNode, T, void>>
{
  typedef T *UnownedType;
  typedef RefPtr<T> OwnedType;

  static T *
  get (const ::GValue *value)
  {
    void *obj = gsk_value_get_render_node (value);
    if (std::is_same<T, Gsk::RenderNode>::value)
      return reinterpret_cast<Gsk::RenderNode *> (obj);
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
    ::GskRenderNode *_peel_object = reinterpret_cast<::GskRenderNode *> (object);
    gsk_value_set_render_node (value, _peel_object);
  }


  static RefPtr<T>
  dup (const ::GValue *value)
  {
    void *obj = gsk_value_dup_render_node (value);
    if (std::is_same<T, Gsk::RenderNode>::value)
      return RefPtr<Gsk::RenderNode>::adopt_ref (reinterpret_cast<Gsk::RenderNode *> (obj));
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
    ::GskRenderNode *_peel_object = reinterpret_cast<::GskRenderNode *> (std::move (object).release_ref ());
    gsk_value_take_render_node (value, _peel_object);
  }

  static void
  set_marshal_return (::GValue *value, RefPtr<T> &&object)
  {
    take (value, std::move (object));
  }

  static void
  set_marshal_return (::GValue *value, T *object)
  {
    ::GskRenderNode *_peel_object = reinterpret_cast<::GskRenderNode *> (object);
    /* Pretend to have a reference.  */
    gsk_value_take_render_node (value, _peel_object);
  }
  static ::GskRenderNode *
  cast_for_create (T *object) noexcept
  {
    return reinterpret_cast<::GskRenderNode *> (object);
  }
};

template<typename T>
struct RefTraits<T, peel::enable_if_derived<Gsk::RenderNode, T, void>>
{
  static void
  ref (T *ptr)
  {
    gsk_render_node_ref (reinterpret_cast<::GskRenderNode *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (T *ptr)
  {
    gsk_render_node_unref (reinterpret_cast<::GskRenderNode *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gsk
{
class RenderNode : public GObject::TypeInstance
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  RenderNode () = delete;
  RenderNode (const RenderNode &) = delete;
  RenderNode (RenderNode &&) = delete;
  RenderNode &
  operator = (const RenderNode &) = delete;
  RenderNode &
  operator = (RenderNode &&) = delete;
  ~RenderNode () = delete;
public:
  enum class Type : std::underlying_type<::GskRenderNodeType>::type;

  template<typename ParseErrorFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<RenderNode>
  deserialize (GLib::Bytes *bytes, ParseErrorFunc &&error_func) noexcept
  {
    gpointer _peel_user_data;
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GskParseErrorFunc _peel_error_func = peel::internals::CallbackHelper<void, const ::GskParseLocation *, const ::GskParseLocation *, const ::GError *>::wrap_call_callback (
      static_cast<ParseErrorFunc &&> (error_func),
      [] (const ::GskParseLocation *start, const ::GskParseLocation *end, const ::GError *error, gpointer user_data) -> void
      {
        ParseErrorFunc &_peel_captured_error_func = *reinterpret_cast<typename std::remove_reference<ParseErrorFunc>::type *> (user_data);
        const ParseLocation *_peel_start = reinterpret_cast<const ParseLocation *> (start);
        const ParseLocation *_peel_end = reinterpret_cast<const ParseLocation *> (end);
        const GLib::Error *_peel_error = reinterpret_cast<const GLib::Error *> (error);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_error_func) (_peel_start, _peel_end, _peel_error);
      },
      &_peel_user_data, peel::internals::is_const_invocable<ParseErrorFunc, void, const ParseLocation *, const ParseLocation *, const GLib::Error *>::value);
    ::GskRenderNode *_peel_return = gsk_render_node_deserialize (_peel_bytes, _peel_error_func, _peel_user_data);
    return peel::RefPtr<RenderNode>::adopt_ref (reinterpret_cast<RenderNode *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  draw (::cairo_t *cr) noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    gsk_render_node_draw (_peel_this, cr);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_bounds (Graphene::Rect *bounds) noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::graphene_rect_t *_peel_bounds = reinterpret_cast<::graphene_rect_t *> (bounds);
    gsk_render_node_get_bounds (_peel_this, _peel_bounds);
  }

  peel::ArrayRef<RenderNode *>
  get_children () noexcept
  {
    gsize _peel_n_children;
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::GskRenderNode **_peel_return = gsk_render_node_get_children (_peel_this, &_peel_n_children);
    return peel::ArrayRef<RenderNode *> (reinterpret_cast<RenderNode **> (_peel_return), _peel_n_children);
  }

  RenderNode::Type
  get_node_type () const noexcept
  {
    const ::GskRenderNode *_peel_this = reinterpret_cast<const ::GskRenderNode *> (this);
    ::GskRenderNodeType _peel_return = gsk_render_node_get_node_type (_peel_this);
    return static_cast<RenderNode::Type> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_opaque_rect (Graphene::Rect *out_opaque) noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::graphene_rect_t *_peel_out_opaque = reinterpret_cast<::graphene_rect_t *> (out_opaque);
    gboolean _peel_return = gsk_render_node_get_opaque_rect (_peel_this, _peel_out_opaque);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  peel::RefPtr<GLib::Bytes>
  serialize () noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::GBytes *_peel_return = gsk_render_node_serialize (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  /* unref bound as RefTraits */

  peel_nonnull_args (2)
  bool
  write_to_file (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GskRenderNode *_peel_this = reinterpret_cast<::GskRenderNode *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gsk_render_node_write_to_file (_peel_this, filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }
}; /* class RenderNode */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
