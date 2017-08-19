//
//  main.c
//  LeetCode237_8_DeleteNode
//
//  Created by Rui on 8/12/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void deleteNode(struct ListNode* node)
{
    node->val = node->next->val;
    ListNode* temp = node->next;
    node->next = temp->next;
    delete temp;
}
