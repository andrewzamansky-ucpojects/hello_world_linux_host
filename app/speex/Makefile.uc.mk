#ifeq ($(call eval_config,$(CONFIG_INCLUDE_SPEEX_ANDROID)),y)
    INCLUDE_THIS_COMPONENT := y

    SPEEX_ANDROID_PATH :=$(EXTERNAL_SOURCE_ROOT_DIR)/speex/speex_android

    ifeq ("$(wildcard $(SPEEX_ANDROID_PATH))","")
        $(info !--- speex android path $(SPEEX_ANDROID_PATH) doesn't exist )
        $(info !--- download/clone speex android code and unpack it to $(SPEEX_ANDROID_PATH)  )
        $(info !--- make sure .git folder is located in $(SPEEX_ANDROID_PATH)/  after unpacking   )
        $(error )
    endif

    DUMMY := $(call ADD_TO_GLOBAL_INCLUDE_PATH , $(SPEEX_ANDROID_PATH)/include)
#endif

DEFINES += FLOATING_POINT
DEFINES += EXPORT=
DEFINES += USE_KISS_FFT

#INCLUDE_DIR += $(SPEEX_ANDROID_PATH)/include

CFLAGS += /fp:fast

#ASMFLAGS =




SRC += mdf.c
SRC += fftwrap.c
SRC += kiss_fftr.c
SRC += kiss_fft.c

#SPEED_CRITICAL_FILES =

VPATH = $(SPEEX_ANDROID_PATH)/libspeex/


include $(COMMON_CC)
