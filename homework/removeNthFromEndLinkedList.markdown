---
title: Homework 2
layout: default
---


Given a linked list, remove the nth node from the end of list and return its head.
For example,
   Given linked list: 1->2->3->4->5, and n = 2.
   After removing the second node from the end, the linked list becomes 1->2->3->5.
   Given n will always be valid.
You can write helper functions. 
The name of the submission should be **homework2.cpp**, no numbers, no name, no capital letters.


All homeworks must have the following at the top of the submitted file
<ul>
    <li>File name: homework2.cpp</li>
    <li>Created by:</li>
    <li>Created on:</li> 
    <li>Synopsis:</li>
</ul>

{% highlight cpp %}
 // Definition for singly-linked list.
struct Node {
      int val;
      Node *next;
      Node(int x=-1) : val(x), next(NULL) {}
  };
Node* removeNthFromEnd(Node* head, int n) {
     //Write your solution here.    
    }
{% endhighlight %}
