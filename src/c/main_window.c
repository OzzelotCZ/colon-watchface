#include <pebble.h>
#include "main_window.h"

Window *mainWindow;

void main_window_load(){
	Layer *window_layer = window_get_root_layer(mainWindow);
	window_set_background_color(mainWindow, GColorBlack);
	
	BitmapLayer *top_dot_layer = bitmap_layer_create(GRect(PBL_IF_ROUND_ELSE(65,47),PBL_IF_ROUND_ELSE(30,24),50,50));
	bitmap_layer_set_background_color(top_dot_layer,GColorWhite);
	
	BitmapLayer *bottom_dot_layer = bitmap_layer_create(GRect(PBL_IF_ROUND_ELSE(65,47),PBL_IF_ROUND_ELSE(100,94),50,50));
	bitmap_layer_set_background_color(bottom_dot_layer,GColorWhite);
	
	layer_add_child(window_layer,bitmap_layer_get_layer(top_dot_layer));
	layer_add_child(window_layer,bitmap_layer_get_layer(bottom_dot_layer));
}

void main_window_unload(){
	
}

void main_window_create(){
	mainWindow = window_create();
	window_set_window_handlers(mainWindow,(WindowHandlers){
		.load = main_window_load,
		.unload = main_window_unload
	});
}

void main_window_destroy(){
	window_destroy(mainWindow);
}

Window *main_window_get_window(){
	return mainWindow;
}
