<h1>Stack Implementations in C++</h1>
    <h2>Aim</h2>
    <p>
        To implement and study two methods for handling stacks in C++: one using a custom array-based approach and another using the C++ Standard Template Library (STL). This experiment highlights the differences between manual implementation and the convenience provided by STL.
    </p>
    <h2>Theory</h2>
    <p>
        A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. Elements can be added or removed only from one end, referred to as the top of the stack. Stacks can be implemented using arrays, linked lists, or libraries like the C++ Standard Template Library (STL).
    </p>
    <p>
        Key operations of a stack include:
    </p>
    <ul>
        <li><strong>Push</strong>: Adding an element to the top of the stack.</li>
        <li><strong>Pop</strong>: Removing the element at the top of the stack.</li>
        <li><strong>Peek</strong>: Accessing the element at the top without removing it.</li>
    </ul>
    <h2>Algorithms</h2>
    <h3>Array-Based Stack</h3>
    <ol>
        <li>Initialize the stack with a given capacity.</li>
        <li>Set the top pointer to -1, indicating an empty stack.</li>
        <li>To <b>push</b> an element:
            <ul>
                <li>If the stack is full (top equals capacity - 1), print a stack overflow message.</li>
                <li>Otherwise, increment the top pointer and insert the element at the new top position.</li>
            </ul>
        </li>
        <li>To <b>pop</b> an element:
            <ul>
                <li>If the stack is empty (top is -1), print a stack underflow message.</li>
                <li>Otherwise, decrement the top pointer to remove the element at the top.</li>
            </ul>
        </li>
        <li>To <b>peek</b> at the top element, return the element at the top pointer unless the stack is empty.</li>
    </ol>
    <h3>STL-Based Stack</h3>
    <ol>
        <li>Initialize an empty stack using the <code>std::stack</code> from C++ STL.</li>
        <li>To <b>push</b> an element:
            <ul>
                <li>Use the <code>push()</code> function to add elements to the top of the stack.</li>
            </ul>
        </li>
        <li>To <b>pop</b> an element:
            <ul>
                <li>Use the <code>pop()</code> function to remove the top element of the stack.</li>
            </ul>
        </li>
        <li>To <b>peek</b> at the top element:
            <ul>
                <li>Use the <code>top()</code> function to access the top element without removing it.</li>
            </ul>
        </li>
    </ol>
    <h2>Explanation</h2>
    <h3>Array-Based Stack</h3>
    <p>
        This implementation manually manages all the core stack operations using arrays. The stack has a fixed size, and we keep track of the top element using a pointer. This approach gives more control but requires careful handling of boundary conditions such as overflow and underflow.
    </p>
    <h3>STL-Based Stack</h3>
    <p>
        The STL-based stack uses the C++ Standard Library, providing a more straightforward and flexible approach. It abstracts the internal details of the stack, handling dynamic resizing and boundary conditions internally, making the code easier to manage.
    </p>
