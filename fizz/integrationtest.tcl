#!/usr/bin/expect -f
# For colors
proc capability cap {expr {![catch {exec tput -S << $cap}]}}
proc colorterm {} {expr {[capability setaf] && [capability setab]}}
proc tput args {exec tput -S << $args >/dev/tty}
array set color {black 0 red 1 green 2 yellow 3 blue 4 magenta 5 cyan 6 white 7}
proc foreground x {exec tput -S << "setaf $::color($x)" > /dev/tty}
proc background x {exec tput -S << "setab $::color($x)" > /dev/tty}
proc reset {} {exec tput sgr0 > /dev/tty}
#Put your test case here
eval spawn [lrange $argv 0 end]
#expect "What is the number that you want to calculate:" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
#send "15\r"
#expect "number=1
number=2
Fizz
number=4
Buzz
Fizz
number=7
number=8
Fizz
Buzz
number=11
Fizz
number=13
number=14
FizzBuzz" {foreground green; puts "PASSED";reset} default {foreground red;puts "FAILED";reset}
