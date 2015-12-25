#ifndef IBASEPLUGIN_H
#define IBASEPLUGIN_H

class IBasePlugin
{
public:
    virtual void load() = 0;
    virtual void unload() = 0;
    virtual void name() = 0;
    virtual void clsid() = 0;
    

};

#define IBASEPLUGIN_IID "mkb.app.ibaseplugin.interface"

Q_DECLARE_INTERFACE(IBasePlugin, IBASEPLUGIN_IID)

#endif //IBASEPLUGIN_H
