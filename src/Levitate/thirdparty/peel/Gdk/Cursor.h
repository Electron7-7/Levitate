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
#include <gdk/gdk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Cursor;
class Texture;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Cursor> ()
{
  return gdk_cursor_get_type ();
}


namespace Gdk
{
class Cursor : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Cursor () = delete;
  Cursor (const Cursor &) = delete;
  Cursor (Cursor &&) = delete;
  Cursor &
  operator = (const Cursor &) = delete;
  Cursor &
  operator = (Cursor &&) = delete;
  ~Cursor () = delete;
public:

  template<typename CursorGetTextureCallback>
  static peel::RefPtr<Cursor>
  create_from_callback (CursorGetTextureCallback &&callback, Cursor *fallback) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GdkCursorGetTextureCallback _peel_callback = peel::internals::CallbackHelper<::GdkTexture *, ::GdkCursor *, int, double, int *, int *, int *, int *>::wrap_notified_callback (
      static_cast<CursorGetTextureCallback &&> (callback),
      [] (::GdkCursor *cursor, int cursor_size, double scale, int *width, int *height, int *hotspot_x, int *hotspot_y, gpointer data) -> ::GdkTexture *
      {
        CursorGetTextureCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<CursorGetTextureCallback>::type *> (data);
        Cursor *_peel_cursor = reinterpret_cast<Cursor *> (cursor);
        peel::RefPtr<Texture> _peel_return = _peel_captured_callback (_peel_cursor, cursor_size, scale, width, height, hotspot_x, hotspot_y);
        return reinterpret_cast<::GdkTexture *> (std::move (_peel_return).release_ref ());
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<CursorGetTextureCallback, void, Cursor *, int, double, int, int, int, int>::value);
    ::GdkCursor *_peel_fallback = reinterpret_cast<::GdkCursor *> (fallback);
    ::GdkCursor *_peel_return = gdk_cursor_new_from_callback (_peel_callback, _peel_data, _peel_destroy, _peel_fallback);
    return peel::RefPtr<Cursor>::adopt_ref (reinterpret_cast<Cursor *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Cursor>
  create_from_name (const char *name, Cursor *fallback) noexcept
  {
    ::GdkCursor *_peel_fallback = reinterpret_cast<::GdkCursor *> (fallback);
    ::GdkCursor *_peel_return = gdk_cursor_new_from_name (name, _peel_fallback);
    return peel::RefPtr<Cursor>::adopt_ref (reinterpret_cast<Cursor *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<Cursor>
  create_from_texture (Texture *texture, int hotspot_x, int hotspot_y, Cursor *fallback) noexcept
  {
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    ::GdkCursor *_peel_fallback = reinterpret_cast<::GdkCursor *> (fallback);
    ::GdkCursor *_peel_return = gdk_cursor_new_from_texture (_peel_texture, hotspot_x, hotspot_y, _peel_fallback);
    peel_assume (_peel_return);
    return peel::RefPtr<Cursor>::adopt_ref (reinterpret_cast<Cursor *> (_peel_return));
  }

  Cursor *
  get_fallback () noexcept
  {
    ::GdkCursor *_peel_this = reinterpret_cast<::GdkCursor *> (this);
    ::GdkCursor *_peel_return = gdk_cursor_get_fallback (_peel_this);
    return reinterpret_cast<Cursor *> (_peel_return);
  }

  int
  get_hotspot_x () noexcept
  {
    ::GdkCursor *_peel_this = reinterpret_cast<::GdkCursor *> (this);
    return gdk_cursor_get_hotspot_x (_peel_this);
  }

  int
  get_hotspot_y () noexcept
  {
    ::GdkCursor *_peel_this = reinterpret_cast<::GdkCursor *> (this);
    return gdk_cursor_get_hotspot_y (_peel_this);
  }

  const char *
  get_name () noexcept
  {
    ::GdkCursor *_peel_this = reinterpret_cast<::GdkCursor *> (this);
    return gdk_cursor_get_name (_peel_this);
  }

  Texture *
  get_texture () noexcept
  {
    ::GdkCursor *_peel_this = reinterpret_cast<::GdkCursor *> (this);
    ::GdkTexture *_peel_return = gdk_cursor_get_texture (_peel_this);
    return reinterpret_cast<Texture *> (_peel_return);
  }

  static peel::Property<Cursor>
  prop_fallback ()
  {
    return peel::Property<Cursor> { "fallback" };
  }

  static peel::Property<int>
  prop_hotspot_x ()
  {
    return peel::Property<int> { "hotspot-x" };
  }

  static peel::Property<int>
  prop_hotspot_y ()
  {
    return peel::Property<int> { "hotspot-y" };
  }

  static peel::Property<const char *>
  prop_name ()
  {
    return peel::Property<const char *> { "name" };
  }

  static peel::Property<Texture>
  prop_texture ()
  {
    return peel::Property<Texture> { "texture" };
  }
}; /* class Cursor */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/Texture.h>
