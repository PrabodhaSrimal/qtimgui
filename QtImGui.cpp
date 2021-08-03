#include "QtImGui.h"
#include "ImGuiRenderer.h"
#include <QWindow>
#ifdef QT_WIDGETS_LIB
#include <QWidget>
#endif

namespace QtImGui {

#ifdef QT_WIDGETS_LIB

namespace {

class QWidgetWindowWrapper : public WindowWrapper {
public:
    QWidgetWindowWrapper(QWidget *w) : widget(w) {}
    void installEventFilter(QObject *object) override {
        return widget->installEventFilter(object);
    }
    QSize size() const override {
        return widget->size();
    }
    qreal devicePixelRatio() const override {
        return widget->devicePixelRatioF();
    }
    bool isActive() const override {
        return widget->isActiveWindow();
    }
    void setFocus(Qt::FocusReason focusReason) override {
        widget->setFocus(focusReason);
    }
    QPoint mapFromGlobal(const QPoint &p) const override {
        return widget->mapFromGlobal(p);
    }
private:
    QWidget *widget;
};

}

void initialize(QWidget *window) {
    ImGuiRenderer::instance()->initialize(new QWidgetWindowWrapper(window));
}

#endif

namespace {

class QWindowWindowWrapper : public WindowWrapper {
public:
    QWindowWindowWrapper(QWindow *w) : window(w) {}
    void installEventFilter(QObject *object) override {
        return window->installEventFilter(object);
    }
    QSize size() const override {
        return window->size();
    }
    qreal devicePixelRatio() const override {
        return window->devicePixelRatio();
    }
    bool isActive() const override {
        return window->isActive();
    }
    void setFocus(Qt::FocusReason focusReason) override {
        ((QWidget*)window)->setFocus(focusReason);
    }
    QPoint mapFromGlobal(const QPoint &p) const override {
        return window->mapFromGlobal(p);
    }
private:
    QWindow *window;
};

}

void initialize(QWindow *window) {
    ImGuiRenderer::instance()->initialize(new QWindowWindowWrapper(window));
}

void newFrame() {
    ImGuiRenderer::instance()->newFrame();
}

void render() {
    ImGuiRenderer::instance()->render();
}

}
