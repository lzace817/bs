.global _start

_start:
    mov rdx, message_len    # this is the same ...
    jmp foo

message:
    .ascii "Hello world\n"
message_len = . - message

foo:
    mov rdx, message_len    # ... as this

    mov rax, 60
    mov rdi, 0
    syscall

