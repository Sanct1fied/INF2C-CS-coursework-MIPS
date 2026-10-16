.text
.globl task5
# Count overlapping matches; an empty pattern has zero matches.
# Arguments in $a0/$a1; result in $v0. Preserve $s0-$s7 and $sp.
task5:
    # Add your code here.
    li $v0, -1
    jr $ra
    nop
