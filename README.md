<!-- Project Title -->
<div align="center">
  <h1 align="center">🚀 LeetCode Solutions 📝</h1>
  <br>
  <img src="https://assets.leetcode.com/static_assets/public/images/LeetCode_Sharing.png" alt="LeetCode Logo" width="700">
  <br>
</div>



<!-- Project Description -->
<h2 align="center" style="font-size: 18px;">📚 Explore my comprehensive collection of solutions to LeetCode problems, meticulously organized by topic, accompanied by detailed explanations, difficulty ratings, and company tags. Enhance your problem-solving skills with insightful insights and diverse challenges! 🌟</h2>
 

<!-- Table of Contents -->
## Table of Contents
- [About](#about)
- [Arrays and Hashing](#array-and-hashing)
- [Two Pointers](#two-pointers)
- [Sliding Window](#sliding-window)
- [Stack](#stack)
- [Binary Search](#binary-search)
- [Linked List](#linked-list)
- [Trees](#trees)
- [Tries](#tries)
- [Heap/Priority Queue](#heap-priority-queue)
- [Backtracking](#backtracking)
- [Graphs](#graphs)
- [Advanced Graphs](#advanced-graphs)
- [1-D Dynamic Programming](#1-d-dynamic-programming)
- [2-D Dynamic Programming](#2-d-dynamic-programming)
- [Greedy](#greedy)
- [Intervals](#intervals)
- [Math & Geometry](#math-geometry)
- [Bit Manipulation](#bit-manipulation)
- [Contribution](#contribution)
- [Contact](#contact)


<!-- About Section -->
## About ℹ️ <a name="about"></a>
Welcome to my LeetCode Solutions repository! Here, you'll find my solutions to various LeetCode problems, neatly organized by topics. Each problem comes with a detailed explanation to help you understand the solution better. Whether you're a beginner or an experienced coder, I hope you find this repository helpful in your journey of mastering algorithms and data structures.

<!-- Array and Hashing Section -->
## Arrays and Hashing 📚<a name="array-and-hashing"></a>

| #   | Title                                                | Solution                                | Explanation                        | Difficulty | Company |
| --- | ---------------------------------------------------- | ---------------------------------------| ---------------------------------- | ---------- | --------|
| 217  | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)   | [C++](https://github.com/Md-SabbirHosen/Leetcode-Solutions/blob/main/Arrays%20%26%20Hashing/Contains%20Duplicate.cpp) | [Explanation](https://github.com/Md-SabbirHosen/Leetcode-Solutions/blob/main/Arrays%20%26%20Hashing/explanation.md) | Easy       |Amazon, Adobe, Google, Apple, Microsoft, Bloomberg, Uber, Yahoo, TCS  |

<!-- Two Pointers Section -->
## Two Pointers 📚

<table id="problemTable" style="width:100%; border-collapse: collapse; border: 1px solid #ddd;">
  <tr style="background-color: #f2f2f2;">
    <th style="padding: 8px; border: 1px solid #ddd;">#</th>
    <th style="padding: 8px; border: 1px solid #ddd;">Title</th>
    <th style="padding: 8px; border: 1px solid #ddd;">Solution</th>
    <th style="padding: 8px; border: 1px solid #ddd;">Explanation</th>
    <th style="padding: 8px; border: 1px solid #ddd;">Difficulty</th>
    <th style="padding: 8px; border: 1px solid #ddd;">Company</th>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ddd;">11</td>
    <td style="padding: 8px; border: 1px solid #ddd;"><a href="https://leetcode.com/problems/container-with-most-water/description/">Container With Most Water</a></td>
    <td style="padding: 8px; border: 1px solid #ddd;"><a href="https://github.com/Md-SabbirHosen/Leetcode-Solutions/blob/main/Two%20Pointers/Container%20With%20Most%20Water.cpp">C++</a></td>
    <td style="padding: 8px; border: 1px solid #ddd;"><a href="https://github.com/Md-SabbirHosen/Leetcode-Solutions/blob/main/Two%20Pointers/Explanation.md">Explanation</a></td>
    <td style="padding: 8px; border: 1px solid #ddd;">Medium</td>
    <td style="padding: 8px; border: 1px solid #ddd;">Amazon, Microsoft, Adobe, Facebook, Google, Apple, Bloomberg, Swiggy, Goldman Sachs</td>
  </tr>
  <!-- Add more rows as needed -->
</table>

<!-- JavaScript function to sort the table -->
<script>
function sortTable() {
  var table, rows, switching, i, x, y, shouldSwitch;
  table = document.getElementById("problemTable");
  switching = true;
  while (switching) {
    switching = false;
    rows = table.getElementsByTagName("TR");
    for (i = 1; i < (rows.length - 1); i++) {
      shouldSwitch = false;
      x = rows[i].getElementsByTagName("TD")[4];
      y = rows[i + 1].getElementsByTagName("TD")[4];
      if (x.innerHTML.toLowerCase() > y.innerHTML.toLowerCase()) {
        shouldSwitch = true;
        break;
      }
    }
    if (shouldSwitch) {
      rows[i].parentNode.insertBefore(rows[i + 1], rows[i]);
      switching = true;
    }
  }
}
</script>




<!-- Contribution Section -->
## Contribution 🚀 <a name = "contribution"></a>

I welcome contributions from fellow developers! Whether you want to add new solutions, improve existing ones, or provide better explanations, your contributions are highly appreciated. Please feel free to fork this repository, make your changes, and submit a pull request.

<!-- Contact Section -->
## Contact 📧 <a name="contact"></a>

For any inquiries or suggestions, feel free to reach out to me:

- **Email:** [mdsabbirhosen926@gmail.com](mailto:mdsabbirhosen926@gmail.com)
- **LinkedIn:** [Md. Sabbir Hosen](https://www.linkedin.com/in/md-sabbir-hosen-b7978b1b0/)
- **GitHub:** [Md-Sabbir Hosen](https://github.com/Md-SabbirHosen)

Let's connect and grow together in the world of algorithms and programming!
