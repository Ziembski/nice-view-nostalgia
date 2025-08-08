if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

  zephyr_library_sources(
    ./src/main.c
    ./src/fonts/custom_font_22.c
    ./src/images/animation1_0.c
    ./src/images/animation1_1.c
    ./src/images/animation1_2.c
    ./src/images/animation1_3.c
    ./src/images/animation1_4.c
    ./src/images/animation1_5.c
    ./src/images/animation1_6.c
    ./src/images/animation1_7.c
    ./src/images/animation1_8.c
    ./src/images/animation1_9.c
    ./src/images/animation1_10.c
    ./src/images/animation1_11.c
    ./src/images/animation1_12.c
    ./src/images/animation1_13.c
    ./src/images/animation1_14.c
    ./src/images/animation1_15.c
    ./src/images/animation1_16.c
    ./src/images/animation1_17.c
    ./src/images/animation1_18.c
    ./src/images/animation1_19.c
    ./src/images/animation1_20.c
    ./src/images/animation1_21.c
    ./src/images/animation1_22.c
    ./src/images/animation1_23.c
    ./src/images/animation1_24.c
    ./src/images/animation1_25.c
    ./src/images/animation1_26.c
    ./src/images/animation1_27.c
    ./src/images/animation1_28.c
    ./src/images/animation1_29.c
    ./src/images/animation1_30.c
    ./src/images/animation1_31.c
    ./src/images/animation2_1.c 

    ./src/images/bluetooth_logo_outlined.c
    ./src/images/bluetooth_logo.c
    ./src/images/bluetooth_searching.c
    ./src/images/usb_logo.c
    ./src/utils/draw_animation1.c
    ./src/utils/draw_animation2.c
    ./src/utils/draw_battery.c
    ./src/utils/draw_bluetooth_logo_outlined.c
    ./src/utils/draw_bluetooth_logo.c
    ./src/utils/draw_bluetooth_searching.c
    ./src/utils/draw_usb_logo.c
    ./src/utils/rotate_connectivity_canvas.c
    ./src/utils/rotate_main_canvas.c
  )

  if(NOT CONFIG_ZMK_SPLIT OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    zephyr_library_sources(
      ./src/central/initialize_listeners.c
      ./src/central/render.c
      # These are not included on the peripheral since they are only used for
      # displaying the layer name.
      ./src/fonts/custom_font_44.c
      ./src/fonts/custom_font_shadow.c
      ./src/fonts/custom_font_outline.c
    )
  else()
    zephyr_library_sources(
      ./src/peripheral/initialize_listeners.c
      ./src/peripheral/render.c
    )
  endif()
endif()
