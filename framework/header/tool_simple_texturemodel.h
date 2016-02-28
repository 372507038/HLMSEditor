/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef MAGUS_TOOL_SMPL_TEXTURE_MODEL_H
#define MAGUS_TOOL_SMPL_TEXTURE_MODEL_H

#include <QAbstractListModel>
#include <QModelIndex>
#include <QVariant>
#include <QPixmap>

/****************************************************************************
 This model represents the model for the simple texture selection widget
****************************************************************************/
class QtSimpleTextureModel : public QAbstractListModel
{
    Q_OBJECT

    public:
        QtSimpleTextureModel(QObject *parent = 0);
        ~QtSimpleTextureModel();

        Qt::ItemFlags flags(const QModelIndex &index) const;
        int rowCount(const QModelIndex &parent) const;
        QVariant data(const QModelIndex &index, int role) const;
        bool removeRows(int row, int count, const QModelIndex &parent);
        void clear();
        QStringList mimeTypes() const;
        QMimeData* mimeData(const QModelIndexList &indexes) const;
        bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent);
        Qt::DropActions supportedDropActions() const;
        void addTexture(const QPixmap& pixmap, const QString& name, QSize size);
        void addTexture(const QString& fileName, QSize size);
        void deleteTexture(const QString& name);
        const QString& getName(const QModelIndex &index) const;
        QList<QString>mNames;

    private:
        QList<QPixmap> mPixmaps;
        QString mMimeType;
};

//****************************************************************************
#endif
