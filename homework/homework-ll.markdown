---
title: Homework LL
layout: default
---
The name of the submission should be **homework-linkedlist.cpp**, no numbers, no name, no capital letters.
All homeworks must have  the following at the top of the submitted file
<ul>
    <li>File name: homework??.cpp</li>
    <li>Created by:</li>
    <li>Created on:</li> 
    <li>Synopsis:</li>
</ul>
Skills needed to complete this assignment:
<ul>
<li>[Linked List](cse2122/lecture/linked-lists.html)</li>
</ul>
Given the following classes write a program which implements the function "sorted_insert"
{% highlight cpp %}
class Node {
public:
    double value;
    Node* pnext;
};

class List {
public:
    Node* first;
};
{% endhighlight %}

Sorted insert inserts a new node in sorted linked list in the appropriate place. 

This is the input to the program is a text file [example.txt](/cse2122/homework/hw_ll.txt)
You do not have to use fileIO you can use < to specify that we want the command immediately before the redirection symbol to get its input from the source specified immediately after the symbol, for instance
we can run the program as ./a.out < [example.txt](/cse2122/homework/hw_ll.txt).


Be careful not to type ">" by mistake, or you'll erase the contents of the file you're trying to read from. 
Your program should recognise the keywords push_back, print and sorted_insert and call appropriate functions. 
The final print should print in following format. 
5-10-20-25-30-40-45

Be careful of the corner cases. 
<ul>
    <li>If Linked list is empty then make the node as head and return it.</li>
    <li>If value of the node to be inserted is smaller than value of head node
    then insert the node at start and make it head.</li>
</ul>


