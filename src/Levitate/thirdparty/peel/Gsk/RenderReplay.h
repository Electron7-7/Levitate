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
namespace Gdk
{
class Texture;
} /* namespace Gdk */

namespace Gsk
{
class RenderNode;
class /* record */ RenderReplay;
} /* namespace Gsk */

namespace Pango
{
class Font;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gsk::RenderReplay> ()
{
  return gsk_render_replay_get_type ();
}
template<>
struct GObject::Value::Traits<Gsk::RenderReplay>
{
  typedef Gsk::RenderReplay * UnownedType;

  static Gsk::RenderReplay *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gsk::RenderReplay *> (g_value_get_pointer (value));
  }

  static void
  set (::GValue *value, Gsk::RenderReplay * r)
  {
    g_value_set_pointer (value, reinterpret_cast<void *> (r));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::RenderReplay * r)
  {
    set (value, r);
  }

  static Gsk::RenderReplay *
  cast_for_create (Gsk::RenderReplay * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gsk::RenderReplay>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_pointer (basics.name, basics.nick, basics.blurb, basics.flags);
  }
};

template<>
struct UniqueTraits<Gsk::RenderReplay>
{
  static void
  free (Gsk::RenderReplay *ptr)
  {
    gsk_render_replay_free (reinterpret_cast<::GskRenderReplay *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Gsk
{
class /* record */ RenderReplay
{
private:
  RenderReplay () = delete;
  RenderReplay (const RenderReplay &) = delete;
  RenderReplay (RenderReplay &&) = delete;
  ~RenderReplay ();

public:
  static peel::UniquePtr<RenderReplay>
  create () noexcept
  {
    ::GskRenderReplay *_peel_return = gsk_render_replay_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<RenderReplay>::adopt_ref (reinterpret_cast<RenderReplay *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<RenderNode>
  default_ (RenderNode *node) noexcept
  {
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GskRenderNode *_peel_node = reinterpret_cast<::GskRenderNode *> (node);
    ::GskRenderNode *_peel_return = gsk_render_replay_default (_peel_this, _peel_node);
    return peel::RefPtr<RenderNode>::adopt_ref (reinterpret_cast<RenderNode *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<Pango::Font>
  filter_font (Pango::Font *font) noexcept
  {
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (font);
    ::PangoFont *_peel_return = gsk_render_replay_filter_font (_peel_this, _peel_font);
    peel_assume (_peel_return);
    return peel::RefPtr<Pango::Font>::adopt_ref (reinterpret_cast<Pango::Font *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<RenderNode>
  filter_node (RenderNode *node) noexcept
  {
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GskRenderNode *_peel_node = reinterpret_cast<::GskRenderNode *> (node);
    ::GskRenderNode *_peel_return = gsk_render_replay_filter_node (_peel_this, _peel_node);
    return peel::RefPtr<RenderNode>::adopt_ref (reinterpret_cast<RenderNode *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<Gdk::Texture>
  filter_texture (Gdk::Texture *texture) noexcept
  {
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    ::GdkTexture *_peel_return = gsk_render_replay_filter_texture (_peel_this, _peel_texture);
    peel_assume (_peel_return);
    return peel::RefPtr<Gdk::Texture>::adopt_ref (reinterpret_cast<Gdk::Texture *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  template<typename RenderReplayFontFilter>
  void
  set_font_filter (RenderReplayFontFilter &&filter) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GskRenderReplayFontFilter _peel_filter = peel::internals::CallbackHelper<::PangoFont *, ::GskRenderReplay *, ::PangoFont *>::wrap_notified_callback (
      static_cast<RenderReplayFontFilter &&> (filter),
      [] (::GskRenderReplay *replay, ::PangoFont *font, gpointer user_data) -> ::PangoFont *
      {
        RenderReplayFontFilter &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<RenderReplayFontFilter>::type *> (user_data);
        RenderReplay *_peel_replay = reinterpret_cast<RenderReplay *> (replay);
        Pango::Font *_peel_font = reinterpret_cast<Pango::Font *> (font);
        peel::RefPtr<Pango::Font> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<Pango::Font>> (_peel_captured_filter) (_peel_replay, _peel_font);
        return reinterpret_cast<::PangoFont *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<RenderReplayFontFilter, void, RenderReplay *, Pango::Font *>::value);
    gsk_render_replay_set_font_filter (_peel_this, _peel_filter, _peel_user_data, _peel_user_destroy);
  }

  template<typename RenderReplayNodeFilter>
  void
  set_node_filter (RenderReplayNodeFilter &&filter) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GskRenderReplayNodeFilter _peel_filter = peel::internals::CallbackHelper<::GskRenderNode *, ::GskRenderReplay *, ::GskRenderNode *>::wrap_notified_callback (
      static_cast<RenderReplayNodeFilter &&> (filter),
      [] (::GskRenderReplay *replay, ::GskRenderNode *node, gpointer user_data) -> ::GskRenderNode *
      {
        RenderReplayNodeFilter &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<RenderReplayNodeFilter>::type *> (user_data);
        RenderReplay *_peel_replay = reinterpret_cast<RenderReplay *> (replay);
        RenderNode *_peel_node = reinterpret_cast<RenderNode *> (node);
        peel::RefPtr<RenderNode> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<RenderNode>> (_peel_captured_filter) (_peel_replay, _peel_node);
        return reinterpret_cast<::GskRenderNode *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<RenderReplayNodeFilter, void, RenderReplay *, RenderNode *>::value);
    gsk_render_replay_set_node_filter (_peel_this, _peel_filter, _peel_user_data, _peel_user_destroy);
  }

  template<typename RenderReplayTextureFilter>
  void
  set_texture_filter (RenderReplayTextureFilter &&filter) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GskRenderReplay *_peel_this = reinterpret_cast<::GskRenderReplay *> (this);
    ::GskRenderReplayTextureFilter _peel_filter = peel::internals::CallbackHelper<::GdkTexture *, ::GskRenderReplay *, ::GdkTexture *>::wrap_notified_callback (
      static_cast<RenderReplayTextureFilter &&> (filter),
      [] (::GskRenderReplay *replay, ::GdkTexture *texture, gpointer user_data) -> ::GdkTexture *
      {
        RenderReplayTextureFilter &_peel_captured_filter = *reinterpret_cast<typename std::remove_reference<RenderReplayTextureFilter>::type *> (user_data);
        RenderReplay *_peel_replay = reinterpret_cast<RenderReplay *> (replay);
        Gdk::Texture *_peel_texture = reinterpret_cast<Gdk::Texture *> (texture);
        peel::RefPtr<Gdk::Texture> _peel_return = peel::internals::invoke_if_nonnull<peel::RefPtr<Gdk::Texture>> (_peel_captured_filter) (_peel_replay, _peel_texture);
        return reinterpret_cast<::GdkTexture *> (std::move (_peel_return).release_ref ());
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<RenderReplayTextureFilter, void, RenderReplay *, Gdk::Texture *>::value);
    gsk_render_replay_set_texture_filter (_peel_this, _peel_filter, _peel_user_data, _peel_user_destroy);
  }
}; /* record RenderReplay */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Texture.h>
#include <peel/Gsk/RenderNode.h>
#include <peel/Pango/Font.h>
