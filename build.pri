CONFIG(debug){
    TARGET_CONF = debug
}else{
    TARGET_CONF = release
}

CONFIG(win32){
    TARGET_PLATFORM = win
}

CONFIG(unix){
    TARGET_PLATFORM = unix 
}

CONFIG(mac){
    TARGET_PLATFORM = mac 
}

TARGET = $$MODULE_NAME
TARGET_DIR = $$BASE_DIR/out/$$TARGET_PLATFORM/$$TARGET_CONF

DESTDIR = $$TARGET_DIR/exe
OBJECTS_DIR = $$TARGET_DIR/obj
MOC_DIR = $$TARGET_DIR/moc
UI_DIR = $$TARGET_DIR/uic

INCLUDEPATH += $$BASE_DIR/inc




#message(working dir is $$(PWD))
message( include paths are: $$INCLUDEPATH)
#message(TARGET_CONF is $$TARGET_CONF)
#message(TARGET_PLATFORM is $$TARGET_PLATFORM)
#message(MODULE_NAME is $$MODULE_NAME)
message(DESTDIR is $$DESTDIR)

