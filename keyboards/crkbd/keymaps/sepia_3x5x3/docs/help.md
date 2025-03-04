
Pre-requisitos
https://docs.qmk.fm/cli
1. Tener instalado python
2. Haber instalado qmk con pip3
3. Hacer qmk setup
(Si despues de instalar qmk no funciona, tal vez falta en .bashrc)
```
echo 'export PATH="$HOME/.local/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
```

Crear y cargar un layout para el keeb
1. Compilar
```
qmk compile -kb crkbd -km sepia_3x5x3 -e CONVERT_TO=rp2040_ce
```
2. Usar el fichero .uf2 (se guarda también en .build)
3. Conectar el keeb como un "external device" (conectarlo y arrancar el modo bootloader)
4. "Drag and drop" del fichero .uf2 sobre el "external device" que aparecerá en el sistema
5. Repetir para el otro lado del keeb


Generar keymap.json

```
qmk c2json -kb crkbd -km sepia_3x5x3 ./keyboards/crkbd/keymaps/sepia_3x5x3/keymap.c > test.json
```

Generar representacion del keymap https://github.com/caksoylar/keymap-drawer?tab=readme-ov-file

```
# from keymap.c
qmk c2json -kb crkbd -km sepia_3x5x3 ./keyboards/crkbd/keymaps/sepia_3x5x3/keymap.c | keymap parse -c 10 -q - > keymap.yaml
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