# _EmbeddedVoiceConversion_

## Steps

### Step 1 —— Environment

Setup the environment of the idf. You can reference [this](https://docs.espressif.com/projects/esp-idf/zh_CN/v5.4/esp32s3/get-started/linux-macos-setup.html) 
```shell
$ . $HOME/esp/esp-idf/export.sh
```

### Step 2 —— Build
```shell
$ git clone --recursive https://github.com/moeleak/EmbeddedVoiceConversion.git
$ cd EmbeddedVoiceConversion
$ idf.py build
```


## TODO

- A GUI
- Real-time Voice Conversion
- Connect to Wi-FI
