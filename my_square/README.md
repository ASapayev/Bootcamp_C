<div class='card-block'>
<div class='row'>
<div class='col tab-content'>
<div class='tab-pane show' id='subject' role='tabpanel'>
<div class='row'>
<div class='col-md-12 col-xl-12'>
<div class='markdown-body'>
<p class='text-muted m-b-15'>
<h1>My Square</h1>
<p>Remember to git add &amp;&amp; git commit &amp;&amp; git push each exercise!</p>
<p>We will execute your function with our test(s), please DO NOT PROVIDE ANY TEST(S) in your file</p>
<p>For each exercise, you will have to create a folder and in this folder, you will have additional files that contain your work. Folder names are provided at the beginning of each exercise under <code>submit directory</code> and specific file names for each exercise are also provided at the beginning of each exercise under <code>submit file(s)</code>.</p>
<hr>
<table>
<thead>
<tr>
<th>My Square</th>
<th></th>
</tr>
</thead>
<tbody>
<tr>
<td>Submit directory</td>
<td>ex00</td>
</tr>
<tr>
<td>Submit file</td>
<td>my_square.c</td>
</tr>
</tbody>
</table>
<h3>Description</h3>
<p>Create a program which displays a beautiful square.</p>
<p>my_square(5,3) should display:</p>
<pre><code class="language-plain">$&gt;./a.out 5 3
o---o
|   |
o---o
$&gt;
</code></pre>
<p>my_square(5, 1) should display:</p>
<pre><code class="language-plain">$&gt;./a.out 5 1
o---o
$&gt;
</code></pre>
<p>my_square(1, 1) should display:</p>
<pre><code class="language-plain">$&gt;./a.out 1 1
o
$&gt;
</code></pre>
<p>my_square(1, 5) should display:</p>
<pre><code class="language-plain">$&gt;./a.out 1 5
o
|
|
|
o
$&gt;
</code></pre>
<p>my_square(4, 4) should display:</p>
<pre><code class="language-plain">$&gt;./a.out 4 4
o--o
|  |
|  |
o--o
$&gt;
</code></pre>
<p>Tips:</p>
<pre><code class="language-plain">0.
$&gt;gcc my_file.c
$&gt;./a.out

1.
int main(int ac, char **av);

2.
int x = atoi(av[1]);
int y = atoi(av[2]);

3.
Be careful segfault. :-)
</code></pre>
<p>From docode you can download the qwasar_my_square by executing this command to compare your output with ours:</p>
<pre><code class="language-plain">curl -s https://storage.googleapis.com/qwasar-public/qwasar_my_square.tgz | tar zxvf - -C ./
</code></pre>
<p>It works exactly like yours should be working:</p>
<pre><code class="language-plain">$&gt;./qwasar_my_square 4 4
o--o
|  |
|  |
o--o
$&gt;
</code></pre>

</p>
</div>

</div>
</div>
</div>
