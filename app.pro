TEMPLATE = subdirs

SUBDIRS = \
    core\
#    plugins\

CONFIG(BUILDTEST): SUBDIRS += test
