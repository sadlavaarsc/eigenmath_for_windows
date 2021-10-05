To build and run:

	gcc eigenmath.c
	./a.out

Press ctrl-C to exit.

Eigenmath uses UTF-8 encoding. The terminal window should have UTF-8 enabled.

To run a script:

	./a.out scriptfilename

Sample scripts are available at eigenmath.org

To generate LaTeX output:

	./a.out --latex scriptfilename | tee foo.tex

To generate MathML output:

	./a.out --mathml scriptfilename | tee foo.html

To generate MathJax output:

	./a.out --mathjax scriptfilename | tee foo.html

To build eigenmath.c

	cd tools
	make eigenmath.c

eigenmath.js is a Javascript file that evaluates an Eigenmath script in a web browser.

To build eigenmath.js

	cd js
	make

Here is a template web page that uses eigenmath.js

	<html>
	<body>

	<script src="https://georgeweigt.github.io/eigenmath.js"></script>

	<textarea id="stdin" rows="24" cols="80" style="font-family:courier;font-size:12pt">

	-- Eigenmath script goes here, for example:
	draw(sin(x))

	</textarea>

	<button onclick="run()" style="font-size:20pt">Run</button>

	<p>
	<div id="stdout"></div>

	</body>
	</html>
