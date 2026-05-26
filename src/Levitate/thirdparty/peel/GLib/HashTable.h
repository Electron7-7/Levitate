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
#include <peel/GLib/List.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ HashTable;
struct PtrArray;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::HashTable> ()
{
  return g_hash_table_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::HashTable>
{
  typedef RefPtr<GLib::HashTable> OwnedType;
  typedef GLib::HashTable * UnownedType;

  static GLib::HashTable *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::HashTable *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::HashTable * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::HashTable>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::HashTable>::adopt_ref (reinterpret_cast<GLib::HashTable *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::HashTable> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::HashTable *
  cast_for_create (GLib::HashTable * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::HashTable>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::HashTable> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::HashTable, void>
{
  static void
  ref (GLib::HashTable *ptr)
  {
    g_hash_table_ref (reinterpret_cast<::GHashTable *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::HashTable *ptr)
  {
    g_hash_table_unref (reinterpret_cast<::GHashTable *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ HashTable
{
private:
  HashTable () = delete;
  HashTable (const HashTable &) = delete;
  HashTable (HashTable &&) = delete;
  ~HashTable ();

public:
  struct Iter;

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  add (HashTable *hash_table, void *key) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_add (_peel_hash_table, key);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  contains (HashTable *hash_table, const void *key) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_contains (_peel_hash_table, key);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  destroy (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    g_hash_table_destroy (_peel_hash_table);
  }

  template<typename HRFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  find (HashTable *hash_table, HRFunc &&predicate) noexcept
  {
    gpointer _peel_user_data;
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    ::GHRFunc _peel_predicate = peel::internals::CallbackHelper<gboolean, gpointer, gpointer>::wrap_call_callback (
      static_cast<HRFunc &&> (predicate),
      [] (gpointer key, gpointer value, gpointer user_data) -> gboolean
      {
        HRFunc &_peel_captured_predicate = *reinterpret_cast<typename std::remove_reference<HRFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_predicate (key, value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HRFunc, void, void *, void *>::value);
    return g_hash_table_find (_peel_hash_table, _peel_predicate, _peel_user_data);
  }

  template<typename HFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static void
  foreach (HashTable *hash_table, HFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    ::GHFunc _peel_func = peel::internals::CallbackHelper<void, gpointer, gpointer>::wrap_call_callback (
      static_cast<HFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer user_data) -> void
      {
        HFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<HFunc>::type *> (user_data);
        _peel_captured_func (key, value);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HFunc, void, void *, void *>::value);
    g_hash_table_foreach (_peel_hash_table, _peel_func, _peel_user_data);
  }

  template<typename HRFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static unsigned
  foreach_remove (HashTable *hash_table, HRFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    ::GHRFunc _peel_func = peel::internals::CallbackHelper<gboolean, gpointer, gpointer>::wrap_call_callback (
      static_cast<HRFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer user_data) -> gboolean
      {
        HRFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<HRFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_func (key, value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HRFunc, void, void *, void *>::value);
    return g_hash_table_foreach_remove (_peel_hash_table, _peel_func, _peel_user_data);
  }

  template<typename HRFunc>
  peel_arg_in (1) peel_nonnull_args (1)
  static unsigned
  foreach_steal (HashTable *hash_table, HRFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    ::GHRFunc _peel_func = peel::internals::CallbackHelper<gboolean, gpointer, gpointer>::wrap_call_callback (
      static_cast<HRFunc &&> (func),
      [] (gpointer key, gpointer value, gpointer user_data) -> gboolean
      {
        HRFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<HRFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_func (key, value);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<HRFunc, void, void *, void *>::value);
    return g_hash_table_foreach_steal (_peel_hash_table, _peel_func, _peel_user_data);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static List<void *>
  get_keys (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    GList *_peel_return = g_hash_table_get_keys (_peel_hash_table);
    return List<void *>::adopt_list (_peel_return);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::UniquePtr<void *[]>
  get_keys_as_array (HashTable *hash_table) noexcept
  {
    guint _peel_length;
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gpointer *_peel_return = g_hash_table_get_keys_as_array (_peel_hash_table, &_peel_length);
    peel_assume (_peel_return);
    return peel::UniquePtr<void *[]>::adopt_ref (reinterpret_cast<void **> (_peel_return), _peel_length);
  }

  /* Unsupported for now: get_keys_as_ptr_array: transfer container, but not an array or a list */

  peel_arg_in (1) peel_nonnull_args (1)
  static List<void *>
  get_values (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    GList *_peel_return = g_hash_table_get_values (_peel_hash_table);
    return List<void *>::adopt_list (_peel_return);
  }

  /* Unsupported for now: get_values_as_ptr_array: transfer container, but not an array or a list */

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  insert (HashTable *hash_table, void *key, void *value) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_insert (_peel_hash_table, key, value);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void *
  lookup (HashTable *hash_table, const void *key) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    return g_hash_table_lookup (_peel_hash_table, key);
  }

  peel_arg_in (1) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
  static bool
  lookup_extended (HashTable *hash_table, const void *lookup_key, void **orig_key, void **value) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gpointer *_peel_orig_key = reinterpret_cast<gpointer *> (orig_key);
    gpointer *_peel_value = reinterpret_cast<gpointer *> (value);
    gboolean _peel_return = g_hash_table_lookup_extended (_peel_hash_table, lookup_key, _peel_orig_key, _peel_value);
    return !!_peel_return;
  }

  static peel::RefPtr<HashTable>
  new_ (::GHashFunc hash_func, ::GEqualFunc key_equal_func) noexcept
  {
    ::GHashTable *_peel_return = g_hash_table_new (hash_func, key_equal_func);
    peel_assume (_peel_return);
    return peel::RefPtr<HashTable>::adopt_ref (reinterpret_cast<HashTable *> (_peel_return));
  }

  static peel::RefPtr<HashTable>
  new_full (::GHashFunc hash_func, ::GEqualFunc key_equal_func, ::GDestroyNotify key_destroy_func, ::GDestroyNotify value_destroy_func) noexcept
  {
    ::GHashTable *_peel_return = g_hash_table_new_full (hash_func, key_equal_func, key_destroy_func, value_destroy_func);
    peel_assume (_peel_return);
    return peel::RefPtr<HashTable>::adopt_ref (reinterpret_cast<HashTable *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<HashTable>
  new_similar (HashTable *other_hash_table) noexcept
  {
    ::GHashTable *_peel_other_hash_table = reinterpret_cast<::GHashTable *> (other_hash_table);
    ::GHashTable *_peel_return = g_hash_table_new_similar (_peel_other_hash_table);
    peel_assume (_peel_return);
    return peel::RefPtr<HashTable>::adopt_ref (reinterpret_cast<HashTable *> (_peel_return));
  }

  /* ref bound as RefTraits */

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  remove (HashTable *hash_table, const void *key) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_remove (_peel_hash_table, key);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  remove_all (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    g_hash_table_remove_all (_peel_hash_table);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  replace (HashTable *hash_table, void *key, void *value) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_replace (_peel_hash_table, key, value);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static unsigned
  size (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    return g_hash_table_size (_peel_hash_table);
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static bool
  steal (HashTable *hash_table, const void *key) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gboolean _peel_return = g_hash_table_steal (_peel_hash_table, key);
    return !!_peel_return;
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static void
  steal_all (HashTable *hash_table) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    g_hash_table_steal_all (_peel_hash_table);
  }

  /* Unsupported for now: steal_all_keys: transfer container, but not an array or a list */

  /* Unsupported for now: steal_all_values: transfer container, but not an array or a list */

  peel_arg_in (1) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
  static bool
  steal_extended (HashTable *hash_table, const void *lookup_key, void **stolen_key, void **stolen_value) noexcept
  {
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    gpointer *_peel_stolen_key = reinterpret_cast<gpointer *> (stolen_key);
    gpointer *_peel_stolen_value = reinterpret_cast<gpointer *> (stolen_value);
    gboolean _peel_return = g_hash_table_steal_extended (_peel_hash_table, lookup_key, _peel_stolen_key, _peel_stolen_value);
    return !!_peel_return;
  }

  /* unref bound as RefTraits */
}; /* record HashTable */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/PtrArray.h>
