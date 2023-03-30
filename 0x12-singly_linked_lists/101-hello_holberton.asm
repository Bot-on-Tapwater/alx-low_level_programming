global main
extern printf

section .data
    hello_msg db "Hello, Holberton", 0x0a, 0

section .text
main:
    push rbp            ; Save the base pointer
    mov rbp, rsp        ; Set the base pointer to the current stack pointer

    lea rdi, [hello_msg] ; Load the address of the hello message into rdi
    mov rax, 0          ; Set the first argument to 0 to indicate default format
    call printf         ; Call the printf function to print the message

    mov rsp, rbp        ; Reset the stack pointer to the base pointer
    pop rbp             ; Restore the base pointer
    xor eax, eax        ; Set the return value to 0
    ret                 ; Return to the caller
