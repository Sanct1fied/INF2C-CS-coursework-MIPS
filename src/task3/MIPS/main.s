.text
main:
    li $a0, 5
    jal task3
    nop
    move $v0, $zero
    move $a0, $v0
    li $v0, 17
    syscall
