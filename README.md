<h1>C</h1>

<h2>What is C?</h2>

  <p>&#183; C is a general-purpose programming language that has been widely used for over 50 years.

  &#183; C is very powerful; it has been used to develop operating systems, databases, applications, etc.

  &#183; It was created by Dennis Ritchie at the Bell Laboratories in 1972.

  &#183; It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.

  &#183; C is strongly associated with UNIX, as it was developed to write the UNIX operating system.</p>

<h2>Why Learn C?</h2>

  <p>&#183; It is one of the most popular programming languages in the world

  &#183; If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar

  &#183; C is very fast, compared to other programming languages, like Java and Python

  &#183; C is very versatile; it can be used in both applications and technologies</p>

<h2>Difference between C and C++</h2>

  <p>&#183; C++ was developed as an extension of C, and both languages have almost the same syntax

  &#183; The main difference between C and C++ is that C++ support classes and objects, while C does not</p>

<h2>Get Started With C</h2>

<p>To start using C, you need two things:

  &#183; A text editor, like Notepad, to write C code

  &#183; A compiler, like GCC, to translate the C code into a language that the computer will understand

There are many text editors and compilers to choose from. In this tutorial, we will use an <b><i>IDE</b></i> (see below).</p>

<h2>C Install IDE</h2>

  &#183; An IDE (Integrated Development Environment) is used to edit AND compile the code.

  &#183;Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C code.

<b>Note:</b> Web-based IDE's can work as well, but functionality is limited.

  &#183; We will use <b>Code::Blocks</b> in our tutorial, which we believe is a good place to start.

  &#183; You can find the latest version of Codeblocks at <a href="http://www.codeblocks.org/">http://www.codeblocks.org/</a>. Download the <code>mingw-setup.exe</code> file, which will install the text editor with a compiler.</p>

<h2>C Quickstart</h2>

<p>Let's create our first C file.

Open Codeblocks and go to <b>File > New > Empty File</b>.

Write the following C code and save the file as <code>myfirstprogram.c</code> (<b>File > Save File as</b>):</p>

<h3>myfirstprogram.c</h3>

<p>#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}</p>
