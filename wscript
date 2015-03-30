#! /usr/bin/env python
# encoding: utf-8
#
# Altruistic Control Systems
# Control Node base wscript
# Kenneth Wells, 2015

def configure(conf):
    pass

def build(bld):
    bld(
        target='cxxCore',
        install_path='${PREFIX}/lib',
        features=['cxx', 'cxxshlib','package', 'qt5'],
        manifest='cxxCore.package',
        uselib=['QT5CORE','QT5BASE','QTDBUS','DBUS-1'],
        defines='WAF=1'
        )
