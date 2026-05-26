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

peel_begin_header

namespace peel
{
namespace GObject
{
struct TypeInfo;
struct TypeValueTable;
} /* namespace GObject */


namespace GObject
{
struct TypeInfo
{
private:
  TypeInfo () = delete;
  TypeInfo (const TypeInfo &) = delete;
  TypeInfo (TypeInfo &&) = delete;
  ~TypeInfo ();

public:
  uint16_t class_size;
private:
  ::GBaseInitFunc base_init;
  ::GBaseFinalizeFunc base_finalize;
  ::GClassInitFunc class_init;
  ::GClassFinalizeFunc class_finalize;
public:
  const void *class_data;
  uint16_t instance_size;
  uint16_t n_preallocs;
private:
  ::GInstanceInitFunc instance_init;
public:
  const TypeValueTable *value_table;
}; /* record TypeInfo */

static_assert (sizeof (TypeInfo) == sizeof (::GTypeInfo),
               "TypeInfo size mismatch");
static_assert (alignof (TypeInfo) == alignof (::GTypeInfo),
               "TypeInfo align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
