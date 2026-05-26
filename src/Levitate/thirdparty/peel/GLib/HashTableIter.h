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
#include <peel/GLib/HashTable.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ HashTable;
} /* namespace GLib */


namespace GLib
{
struct HashTable::Iter
{
private:
  ::GHashTableIter inner peel_no_warn_unused;


public:
  peel_returns_nonnull
  HashTable *
  get_hash_table () noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    ::GHashTable *_peel_return = g_hash_table_iter_get_hash_table (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<HashTable *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  init (HashTable *hash_table) noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    ::GHashTable *_peel_hash_table = reinterpret_cast<::GHashTable *> (hash_table);
    g_hash_table_iter_init (_peel_this, _peel_hash_table);
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  next (void **key, void **value) noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    gpointer *_peel_key = reinterpret_cast<gpointer *> (key);
    gpointer *_peel_value = reinterpret_cast<gpointer *> (value);
    gboolean _peel_return = g_hash_table_iter_next (_peel_this, _peel_key, _peel_value);
    return !!_peel_return;
  }

  void
  remove () noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    g_hash_table_iter_remove (_peel_this);
  }

  void
  replace (void *value) noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    g_hash_table_iter_replace (_peel_this, value);
  }

  void
  steal () noexcept
  {
    ::GHashTableIter *_peel_this = reinterpret_cast<::GHashTableIter *> (this);
    g_hash_table_iter_steal (_peel_this);
  }
}; /* record HashTable::Iter */

static_assert (sizeof (HashTable::Iter) == sizeof (::GHashTableIter),
               "HashTable::Iter size mismatch");
static_assert (alignof (HashTable::Iter) == alignof (::GHashTableIter),
               "HashTable::Iter align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
