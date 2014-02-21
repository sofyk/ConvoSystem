import QtQuick 2.0

Rectangle {
    //1280x720
    //1024×640
    width: 1024
    height: 640

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
