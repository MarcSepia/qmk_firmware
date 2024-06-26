Compilar

```
qmk compile -kb crkbd -km corne_3x5x3_jporter_fixing -e CONVERT_TO=rp2040_ce
```

Generar keymap.json

```
qmk c2json -kb crkbd -km corne_3x5x3_jporter_fixing ./keyboards/crkbd/keymaps/corne_3x5x3_jporter_fixing/keymap.c > test.json
```

Generar representacion del keymap https://github.com/caksoylar/keymap-drawer?tab=readme-ov-file

```
# from keymap.c
qmk c2json -kb crkbd -km corne_3x5x3_jporter_fixing ./keyboards/crkbd/keymaps/corne_3x5x3_jporter_fixing/keymap.c | keymap parse -c 10 -q - > keymap.yaml
```

Algunos layouts 

acorne - https://github.com/acerne/acorne/blob/master/kle-layout-image.png 


Crear el keymap visual

```
Cargar el keymap.yaml > https://keymap-drawer.streamlit.app/?example_yaml=3x5.yaml // https://keymap-drawer.streamlit.app/?example_yaml=miryoku.yaml
Docs de como hacerlo > https://github.com/caksoylar/keymap-drawer/blob/v0.17.0/KEYMAP_SPEC.md
https://github.com/caksoylar/keymap-drawer/blob/v0.17.0/KEYMAP_SPEC.md#layers
```


Crear el keymap.c

Keycodes - https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md 
Language specific - https://github.com/qmk/qmk_firmware/blob/master/docs/reference_keymap_extras.md 
Keymap spanish - https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_spanish.h 


Video configuración QMK

https://www.youtube.com/watch?v=k9YnXnE7cBI&ab_channel=HolaMundo 