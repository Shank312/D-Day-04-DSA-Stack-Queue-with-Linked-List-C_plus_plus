# 📚 Stack and Queue using Singly Linked List (C++)

## 🧠 Objective

Implement **Stack** and **Queue** data structures from scratch using **singly linked list** in C++. This project helps you understand core **Data Structures and Algorithms (DSA)** by building the logic manually, without STL.

---

## 🛠️ Features

### ✅ Stack (LIFO - Last In, First Out)
- Push an element onto the stack
- Pop an element from the top
- Peek the top element
- Display all elements in stack

### ✅ Queue (FIFO - First In, First Out)
- Enqueue (insert) an element at the rear
- Dequeue (remove) an element from the front
- Peek at the front element
- Display all elements in queue

---

## 🧩 Concepts Used
- Singly Linked List (custom `Node` class)
- Object-Oriented Programming in C++ (classes, constructors)
- Dynamic Memory Allocation (`new` / `delete`)
- Edge case handling (empty stack or queue)

---

## 📦 File Structure

📁 DSA Stack + Queue with Linked List (C++)
│
├── stack_queue.cpp # Full C++ implementation
├── README.md # Project overview and usage


---

## 🚀 Sample Output

```bash
Pushed: 10
Pushed: 20
Top element: 20
Popped: 20
Stack: 10 -> Null

Enqueued: 100
Enqueued: 200
Front element: 100
Dequeued: 100
Queue: 200 -> Null

🏗️ How It Works
✅ Stack Logic
push() creates a new node and inserts it at the beginning (top)

pop() deletes the top node and reassigns top

peek() shows top->data without removal

✅ Queue Logic
enqueue() inserts at the rear

dequeue() deletes from the frontNode

front() displays frontNode->data

📌 How to Run
Open your terminal or IDE

Compile the file:

g++ stack_queue.cpp -o stack_queue

Run the executable:

./stack_queue       # On Linux/Mac
stack_queue.exe     # On Windows

🙌 Contribution
Feel free to fork this repository and experiment. Add new features like:

Circular Queue

Doubly Linked List versions

STL comparisons

Unit testing with assertions

📘 Author
Shankar Kumar
Stack & Queue DSA Project – Day 04 of AI Mastery Plan
🔗 GitHub: @Shank312

⭐️ Show Your Support
If you found this useful:

⭐ Star the repo

🐛 Raise issues or suggestions

📣 Share with other DSA learners!

🏁 License
This project is open source and available under the MIT License.
