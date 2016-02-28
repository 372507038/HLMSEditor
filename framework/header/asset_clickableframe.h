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

#ifndef MAGUS_CLICKABLE_FRAME_H
#define MAGUS_CLICKABLE_FRAME_H

#include <QWidget>
#include <QFrame>

QT_BEGIN_NAMESPACE

QT_END_NAMESPACE

namespace Magus
{
    /****************************************************************************
    QFrame that can be clicked by the mouse
    ***************************************************************************/
    class QtClickableFrame : public QFrame
    {
        Q_OBJECT

        public:
            QtClickableFrame(void){}
            virtual ~QtClickableFrame(void) {}

        signals:
            void clicked(void);

        protected:
            void mousePressEvent(QMouseEvent *event) {emit clicked();}
            void enterEvent(QEvent*)
                {setStyleSheet("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e5e5e5, stop:0.2 #a6a6a6, stop:0.8 #8a8a8a, stop:1 #4a4a4a);"
                           "border: 0px solid #000000;");}
            void leaveEvent(QEvent*)
                {setStyleSheet("background: transparent; border: 0px solid #000000;");}
    };
}

#endif
