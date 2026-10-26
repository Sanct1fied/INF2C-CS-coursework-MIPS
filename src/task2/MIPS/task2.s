.text
.globl task2
# Print rows of stars, separated by one space; no trailing spaces.
# Arguments in $a0/$a1; result in $v0. Preserve $s0-$s7 and $sp.
task2:
    addiu $sp, $sp, -16
    sw $ra, 12($sp)
    sw $s2, 8($sp)
    sw $s1, 4($sp)
    sw $s0, 0($sp)
    

    move $s0, $a0   # arguement: number of rows 
    li $s1, 0       # i = 0
row_loop:
    slt $t0, $s1, $s0   #if i is less than rows -> $t0 = 0
    beqz $t0, done    #if $t0=0 -> done
    nop

    li $s2, 0    # j = 0
col_loop:
    slt $t0, $s1, $s2     # if i less than j  -> $t0 = 0
    bnez $t0, row_end    # if $t0 != 0 -> row_end
    nop

    beqz $s2, nospace
    nop
    li $a0, 32        #' ' ascii value is 32
    jal printChar 
    nop
nospace: #if its the first * we dont need a space
    li $a0, 42             #'*' ascii value is 42
    jal printChar
    nop

    addiu $s2, $s2, 1    #increment j
    j col_loop
    nop
row_end:
    jal printLn
    nop
    addiu $s1, $s1, 1    #increment i
    j row_loop
    nop
done:
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $s2, 8($sp)
    lw $ra, 12($sp)
    addiu $sp, $sp, 16
    jr $ra
    nop
