import QtQuick.Controls 1.0
import QtQuick 2.0

Rectangle {
    id: mainWin
    //1280x720
    //1024×640
    width: 1024
    height: 640
    color: "#333333"

    Rectangle {
        id: topBar
        height: 47
        color: "#8f8f8f"
        anchors.right: parent.right
        anchors.rightMargin: 0
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
    }

    Rectangle {
        id: rectangle1
        x: 329
        y: 156
        width: 366
        height: 329
        color: "#8f8f8f"
    }

    Rectangle {
        id: rectangle2
        x: 0
        y: 79
        width: 273
        height: 237
        color: "#8f8f8f"
    }

    Rectangle {
        id: rectangle3
        x: 751
        y: 79
        width: 273
        height: 237
        color: "#8f8f8f"
    }

    Image {
        id: image1
        x: 819
        y: 129
        width: 138
        height: 138
        scale: 1
        fillMode: Image.PreserveAspectFit
        antialiasing: false
        source: "../../UI_Elements/iconmonstr-plus-4-icon.svg"
    }
}
