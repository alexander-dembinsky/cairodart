#ifndef SURFACE_H
#define SURFACE_H

#include "dart_api.h"

#ifdef __cplusplus
extern "C" {
#endif

void surface_destroy(void* handle);
void image_surface_create(Dart_NativeArguments args);
void image_surface_get_width(Dart_NativeArguments args);
void image_surface_get_height(Dart_NativeArguments args);
void image_surface_get_stride(Dart_NativeArguments args);
void surface_finish(Dart_NativeArguments args);
void surface_flush(Dart_NativeArguments args);
void surface_get_content(Dart_NativeArguments args);
void surface_mark_dirty(Dart_NativeArguments args);
void surface_mark_dirty_rectangle(Dart_NativeArguments args);
void surface_get_device_offset(Dart_NativeArguments args);
void surface_set_device_offset(Dart_NativeArguments args);
void surface_copy_page(Dart_NativeArguments args);
void surface_show_page(Dart_NativeArguments args);
void surface_supports_mime_type(Dart_NativeArguments args);
void surface_has_show_text_glyphs(Dart_NativeArguments args);
void surface_get_type(Dart_NativeArguments args);
void surface_get_fallback_resolution(Dart_NativeArguments args);
void surface_set_fallback_resolution(Dart_NativeArguments args);
void image_surface_create_from_png(Dart_NativeArguments args);
void surface_write_to_png(Dart_NativeArguments args);
void surfaces_equals(Dart_NativeArguments args);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // SURFACE_H
