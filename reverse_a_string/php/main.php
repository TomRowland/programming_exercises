<?php
// 1 determine if there are 2 command line args
if (sizeof($argv) != 2) {
    echo "error: no command line argument";
    exit(-1);
}

// 2 print each character of the command line arg in reverse order
$length = strlen($argv[1]);
for ($i = $length-1; $i > -1; $i--) {
    echo $argv[1][$i];
}
echo "\n";
?>
