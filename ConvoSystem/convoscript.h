#ifndef CONVOSCRIPT_H
#define CONVOSCRIPT_H
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <vector>
#include <convonode.h>
using namespace std;

class ConvoScript
{
    std::vector<ConvoNode> script;
    int currentNode;
public:
    ConvoScript();
    void addNode();
//    delNode();
    ConvoNode getNode(int n);
    int getScriptSize();
};

#endif // CONVOSCRIPT_H
