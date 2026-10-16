.data
main_a: .space 65536
main_b: .space 65536
.text
main:
    la $a0, main_a
    li $a1, 65536
    jal readString
    nop
    la $a0, main_b
    li $a1, 65536
    jal readString
    nop
    la $a0, main_a
    la $a1, main_b
    jal task4
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
