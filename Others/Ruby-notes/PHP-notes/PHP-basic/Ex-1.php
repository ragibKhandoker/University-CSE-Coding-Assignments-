<?php
// Create an indexed array $x with elements 1, 2, 3, 4, 5
$x = array(1, 2, 3, 4, 5);

// Dump the variable $x to display its structure and values
var_dump($x);

// Unset the element with index 3 in the array $x
unset($x[3]);

// Reset the array indices after unset using array_values()
$x = array_values($x);

// Echo a newline character for better formatting
echo '';

// Dump the variable $x again after unset and array_values
var_dump($x);
?>
