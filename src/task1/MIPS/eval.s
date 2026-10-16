.text
main:
        li      $t0, 1
        bne     $a0, $t0, usage_error
        nop

        lw      $a0, 0($a1)
        jal     task1
        nop

        move    $a0, $v0
        li      $v0, 17
        syscall

usage_error:
        li      $a0, 1
        li      $v0, 17
        syscall
