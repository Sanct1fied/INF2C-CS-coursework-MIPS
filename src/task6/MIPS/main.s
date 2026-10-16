.data
main_filename: .asciiz "input.txt"
main_destination: .asciiz "output.txt"
main_input: .space 65536
main_output: .space 65536
.text
main:
    la $s0, main_destination
    la $a0, main_filename
    la $a1, main_input
    li $a2, 65536
    jal loadFile
    nop
    bltz $v0, main_error
    nop
    la $a0, main_input
    la $a1, main_output
    jal task6
    nop
    bltz $v0, main_error
    nop
    move $a2, $v0
    move $a0, $s0
    la $a1, main_output
    jal saveFile
    nop
    move $a0, $v0
    li $v0, 17
    syscall
main_error:
    li $v0, 1
    move $a0, $v0
    li $v0, 17
    syscall
