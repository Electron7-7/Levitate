#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Cache;
} /* namespace GLib */


namespace GLib
{
class /* record */ Cache
{
private:
  Cache () = delete;
  Cache (const Cache &) = delete;
  Cache (Cache &&) = delete;
  ~Cache ();

public:
  void
  destroy () noexcept
  {
    ::GCache *_peel_this = reinterpret_cast<::GCache *> (this);
    g_cache_destroy (_peel_this);
  }

  void *
  insert (void *key) noexcept
  {
    ::GCache *_peel_this = reinterpret_cast<::GCache *> (this);
    return g_cache_insert (_peel_this, key);
  }

  template<typename HFunc>
  void
  key_foreach (HFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GCache *_peel_this = reinterpret_cast<::GCache *> (this);
    ::GHFunc _peel_func = peel::internals::CallbackHelper<void, gpointer, gpointer>::wrap_call_callback (
      static_cast<HFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer user_data) -> void
      {
        HFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<HFunc>::type *> (user_data);
        _peel_captured_func (key, value);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HFunc, void, void *, void *>::value);
    g_cache_key_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  void
  remove (const void *value) noexcept
  {
    ::GCache *_peel_this = reinterpret_cast<::GCache *> (this);
    g_cache_remove (_peel_this, value);
  }

  template<typename HFunc>
  void
  value_foreach (HFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GCache *_peel_this = reinterpret_cast<::GCache *> (this);
    ::GHFunc _peel_func = peel::internals::CallbackHelper<void, gpointer, gpointer>::wrap_call_callback (
      static_cast<HFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer user_data) -> void
      {
        HFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<HFunc>::type *> (user_data);
        _peel_captured_func (key, value);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HFunc, void, void *, void *>::value);
    g_cache_value_foreach (_peel_this, _peel_func, _peel_user_data);
  }

  peel_returns_nonnull
  static Cache *
  new_ (::GCacheNewFunc value_new_func, ::GCacheDestroyFunc value_destroy_func, ::GCacheDupFunc key_dup_func, ::GCacheDestroyFunc key_destroy_func, ::GHashFunc hash_key_func, ::GHashFunc hash_value_func, ::GEqualFunc key_equal_func) noexcept
  {
    ::GCache *_peel_return = g_cache_new (value_new_func, value_destroy_func, key_dup_func, key_destroy_func, hash_key_func, hash_value_func, key_equal_func);
    peel_assume (_peel_return);
    return reinterpret_cast<Cache *> (_peel_return);
  }
}; /* record Cache */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
