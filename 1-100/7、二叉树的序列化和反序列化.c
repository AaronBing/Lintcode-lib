描述
设计一个算法，并编写代码来序列化和反序列化二叉树。将树写入一个文件被称为“序列化”，读取文件后重建同样的二叉树被称为“反序列化”。

如何反序列化或序列化二叉树是没有限制的，你只需要确保可以将二叉树序列化为一个字符串，并且可以将字符串反序列化为原来的树结构。

对二进制树进行反序列化或序列化的方式没有限制，LintCode将您的serialize输出作为deserialize的输入，它不会检查序列化的结果。

您在真实的面试中是否遇到过这个题？  
样例
给出一个测试数据样例， 二叉树{3,9,20,#,#,15,7}，表示如下的树结构：

  3
 / \
9  20
  /  \
 15   7
我们的数据是进行BFS遍历得到的。当你测试结果wrong answer时，你可以作为输入调试你的代码。

你可以采用其他的方法进行序列化和反序列化。