TEMPLATE = subdirs

SUBDIRS = lib.pro 

CONFIG(BUILDTEST): SUBDIRS += test.pro

CONFIG += ordered

