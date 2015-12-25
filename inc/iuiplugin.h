#ifndef IUIPLUGIN_H
#define IUIPLUGIN_H

class IUIPlugin
{
public:
    void show(const QWidget * parent, const QRect & rect) = 0;
    void hide() = 0;
    void resize(const QRect & rect) = 0;
};

#define IUIPLUGIN_IID "mkb.app.iuiplugin.interface"

Q_DECLARE_INTERFACE(IUIPlugin, IUIPLUGIN_IID)
#endif //IUIPLUGIN_H
