//
// Created by zy on 2022/4/2.

#include "index/database_index.h"
#include "grammar/Myall.h"
#include "Server/ser_drive.h"
//#include <cstring>
//#include "index/test.h"
//#include <bitset>
//#include "Engine/database_engine.h"
int main(){
//    ser_start(8787);
//    use_fun();
    char *sss = "insert into tname (id,name,age,sex) values(num,asd,45,N)(num,asd,11,N)(num,asd,23,N)(num,asd,67,N)";
    char *str =   "select id,age,name from aaa where age > 2 and id = 12 or xxx = xs";
    sqlsacnner(str);
    get_wordlen();
    create_sqltree();
    treenode *root =check_tree();//词组中第一个word匹配
    epollser_start(8686);
//    z_index();
////    InitRootNode();
////    VfsNode  * databaseNode = createNode(1,"test",1,NULL,NULL,NULL);
////    databaseNode->filepath=(char *)malloc(sizeof("/home/mikasa/indexTSDB"));
////    databaseNode->filepath="/home/mikasa/indexTSDB";
////    VfsNode  * table1Node = createNode(2,"user",1,NULL,NULL,NULL);
////    VfsNode  * column1Node = createNode(3,"username|char*",1,NULL,NULL,NULL);
////    VfsNode  * column1Node2 = createNode(3,"password|char*",1,NULL,NULL,NULL);
////    VfsNode  * column1Node3 = createNode(3,"age|int",1,NULL,NULL,NULL);
////
////    VfsTree * vfs=createVfsTreeRoot();
////    addVfsTreeNode(vfs->root,databaseNode);
////    addVfsTreeNode(databaseNode,table1Node);
////    addVfsTreeNode(table1Node,column1Node);
////    addVfsTreeNode(table1Node,column1Node2);
////    addVfsTreeNode(table1Node,column1Node3);
////
////    VfsNode * database=findDataBaseByName("test");
////
////    cout<<database->cList->head->name<<endl;
////    cout<<"文件路径"<<database->filepath<<endl;
}