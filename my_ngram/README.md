# arc-01-my_ngram
<div class="card-block">
<div class="row">
<div class="col tab-content">
<div class="tab-pane active show" id="subject" role="tabpanel">
<div class="row">
<div class="col-md-12 col-xl-12">
<div class="markdown-body">
<p class="text-muted m-b-15">
</p><h1>My Ngram</h1>
<p>Remember to git add &amp;&amp; git commit &amp;&amp; git push each exercise!</p>
<p>We will execute your function with our test(s), please DO NOT PROVIDE ANY TEST(S) in your file</p>
<p>For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. Folder names are provided at the beginning of each exercise under <code>submit directory</code> and specific file names for each exercise are also provided at the beginning of each exercise under <code>submit file(s)</code>.</p>
<hr>
<table>
<thead>
<tr>
<th>My Ngram</th>
<th></th>
</tr>
</thead>
<tbody>
<tr>
<td>Submit directory</td>
<td>.</td>
</tr>
<tr>
<td>Submit files</td>
<td>Makefile - *.c - *.h</td>
</tr>
<tr>
<td>Languages</td>
<td>It needs to be completed in the language you are working on right now. If you are doing Bootcamp Javascript, then javascript (file extension will be .js). If you are doing Bootcamp Ruby, then Ruby (file extension will be .rb). It goes the same for Python, Java, C++, Rust, ...</td>
</tr>
</tbody>
</table>
<h3>Description</h3>
<h3>SPECIFICATIONS</h3>
<p>Write a program my_ngram; It will count the number of occurrences per character.</p>
<h3>NAME</h3>
<p>my_ngram</p>
<h3>SYNOPSIS</h3>
<p>my_ngram text [text2, text3]</p>
<h3>DESCRIPTION</h3>
<p>In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.</p>
<p>Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.</p>
<p>My Ngram will take 1 or multiple strings as arguments.</p>
<p>It will display, one per line, each character and the numbers of times it appears.</p>
<p>Order will be alphanumerical.</p>
<p><strong>Example 00</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "abcdef"
a:1
b:1
c:1
d:1
e:1
f:1
$&gt;
</code></pre>
<p><strong>Example 01</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "        "
 :8
$&gt;
</code></pre>
<p>8 spaces :-)</p>
<p><strong>Example 02</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$&gt;
</code></pre>
<h3>Technical information:</h3>
<ol>
<li>(If you are doing this as project) you must create a Makefile, and the output is the command itself</li>
<li>You can use:</li>
</ol>
<ul>
<li>printf(3)</li>
<li>write(2)</li>
</ul>
<ol start="3">
<li>You can NOT use:</li>
</ol>
<ul>
<li>Any functions/syscalls which does not appear in the previous list</li>
<li>Yes, it includes <strong>exit</strong>
</li>
<li>Multiline macros are forbidden</li>
<li>Include another .c is forbidden</li>
<li>Macros with logic (while/if/variables/...) are forbidden</li>
</ul>
<h3>Requirements</h3>
<ul>
<li>Your code must be compiled with the flags <strong>-Wall -Wextra -Werror</strong>.</li>
<li>Your makefile must have a clean &amp; fclean rules.</li>
</ul>
<p>Example of some rules for Makefiles:</p>
<pre class=" language-plain"><code class=" language-plain">all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
</code></pre>
<h3>Warnings</h3>
<p>It's a bad practice to submit "object/binary files". Gandalf will reject your project if you submit your binary. (with the following message: "pushed file wrong format")</p>
<p></p>
</div>

</div>
</div>
</div>
<div class="tab-pane" id="resources" role="tabpanel">
<div class="row">
<div class="col-xl-12">
<div class="row text-center">
<div class="col p-t-10 f-12">
<p>

</p>
</div>
</div>
<div class="row text-center">
<div class="col">
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
