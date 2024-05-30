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

Crear el keymap visual

```
Cargar el keymap.yaml > https://keymap-drawer.streamlit.app/?example_yaml=3x5.yaml // https://keymap-drawer.streamlit.app/?example_yaml=miryoku.yaml
Docs de como hacerlo > https://github.com/caksoylar/keymap-drawer/blob/v0.17.0/KEYMAP_SPEC.md
https://github.com/caksoylar/keymap-drawer/blob/v0.17.0/KEYMAP_SPEC.md#layers
```