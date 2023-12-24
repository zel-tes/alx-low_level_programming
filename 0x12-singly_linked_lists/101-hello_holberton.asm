section .data
    hello db 'Hello, Holberton!', 0

section .text
    global main

extern printf

main:
    mov rdi, hello
    call printf

    add rsp, 8

    mov rax, 60
    xor rdi, rdi
    syscall
