.text
.globl bonus1
# Return 0 for valid syntax, 1 for a syntax error. 
# Arguments in $a0; result in $v0. Preserve $s0-$s7 and $sp.
bonus1:
    # Add your code here.
    li $v0, -1
    jr $ra
    nop
