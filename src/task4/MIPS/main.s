.data
main_a: .asciiz "hello"
main_b: .asciiz "hello"
.text
main:
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
