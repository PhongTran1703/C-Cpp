// main.cpp — Minimal Qt text editor
#include <QApplication>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QMenuBar>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

class EditorWindow : public QMainWindow {
  Q_OBJECT
public:
  EditorWindow() {
    editor = new QPlainTextEdit;
    setCentralWidget(editor);
    createActions();
    setWindowTitle("MiniEditor");
    resize(800, 600);
  }

private slots:
  void openFile() {
    QString fname = QFileDialog::getOpenFileName(this, "Open File");
    if (fname.isEmpty()) return;
    QFile file(fname);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
      QMessageBox::warning(this, "Error", "Cannot open file");
      return;
    }
    QTextStream in(&file);
    editor->setPlainText(in.readAll());
  }
  void saveFile() {
    QString fname = QFileDialog::getSaveFileName(this, "Save File");
    if (fname.isEmpty()) return;
    QFile file(fname);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
      QMessageBox::warning(this, "Error", "Cannot save file");
      return;
    }
    QTextStream out(&file);
    out << editor->toPlainText();
  }
  void about() {
    QMessageBox::information(this, "About", "MiniEditor — minimal Qt editor");
  }

private:
  QPlainTextEdit *editor;
  void createActions() {
    auto *fileMenu = menuBar()->addMenu("&File");
    fileMenu->addAction("Open", this, SLOT(openFile()), QKeySequence::Open);
    fileMenu->addAction("Save", this, SLOT(saveFile()), QKeySequence::Save);
    fileMenu->addSeparator();
    fileMenu->addAction("Exit", this, SLOT(close()), QKeySequence::Quit);

    auto *helpMenu = menuBar()->addMenu("&Help");
    helpMenu->addAction("About", this, SLOT(about()));
  }
};

#include "main.moc"

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  EditorWindow w;
  w.show();
  return app.exec();
}

