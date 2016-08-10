#ifndef MEGATRANSFERDELEGATE_H
#define MEGATRANSFERDELEGATE_H

#include <QStyledItemDelegate>
#include "TransferItem.h"

class MegaTransferDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    MegaTransferDelegate(QObject *parent = 0) : QStyledItemDelegate(parent) {}
    void paint(QPainter *painter, const QStyleOptionViewItem &option,const QModelIndex &index) const;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
private:
};

#endif // MEGATRANSFERDELEGATE_H