#include <iostream>
#include <map>
#include "bst.h"
#include "avlbst.h"

using namespace std;


int main(int argc, char *argv[])
{


/*
    // Binary Search Tree tests
    BinarySearchTree<char,int> bt;
    bt.insert(std::make_pair('m',1));
    bt.insert(std::make_pair('b',2));
    bt.insert(std::make_pair('h',5));
    bt.insert(std::make_pair('s',2453));
    bt.insert(std::make_pair('p',12));
    bt.insert(std::make_pair('z',254));
    bt.insert(std::make_pair('a',12));
    bt.insert(std::make_pair('c',3));



    bt.print();
    
    bt.remove('b');

    bt.print();

*/

	BinarySearchTree<int, double> bst;
	bst.insert(std::make_pair(1, 1.0));
	bst.insert(std::make_pair(2, 1.0));
	bst.insert(std::make_pair(3, 1.0));

  bst.print();
  
	bst.remove(1);

    // // AVL Tree Tests
    // AVLTree<char,int> at;
    // at.insert(std::make_pair('a',1));
    // at.insert(std::make_pair('b',2));

    // cout << "\nAVLTree contents:" << endl;
    // for(AVLTree<char,int>::iterator it = at.begin(); it != at.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // if(at.find('b') != at.end()) {
    //     cout << "Found b" << endl;
    // }
    // else {
    //     cout << "Did not find b" << endl;
    // }
    // cout << "Erasing b" << endl;
    // at.remove('b');

    return 0;
}
