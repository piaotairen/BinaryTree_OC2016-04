//
//  BinaryTreeNode.h
//  BinaryTree_OC2016-04
//
//  Created by Zihai on 16/5/3.
//  Copyright © 2016年 Zihai. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  二叉树节点
 */
@interface BinaryTreeNode : NSObject

/**
 *  值
 */
@property (nonatomic, assign) NSInteger value;
/**
 *  左节点
 */
@property (nonatomic, strong) BinaryTreeNode *leftNode;
/**
 *  右节点
 */
@property (nonatomic, strong) BinaryTreeNode *rightNode;


@end
