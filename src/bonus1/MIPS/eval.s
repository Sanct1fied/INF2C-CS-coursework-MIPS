.data
main_filename: .asciiz "input.txt"
main_input: .space 65536
.text
main:
    bne $a0, 1, main_error
    nop
    lw $a0, 0($a1)
    la $a1, main_input
    li $a2, 65536
    jal loadFile
    nop
    bltz $v0, main_error
    nop
    la $a0, main_input
    jal bonus1
    nop
    move $a0, $v0
    jal printInt
    nop
    jal printLn
    nop
    move $v0, $zero
    move $a0, $v0
    li $v0, 17
    syscall
main_error:
    li $v0, 1
    move $a0, $v0
    li $v0, 17
    syscall
