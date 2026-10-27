.text
.globl task3
# Print a hollow diamond of height 2 * rows - 1; no trailing spaces. Nonpositive rows print nothing.
# Arguments in $a0/$a1; result in $v0. Preserve $s0-$s7 and $sp.
task3:
    addiu $sp, $sp, -28
    sw $ra, 24($sp)
    sw $s5, 20($sp)
    sw $s4, 16($sp)
    sw $s3, 12($sp)
    sw $s2, 8($sp)
    sw $s1, 4($sp)
    sw $s0, 0($sp)

    move $s0, $a0  #number of rows

    blt $s0, $zero, done


    li $s1, 0      #initialise i 
    
outer_loop:
    mul $t1, $s0, 2        # 2*rows
    addi $t1, $t1, -1      # 2*rows - 1
    slt $t0, $s1, $t1 
    beqz $t0, done
    nop

    slt $t0, $s1, $s0
    beqz $t0, krows
    nop
    move $s3, $s1
    j k_done
    nop

krows:
    mul $t1, $s0, 2 #multiply by 2
    addi $t1, $t1, -2 #subtract 2
    sub $s3, $t1, $s1  #subtract I

k_done:

    move $s4, $s0     #initialise left = rows
    move $s5, $s0     #initialise right = rows
    sub $s4, $s4, $s3   # left - k
    add $s5, $s5, $s3   # right + k
    sub $s4, $s4, 1
    sub $s5, $s5, 1

    li $s2, 0 #j=0

inner_loop:
    slt $t2, $s5, $s2
    bnez $t2, inner_done
    nop

    li $a0, 32                   #default case is a space
    beq $s2, $s4, star
    nop

    bne $s2, $s5, print
    nop

star:
    li $a0, 42      #print star

print:
    jal printChar
    nop
    addi $s2, $s2, 1
    j inner_loop
    nop

inner_done:
    jal printLn
    nop
    addi $s1, $s1, 1
    j outer_loop
    nop

done:
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $s2, 8($sp)
    lw $s3, 12($sp)
    lw $s4, 16($sp)
    lw $s5, 20($sp)
    lw $ra, 24($sp)
    addiu $sp, $sp, 28
    jr $ra
    nop
