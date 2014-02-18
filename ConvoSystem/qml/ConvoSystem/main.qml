import QtQuick 2.0

Rectangle {
    //1280x720
    width: 1280
    height: 720
    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }
}
