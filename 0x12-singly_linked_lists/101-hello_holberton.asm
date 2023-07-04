global main
extern printf

section .data
    message: db "Hello, Holberton", 0
    format: db "%s", 10, 0

section .text
main:
    sub rsp, 8
    mov edi, format
    mov esi, message
    xor eax, eax
    call printf
    add rsp, 8
    xor eax, eax
    ret
