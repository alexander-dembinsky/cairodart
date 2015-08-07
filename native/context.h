#ifndef CONTEXT_H
#define CONTEXT_H

#include "dart_api.h"

void context_destroy(void* handle);
void context_create(Dart_NativeArguments args);
void save(Dart_NativeArguments args);
void restore(Dart_NativeArguments args);
void push_group(Dart_NativeArguments args);
void push_group_with_content(Dart_NativeArguments args);
void pop_group_to_source(Dart_NativeArguments args);
void pop_group(Dart_NativeArguments args);
void set_source(Dart_NativeArguments args);
void get_source(Dart_NativeArguments args);
void set_source_rgb(Dart_NativeArguments args);
void set_source_rgba(Dart_NativeArguments args);
void stroke(Dart_NativeArguments args);
void stroke_preserve(Dart_NativeArguments args);
void in_stroke(Dart_NativeArguments args);
void stroke_extents(Dart_NativeArguments args);
void paint(Dart_NativeArguments args);
void set_line_cap(Dart_NativeArguments args);
void get_line_cap(Dart_NativeArguments args);
void set_line_join(Dart_NativeArguments args);
void get_line_join(Dart_NativeArguments args);
void set_line_width(Dart_NativeArguments args);
void get_line_width(Dart_NativeArguments args);
void set_miter_limit(Dart_NativeArguments args);
void get_miter_limit(Dart_NativeArguments args);
void set_operator(Dart_NativeArguments args);
void get_operator(Dart_NativeArguments args);
void set_fill_rule(Dart_NativeArguments args);
void get_fill_rule(Dart_NativeArguments args);
void has_current_point(Dart_NativeArguments args);
void move_to(Dart_NativeArguments args);
void line_to(Dart_NativeArguments args);
void rectangle(Dart_NativeArguments args);
void get_current_point(Dart_NativeArguments args);
void new_path(Dart_NativeArguments args);
void new_sub_path(Dart_NativeArguments args);
void close_path(Dart_NativeArguments args);
void arc(Dart_NativeArguments args);
void arc_negative(Dart_NativeArguments args);
void curve_to(Dart_NativeArguments args);
void rel_move_to(Dart_NativeArguments args);
void rel_line_to(Dart_NativeArguments args);
void rel_curve_to(Dart_NativeArguments args);
void text_path(Dart_NativeArguments args);
void path_extents(Dart_NativeArguments args);
void get_antialias(Dart_NativeArguments args);
void set_antialias(Dart_NativeArguments args);
void get_tolerance(Dart_NativeArguments args);
void set_tolerance(Dart_NativeArguments args);
void clip(Dart_NativeArguments args);
void clip_preserve(Dart_NativeArguments args);
void in_clip(Dart_NativeArguments args);
void reset_clip(Dart_NativeArguments args);
void clip_extents(Dart_NativeArguments args);
void fill(Dart_NativeArguments args);
void fill_preserve(Dart_NativeArguments args);
void fill_extents(Dart_NativeArguments args);
void in_fill(Dart_NativeArguments args);
void copy_clip_rectangle_list(Dart_NativeArguments args);
void rectangle_list_destroy(Dart_NativeArguments args);
void mask(Dart_NativeArguments args);
void mask_surface(Dart_NativeArguments args);
void paint_with_alpha(Dart_NativeArguments args);
void show_page(Dart_NativeArguments args);
void copy_page(Dart_NativeArguments args);
void set_dash(Dart_NativeArguments args);
void get_dash(Dart_NativeArguments args);
void get_dash_count(Dart_NativeArguments args);
void set_source_surface(Dart_NativeArguments args);
void get_group_target(Dart_NativeArguments args);
void status(Dart_NativeArguments args);
void translate(Dart_NativeArguments args);
void scale(Dart_NativeArguments args);
void rotate(Dart_NativeArguments args);
void set_matrix(Dart_NativeArguments args);
void get_matrix(Dart_NativeArguments args);
void identity_matrix(Dart_NativeArguments args);
void transform(Dart_NativeArguments args);
void select_font_face(Dart_NativeArguments args);
void set_font_size(Dart_NativeArguments args);
void show_text(Dart_NativeArguments args);
void set_font_matrix(Dart_NativeArguments args);
void get_font_matrix(Dart_NativeArguments args);
void get_font_options(Dart_NativeArguments args);
void set_font_options(Dart_NativeArguments args);
void get_font_face(Dart_NativeArguments args);
void set_font_face(Dart_NativeArguments args);
void get_scaled_font(Dart_NativeArguments args);
void set_scaled_font(Dart_NativeArguments args);
void show_glyphs(Dart_NativeArguments args);
void font_extents(Dart_NativeArguments args);
void text_extents(Dart_NativeArguments args);
void glyph_extents(Dart_NativeArguments args);
void show_text_glyphs(Dart_NativeArguments args);
void user_to_device(Dart_NativeArguments args);
void user_to_device_distance(Dart_NativeArguments args);
void device_to_user(Dart_NativeArguments args);
void device_to_user_distance(Dart_NativeArguments args);



#endif // CONTEXT_H
